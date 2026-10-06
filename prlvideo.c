/*
 * prlvideo-ng: X.Org video driver for Parallels Desktop 12 virtual graphics
 * on modern kernels (tested: Linux 7.1.5, Xorg 21+).
 *
 * Architecture (protocol verified end-to-end on 2026-10-06):
 *  - Mode set via Parallels VGA extended sequencer regs (VBE-compatible path)
 *  - Framebuffer direct in 256MB virtual VRAM (any offset)
 *  - Damage reported via TG_REQUEST_MM_SHARE_STATE (0x8117) on /proc/driver/prl_vtg
 *  - Session handshake: TG_REQUEST_GL_VERSION (0x8130)
 */

#include <xorg-server.h>

#include <pciaccess.h>
#include "xf86.h"
#include "xf86_OSproc.h"
#include "xf86PciInfo.h"
#include "xf86platformBus.h"
#include "fb.h"
#include "xf86cmap.h"
#include "mipointer.h"
#include "micmap.h"
#include "shadow.h"
#include "shadowfb.h"
#include "damage.h"
#include "xf86Cursor.h"
#include "cursorstr.h"
#include "randrstr.h"
#include <pthread.h>
#include <sys/io.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define PRL_VTG_PATH "/proc/driver/prl_vtg"

/* toolgate request/buffer wire format (verified against prl_tg kernel module) */
typedef struct {
    unsigned Request, Status;
    unsigned short InlineByteCount, BufferCount;
    unsigned Reserved;
} __attribute__((aligned(8))) TgRequest;

typedef struct {
    union { void *Buffer; unsigned long long Va; } u;
    unsigned ByteCount;
    unsigned Writable : 1, Userspace : 1, Reserved : 30;
} __attribute__((aligned(8))) TgBuffer;

/*
 * Host channel notes (protocol verified 2026-10-06):
 *  - 0x8117 SHARE_STATE and 0x8100/0x8101 cursor requests HANG the writing
 *    thread whenever the host display consumer is not active (opened by a
 *    full original-driver lifecycle; kept alive by the prl-keeper service).
 *    Therefore ALL vtg writes after PreInit happen on a helper thread; a
 *    stuck write costs nothing but that thread.
 *  - 0x8114 MM SET_MODE displaces the share consumer (never use it);
 *    mode changes go through the VGA extended sequencer registers.
 */
typedef struct {
    int vtg_fd;           /* /proc/driver/prl_vtg (protocol channel) */
    int vtg_mmap_fd;      /* same device for VRAM mmap */
    unsigned char *vram;  /* mapped VRAM base (256MB) */
    size_t vram_len;
    unsigned fb_offset;   /* frame buffer byte offset in VRAM */

    /* share-state + cursor sender thread (all vtg writes live here) */
    pthread_t share_thread;
    Bool thread_run;
    Bool thread_started;
    pthread_mutex_t lock;      /* protects everything below */
    RegionRec pending_dirty;   /* main thread accumulates, sender flushes */
    Bool dirty_pending;
    Bool mouse_changed;
    unsigned mouse_x, mouse_y; /* cursor position for share-state buffer1 */
    int mbx_cmd;               /* 0 none, 1 show, 2 hide */
    unsigned char cursor_plane[6 + 64 * 64 * 4]; /* host cursor image */

    /* channel availability, set by the sender thread's probes */
    Bool share_ok;             /* 0x8117 completes */
    Bool cursor_ok;            /* 0x8101 completes */
    char probe_note[160];      /* thread logs via wakeup handler (xf86Msg
                                * is not thread-safe) */
    volatile Bool probe_note_pending;
    ssize_t last_write_rc;
    int last_write_errno;

    DamagePtr damage;
    xf86CursorInfoPtr cursor_info;
    CreateScreenResourcesProcPtr CreateScreenResources;
    CloseScreenProcPtr CloseScreen;
} PrlRec, *PrlPtr;

static const OptionInfoRec *PrlAvailableOptions(int chipid, int busid);
static void PrlIdentify(int flags);
static Bool PrlProbe(DriverPtr drv, int flags);
static Bool PrlPreInit(ScrnInfoPtr pScrn, int flags);
static Bool PrlScreenInit(ScreenPtr pScreen, int argc, char **argv);
static Bool PrlCloseScreen(ScreenPtr pScreen);
static void PrlFreeScreen(ScrnInfoPtr pScrn);
static Bool PrlSwitchMode(ScrnInfoPtr pScrn, DisplayModePtr mode);
static Bool PrlEnterVT(ScrnInfoPtr pScrn);
static void PrlLeaveVT(ScrnInfoPtr pScrn);
static void PrlAdjustFrame(ScrnInfoPtr pScrn, int x, int y);
static Bool PrlDriverFunc(ScrnInfoPtr pScrn, xorgDriverFuncOp op, void *data);
static Bool PrlPciProbe(DriverPtr drv, int entity_num,
                        struct pci_device *dev, intptr_t match_data);

#define PRL_NAME        "prlvideo"
#define PRL_DRIVER_NAME "prlvideo"

static const struct pci_id_match PrlPciIdMatch[] = {
    {
        0x1ab8,          /* vendor: Parallels */
        PCI_MATCH_ANY,   /* device */
        PCI_MATCH_ANY,   /* subvendor */
        PCI_MATCH_ANY,   /* subdevice */
        0,               /* class: any */
        0,               /* class mask: none */
        0
    },
    { 0, 0, 0, 0, 0, 0, 0 }
};

_X_EXPORT DriverRec PRLVIDEO = {
    1,
    PRL_DRIVER_NAME,
    PrlIdentify,
    PrlProbe,
    PrlAvailableOptions,
    NULL,
    0,
    PrlDriverFunc,
    PrlPciIdMatch,
    PrlPciProbe,
    NULL,
};

typedef struct {
    int dummy;
} PrlOpts;

static const OptionInfoRec PrlOptions[] = {
    { -1, NULL, OPTV_NONE, {0}, FALSE }
};

static MODULESETUPPROTO(prlSetup);
static XF86ModuleVersionInfo prlVersRec = {
    "prlvideo",
    MODULEVENDORSTRING,
    MODINFOSTRING1,
    MODINFOSTRING2,
    XORG_VERSION_CURRENT,
    0, 1, 0,
    ABI_CLASS_VIDEODRV,
    ABI_VIDEODRV_VERSION,
    MOD_CLASS_VIDEODRV,
    {0, 0, 0, 0}
};

_X_EXPORT XF86ModuleData prlvideoModuleData = {
    &prlVersRec,
    prlSetup,
    NULL
};

static pointer
prlSetup(pointer module, pointer opts, int *errmaj, int *errmin)
{
    static Bool setupDone = FALSE;

    if (setupDone) return (pointer)1;
    setupDone = TRUE;
    xf86AddDriver(&PRLVIDEO, module, HaveDriverFuncs);
    return (pointer)1;
}

static SymTabRec PrlChipsets[] = {
    { 0x1ab8, "Parallels VGA" },
    { -1, NULL }
};

static PciChipsets PrlPciChipsets[] = {
    { 0x1ab8, 0x1ab8, RES_SHARED_VGA },
    { -1, -1, RES_UNDEFINED }
};

static void
PrlIdentify(int flags)
{
    xf86Msg(X_INFO, PRL_NAME ": driver for Parallels Desktop 12 virtual graphics\n");
    xf86PrintChipsets(PRL_NAME,
                      "Driver for Parallels virtual graphics", PrlChipsets);
}

static const OptionInfoRec *
PrlAvailableOptions(int chipid, int busid)
{
    return PrlOptions;
}

static Bool
PrlDriverFunc(ScrnInfoPtr pScrn, xorgDriverFuncOp op, void *data)
{
    CARD32 *flag;

    switch (op) {
    case GET_REQUIRED_HW_INTERFACES:
        flag = (CARD32 *)data;
        *flag = HW_IO | HW_MMIO;
        return TRUE;
    default:
        return FALSE;
    }
}

static Bool
PrlPlatformProbe(DriverPtr drv, int entity_num, int flags,
                 struct xf86_platform_device *device, intptr_t dev_attrib)
{
    ScrnInfoPtr pScrn;

    xf86Msg(X_INFO, PRL_NAME ": PlatformProbe entity=%d flags=%d\n",
            entity_num, flags);
    if (flags & PLATFORM_PROBE_GPU_SCREEN)
        return FALSE;

    pScrn = xf86AllocateScreen(drv, 0);
    if (!pScrn)
        return FALSE;

    pScrn->driverVersion = 0;
    pScrn->driverName = (char *)PRL_DRIVER_NAME;
    pScrn->name = (char *)PRL_NAME;
    pScrn->Probe = PrlProbe;
    pScrn->PreInit = PrlPreInit;
    pScrn->ScreenInit = PrlScreenInit;
    pScrn->SwitchMode = PrlSwitchMode;
    pScrn->AdjustFrame = PrlAdjustFrame;
    pScrn->EnterVT = PrlEnterVT;
    pScrn->LeaveVT = PrlLeaveVT;
    pScrn->FreeScreen = PrlFreeScreen;
    pScrn->ValidMode = 0;
    pScrn->progClock = TRUE;
    pScrn->chipset = (char *)PRL_NAME;

    if (device && device->pdev) {
        struct pci_device *pdev = device->pdev;
        xf86Msg(X_INFO, PRL_NAME ": PCI %04x:%04x\n",
                pdev->vendor_id, pdev->device_id);
        if (pdev->vendor_id != 0x1ab8)
            return FALSE;
    }
    xf86Msg(X_INFO, PRL_NAME ": PlatformProbe claimed device\n");
    return TRUE;
}

static Bool
PrlPciProbe(DriverPtr drv, int entity_num,
            struct pci_device *dev, intptr_t match_data)
{
    ScrnInfoPtr pScrn;

    xf86Msg(X_INFO, PRL_NAME ": PciProbe entity=%d %04x:%04x\n",
            entity_num, dev ? dev->vendor_id : 0, dev ? dev->device_id : 0);
    if (!dev || dev->vendor_id != 0x1ab8)
        return FALSE;

    pScrn = xf86AllocateScreen(drv, 0);
    if (!pScrn)
        return FALSE;

    pScrn->driverVersion = 0;
    pScrn->driverName = (char *)PRL_DRIVER_NAME;
    pScrn->name = (char *)PRL_NAME;
    pScrn->Probe = PrlProbe;
    pScrn->PreInit = PrlPreInit;
    pScrn->ScreenInit = PrlScreenInit;
    pScrn->SwitchMode = PrlSwitchMode;
    pScrn->AdjustFrame = PrlAdjustFrame;
    pScrn->EnterVT = PrlEnterVT;
    pScrn->LeaveVT = PrlLeaveVT;
    pScrn->FreeScreen = PrlFreeScreen;
    pScrn->ValidMode = 0;
    pScrn->progClock = TRUE;
    pScrn->chipset = (char *)PRL_NAME;

    /* bind to this PCI entity so the config Screen->Device chain links up */
    pScrn = xf86ConfigPciEntity(pScrn, 0, entity_num, PrlPciChipsets,
                                NULL, NULL, NULL, NULL, NULL);

    xf86Msg(X_INFO, PRL_NAME ": PciProbe claimed Parallels VGA\n");
    return pScrn != NULL;
}

static Bool
PrlProbe(DriverPtr drv, int flags)
{
    ScrnInfoPtr pScrn;
    GDevPtr *devSections;
    int numDevSections;
    int entityIndex = -1, i;

    if (flags & PROBE_DETECT) {
        xf86Msg(X_INFO, PRL_NAME ": Probe DETECT\n");
        return TRUE;
    }

    /* Match our driver name against config Device sections ("prl0"). */
    numDevSections = xf86MatchDevice(PRL_DRIVER_NAME, &devSections);
    xf86Msg(X_INFO, PRL_NAME ": MatchDevice num=%d\n", numDevSections);
    if (numDevSections <= 0)
        return FALSE;

    /* locate the Parallels VGA (1ab8) among detected PCI entities */
    for (i = 0; i < 16; i++) {
        EntityInfoPtr ent = xf86GetEntityInfo(i);
        if (ent && ent->device && ent->device->vendor == 0x1ab8) {
            entityIndex = i;
            break;
        }
        if (!ent)
            break;
    }
    xf86Msg(X_INFO, PRL_NAME ": Parallels entity index=%d\n", entityIndex);

    pScrn = xf86AllocateScreen(drv, 0);
    if (!pScrn)
        return FALSE;

    pScrn->driverVersion = 0;
    pScrn->driverName = (char *)PRL_DRIVER_NAME;
    pScrn->name = (char *)PRL_NAME;
    pScrn->Probe = PrlProbe;
    pScrn->PreInit = PrlPreInit;
    pScrn->ScreenInit = PrlScreenInit;
    pScrn->SwitchMode = PrlSwitchMode;
    pScrn->AdjustFrame = PrlAdjustFrame;
    pScrn->EnterVT = PrlEnterVT;
    pScrn->LeaveVT = PrlLeaveVT;
    pScrn->FreeScreen = PrlFreeScreen;
    pScrn->ValidMode = 0;
    pScrn->progClock = TRUE;
    pScrn->chipset = (char *)PRL_NAME;

    if (entityIndex >= 0)
        pScrn = xf86ConfigPciEntity(pScrn, 0, entityIndex, PrlPciChipsets,
                                    NULL, NULL, NULL, NULL, NULL);

    xf86Msg(X_INFO, PRL_NAME ": Probe claimed Parallels VGA\n");
    free(devSections);
    return pScrn != NULL;
}

/* Parallels toolgate wire structs */
static void
prl_load_palette(ScrnInfoPtr pScrn, int numColors, int *indices, LOCO *colors,
                 VisualPtr pVisual)
{
    (void)pScrn; (void)numColors; (void)indices; (void)colors; (void)pVisual;
}

static int
tg_sync(int fd, unsigned code, void *inl, unsigned inl_len)
{
    unsigned char msg[128] __attribute__((aligned(8)));
    TgRequest *req = (TgRequest *)msg;

    memset(msg, 0, sizeof(msg));
    req->Request = code;
    req->Status = 0xffffffff;
    req->InlineByteCount = inl_len;
    if (inl_len)
        memcpy(msg + sizeof(TgRequest), inl, inl_len);
    {
        void *p = msg;
        ssize_t n = write(fd, &p, sizeof(p));
        (void)n;
    }
    return (int)req->Status;
}

/* VGA extended sequencer mode-set (VBE-compatible single-head path) */
static void
prl_vga_mode(unsigned bpp, unsigned w, unsigned h, unsigned stride, unsigned fb_off)
{
    outb(0xa9, 0x3c4);
    outb(bpp, 0x3c5);
    outw((unsigned short)w, 0x3c5);
    outw((unsigned short)h, 0x3c5);
    outw((unsigned short)stride, 0x3c5);
    outw(60, 0x3c5);
    outb(1, 0x3c5);
    outl(fb_off, 0x3c5);
}

static Bool
PrlPreInit(ScrnInfoPtr pScrn, int flags)
{
    PrlPtr pPrl;
    unsigned gl_ver = 3;
    int status;

    if (flags & PROBE_DETECT) return TRUE;

    /* Xorg dereferences pScrn->monitor->DDC after AddScreen; must exist. */
    if (!pScrn->monitor) {
        pScrn->monitor = calloc(1, sizeof(MonRec));
        if (pScrn->monitor) {
            pScrn->monitor->DDC = NULL;
            pScrn->monitor->id = strdup("Parallels Virtual Monitor");
        }
    }

    pPrl = calloc(1, sizeof(PrlRec));
    if (!pPrl) return FALSE;
    pScrn->driverPrivate = pPrl;
    pthread_mutex_init(&pPrl->lock, NULL);

    pPrl->vtg_fd = open(PRL_VTG_PATH, O_WRONLY);
    pPrl->vtg_mmap_fd = open(PRL_VTG_PATH, O_RDWR);
    if (pPrl->vtg_fd < 0 || pPrl->vtg_mmap_fd < 0) {
        xf86Msg(X_ERROR, PRL_NAME ": cannot open %s\n", PRL_VTG_PATH);
        return FALSE;
    }

    status = tg_sync(pPrl->vtg_fd, 0x8130, &gl_ver, 4);
    xf86Msg(X_INFO, PRL_NAME ": GL_VERSION handshake st=0x%x\n", status);

    pPrl->fb_offset = 0; /* write directly at VRAM base; host VESA scanout
                            reads offset 0, so this is visible immediately.
                            (16MB offset path needs a valid host mode-set that
                            Xorg's VGA arbiter currently blocks.) */

    /* Scanout geometry is fixed at boot (GRUB_GFXMODE -> vesafb); X must
       match it exactly or the picture skews. */
    {
        unsigned short fw = 1600, fh = 1200;
        char vs[64];
        int vfd = open("/sys/class/graphics/fb0/virtual_size", O_RDONLY);

        if (vfd >= 0) {
            ssize_t n = read(vfd, vs, sizeof(vs) - 1);
            close(vfd);
            if (n > 0) {
                vs[n] = '\0';
                if (sscanf(vs, "%hu,%hu", &fw, &fh) != 2 || !fw || !fh) {
                    fw = 1600;
                    fh = 1200;
                }
            }
        }
        xf86Msg(X_INFO, PRL_NAME ": fb0 scanout %ux%u\n", fw, fh);

        {
            size_t need = (size_t)fw * 4 * fh;
            size_t floor_ = (size_t)7680 * 2160;

            pPrl->vram_len = pPrl->fb_offset + (need > floor_ ? need : floor_);
        }

        /* single mode = live scanout size (SwitchMode cannot reprogram the
           host, so advertising alternates would only skew the display) */
        {
            DisplayModePtr mode = calloc(1, sizeof(DisplayModeRec));

            pScrn->videoRam = 256 * 1024;
            pScrn->bitsPerPixel = 32;
            pScrn->depth = 24;
            pScrn->defaultVisual = TrueColor;
            pScrn->offset.red = 16;
            pScrn->offset.green = 8;
            pScrn->offset.blue = 0;
            pScrn->mask.red = 0xff0000;
            pScrn->mask.green = 0xff00;
            pScrn->mask.blue = 0xff;
            pScrn->rgbBits = 8;

            if (mode) {
                mode->HDisplay = fw;
                mode->VDisplay = fh;
                mode->HSyncStart = fw + 40;
                mode->HSyncEnd = fw + 120;
                mode->HTotal = fw + 200;
                mode->VSyncStart = fh + 5;
                mode->VSyncEnd = fh + 15;
                mode->VTotal = fh + 30;
                mode->Clock = 162000000 / (fw + 200) / (fh + 30);
                mode->status = MODE_OK;
                mode->type = M_T_DRIVER;
                mode->name = xnfalloc(32);
                sprintf((char *)mode->name, "%ux%u", fw, fh);
                mode->next = mode;
                mode->prev = mode;
            }
            pScrn->modes = mode;
            pScrn->currentMode = mode;

            /* screen geometry required by xf86InitViewport/miScreenInit */
            pScrn->virtualX = fw;
            pScrn->virtualY = fh;
            pScrn->displayWidth = fw;
            pScrn->frameX0 = 0;
            pScrn->frameY0 = 0;
            pScrn->frameX1 = fw - 1;
            pScrn->frameY1 = fh - 1;

            xf86Msg(X_INFO, PRL_NAME ": mode %ux%u\n", fw, fh);
        }
    }

    if (iopl(3) < 0) {
        xf86Msg(X_ERROR, PRL_NAME ": iopl failed (need root)\n");
        return FALSE;
    }

    pPrl->vram = mmap(NULL, pPrl->vram_len, PROT_READ | PROT_WRITE,
                      MAP_SHARED, pPrl->vtg_mmap_fd, 0);
    if (pPrl->vram == MAP_FAILED) {
        xf86Msg(X_ERROR, PRL_NAME ": VRAM mmap failed\n");
        return FALSE;
    }

    /* mode list replaced by live fb0 scanout size above */

    /* standard DDX init sequence */
    if (pScrn->xDpi == 0)
        pScrn->xDpi = 96;
    if (pScrn->yDpi == 0)
        pScrn->yDpi = 96;
    xf86SetDepthBpp(pScrn, pScrn->depth, pScrn->bitsPerPixel, 32, 32);
    xf86SetDefaultVisual(pScrn, -1);
    {
        rgb zeros = { 0, 0, 0 };
        Gamma gzeros = { 0.0, 0.0, 0.0 };
        if (!xf86SetWeight(pScrn, zeros, zeros))
            return FALSE;
        if (!xf86SetGamma(pScrn, gzeros))
            return FALSE;
    }
    xf86PrintModes(pScrn);
    xf86SetCrtcForModes(pScrn, 0);
    return TRUE;
}

/* ---- share-state / cursor sender thread -------------------------------
 * All 0x8117 / 0x8100 / 0x8101 writes happen here.  When the host display
 * consumer is inactive these writes block indefinitely (verified), so the
 * main thread never touches them; worst case is one parked thread.
 * Message shapes are ported from the decompiled original driver. */

static void
prl_send_share_state(PrlPtr pPrl, unsigned short x1, unsigned short y1,
                     unsigned short x2, unsigned short y2,
                     unsigned mx, unsigned my)
{
    unsigned short bounds[16][4];
    unsigned mouse_xy[2];
    unsigned char msg[64] __attribute__((aligned(8)));
    TgRequest *req = (TgRequest *)msg;
    TgBuffer *buf;
    int i;

    for (i = 0; i < 16; i++) {
        bounds[i][0] = 0x3fff; bounds[i][1] = 0x3fff;
        bounds[i][2] = 0xc000; bounds[i][3] = 0xc000;
    }
    bounds[0][0] = x1; bounds[0][1] = y1;
    bounds[0][2] = x2; bounds[0][3] = y2;
    mouse_xy[0] = mx; mouse_xy[1] = my;

    memset(msg, 0, sizeof(msg));
    req->Request = 0x8117;
    req->Status = 0xffffffff;
    req->BufferCount = 2;
    buf = (TgBuffer *)(msg + sizeof(TgRequest));
    buf[0].u.Buffer = bounds; buf[0].ByteCount = 128; buf[0].Writable = 1;
    buf[1].u.Buffer = mouse_xy; buf[1].ByteCount = 8; buf[1].Writable = 1;
    {
        void *p = msg;
        pPrl->last_write_rc = write(pPrl->vtg_fd, &p, sizeof(p));
        if (pPrl->last_write_rc < 0)
            pPrl->last_write_errno = errno;
    }
}

/* MOUSE_SET_POINTER show: 0x8100, 28-byte inline {x,y,hsx,hsy,w,h,stride}
 * plus the ARGB plane buffer (6-byte header + pixels). */
static void
prl_send_cursor_show(PrlPtr pPrl, const unsigned char *plane)
{
    unsigned char msg[64] __attribute__((aligned(8)));
    TgRequest *req = (TgRequest *)msg;
    TgBuffer *buf;
    unsigned *inl;

    memset(msg, 0, sizeof(msg));
    req->Request = 0x8100;
    req->Status = 0xffffffff;
    req->InlineByteCount = 0x1c;
    req->BufferCount = 1;
    inl = (unsigned *)(msg + sizeof(TgRequest));
    inl[0] = pPrl->mouse_x;                 /* raw position */
    inl[1] = pPrl->mouse_y;
    inl[2] = plane[4];                      /* hotspot x */
    inl[3] = plane[5];                      /* hotspot y */
    inl[4] = plane[2];                      /* width */
    inl[5] = plane[3];                      /* height */
    inl[6] = plane[1];                      /* stride in bytes */
    buf = (TgBuffer *)(msg + sizeof(TgRequest) + 28);
    buf[0].u.Buffer = (void *)(plane + 6);
    buf[0].ByteCount = plane[1] * plane[3];
    {
        void *p = msg;
        pPrl->last_write_rc = write(pPrl->vtg_fd, &p, sizeof(p));
        if (pPrl->last_write_rc < 0)
            pPrl->last_write_errno = errno;
    }
}

static int
prl_send_cursor_hide(PrlPtr pPrl)
{
    unsigned char msg[16] __attribute__((aligned(8)));
    TgRequest *req = (TgRequest *)msg;
    void *p = msg;

    memset(msg, 0, sizeof(msg));
    req->Request = 0x8101;
    req->Status = 0xffffffff;
    pPrl->last_write_rc = write(pPrl->vtg_fd, &p, sizeof(p));
    if (pPrl->last_write_rc < 0) {
        pPrl->last_write_errno = errno;
        return -1;
    }
    return (int)req->Status;
}

/* Probe whether a request completes at all (before the host consumer
 * gate opens it just parks).  Runs on the sender thread — no xf86Msg
 * here, it is not thread-safe; the note is printed by the wakeup handler. */
static void
prl_thread_probe(PrlPtr pPrl)
{
    int st = prl_send_cursor_hide(pPrl);

    pPrl->cursor_ok = TRUE;      /* the write returned at all */
    prl_send_share_state(pPrl, 0x3fff, 0x3fff, 0xc000, 0xc000,
                         pPrl->mouse_x, pPrl->mouse_y);
    pPrl->share_ok = TRUE;
    snprintf(pPrl->probe_note, sizeof(pPrl->probe_note),
             "probes done: hide st=0x%x share wrc=%zd errno=%d(%s)\n",
             st, pPrl->last_write_rc, pPrl->last_write_errno,
             strerror(pPrl->last_write_errno));
    pPrl->probe_note_pending = TRUE;
}

static void *
prl_share_thread(void *arg)
{
    PrlPtr pPrl = arg;
    sigset_t set;
    RegionRec dirty;
    BoxRec box;
    unsigned char plane[6 + 64 * 64 * 4];
    unsigned mx, my, hsx = 0, hsy = 0;
    int mbx;
    Bool flush, mouse;
    int beats = 0;

    sigfillset(&set);
    pthread_sigmask(SIG_BLOCK, &set, NULL);

    prl_thread_probe(pPrl);

    RegionInit(&dirty, (BoxPtr)NULL, 0);
    while (pPrl->thread_run) {
        usleep(15000);

        flush = FALSE; mouse = FALSE; mbx = 0;
        pthread_mutex_lock(&pPrl->lock);
        if (pPrl->dirty_pending) {
            RegionUnion(&dirty, &dirty, &pPrl->pending_dirty);
            RegionEmpty(&pPrl->pending_dirty);
            pPrl->dirty_pending = FALSE;
            flush = TRUE;
        }
        mx = pPrl->mouse_x; my = pPrl->mouse_y;
        if (pPrl->mouse_changed) {
            pPrl->mouse_changed = FALSE;
            mouse = TRUE;
        }
        if (pPrl->mbx_cmd) {
            mbx = pPrl->mbx_cmd;
            pPrl->mbx_cmd = 0;
            memcpy(plane, pPrl->cursor_plane, sizeof(plane));
            hsx = plane[4]; hsy = plane[5];
        }
        pthread_mutex_unlock(&pPrl->lock);

        /* heartbeat keeps the host consumer warm even when idle */
        if (++beats >= 66) {          /* ~1s at 15ms cadence */
            beats = 0;
            flush = TRUE;
        }

        if (flush || mouse) {
            if (!RegionNil(&dirty))
                box = *RegionExtents(&dirty);
            else {
                box.x1 = box.y1 = 0;
                box.x2 = 0xffff; box.y2 = 0xffff;
            }
            prl_send_share_state(pPrl, box.x1, box.y1,
                                 box.x2 + 1, box.y2 + 1,
                                 mx + hsx, my + hsy);
            RegionEmpty(&dirty);
        }

        if (mbx == 1)
            prl_send_cursor_show(pPrl, plane);
        else if (mbx == 2)
            prl_send_cursor_hide(pPrl);
    }
    RegionUninit(&dirty);
    return NULL;
}

/* Damage callback: accumulate dirty rectangles, sender thread flushes. */
static void
prl_damage_callback(DamagePtr pDamage, RegionPtr pRegion, void *closure)
{
    ScreenPtr pScreen = (ScreenPtr)closure;
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;

    (void)pDamage;
    pthread_mutex_lock(&pPrl->lock);
    RegionUnion(&pPrl->pending_dirty, &pPrl->pending_dirty, pRegion);
    pPrl->dirty_pending = TRUE;
    pthread_mutex_unlock(&pPrl->lock);
}

/* ---- hardware cursor (MOUSE_SET_POINTER 0x8100/0x8101) ---------------
 * Host plane format: [0]=type(1 mono-conv,0x20 ARGB) [1]=stride bytes
 * [2]=width [3]=height [4]=hotspot x [5]=hotspot y, pixels at +6 ARGB. */

static Bool
prl_use_hw_cursor(ScreenPtr pScreen, CursorPtr pCurs)
{
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;

    return pPrl->cursor_ok &&
        pCurs->bits->width <= 64 && pCurs->bits->height <= 64;
}

static Bool
prl_use_hw_cursor_argb(ScreenPtr pScreen, CursorPtr pCurs)
{
    return prl_use_hw_cursor(pScreen, pCurs);
}

static void
prl_load_cursor_argb(ScrnInfoPtr pScrn, CursorPtr pCurs)
{
    PrlPtr pPrl = pScrn->driverPrivate;
    unsigned w = pCurs->bits->width, h = pCurs->bits->height;

    pthread_mutex_lock(&pPrl->lock);
    pPrl->cursor_plane[0] = 0x20;
    pPrl->cursor_plane[1] = w << 2;
    pPrl->cursor_plane[2] = w;
    pPrl->cursor_plane[3] = h;
    pPrl->cursor_plane[4] = pCurs->bits->xhot;
    pPrl->cursor_plane[5] = pCurs->bits->yhot;
    memcpy(pPrl->cursor_plane + 6, pCurs->bits->argb, w * h * 4);
    pthread_mutex_unlock(&pPrl->lock);
}

/* Mono cursors: bits are source block then mask block, each row padded to
 * the 64px MaxWidth (8 bytes/row), 64 rows; bit x of byte is pixel x. */
static void
prl_load_cursor_image(ScrnInfoPtr pScrn, unsigned char *bits)
{
    PrlPtr pPrl = pScrn->driverPrivate;
    unsigned *px;
    int x, y;

    pthread_mutex_lock(&pPrl->lock);
    pPrl->cursor_plane[0] = 1;
    pPrl->cursor_plane[1] = 64 << 2;
    pPrl->cursor_plane[2] = 64;
    pPrl->cursor_plane[3] = 64;
    pPrl->cursor_plane[4] = 0;   /* hotspot kept from last ARGB load */
    pPrl->cursor_plane[5] = 0;
    px = (unsigned *)(pPrl->cursor_plane + 6);
    for (y = 0; y < 64; y++) {
        for (x = 0; x < 64; x++) {
            unsigned src = (bits[y * 8 + (x >> 3)] >> (x & 7)) & 1;
            unsigned msk =
                (bits[512 + y * 8 + (x >> 3)] >> (x & 7)) & 1;
            *px++ = (src && msk) ? 0xffffffff :    /* fg */
                    (msk) ? 0xff000000 :           /* bg */
                    0x00000000;                    /* transparent */
        }
    }
    pthread_mutex_unlock(&pPrl->lock);
}

static void
prl_show_cursor(ScrnInfoPtr pScrn)
{
    PrlPtr pPrl = pScrn->driverPrivate;

    pthread_mutex_lock(&pPrl->lock);
    pPrl->mbx_cmd = 1;
    pthread_mutex_unlock(&pPrl->lock);
}

static void
prl_hide_cursor(ScrnInfoPtr pScrn)
{
    PrlPtr pPrl = pScrn->driverPrivate;

    pthread_mutex_lock(&pPrl->lock);
    pPrl->mbx_cmd = 2;
    pthread_mutex_unlock(&pPrl->lock);
}

static void
prl_set_cursor_position(ScrnInfoPtr pScrn, int x, int y)
{
    PrlPtr pPrl = pScrn->driverPrivate;

    pthread_mutex_lock(&pPrl->lock);
    pPrl->mouse_x = x;
    pPrl->mouse_y = y;
    pPrl->mouse_changed = TRUE;
    pthread_mutex_unlock(&pPrl->lock);
}

static void
prl_set_cursor_colors(ScrnInfoPtr pScrn, int bg, int fg)
{
    /* mono conversion bakes fixed black/white; nothing to do */
    (void)pScrn; (void)bg; (void)fg;
}

/* main-thread logger for notes produced by the sender thread; both
 * handlers must be non-NULL — dix calls them unconditionally */
static void
prl_block_noop(void *data, void *pTimeout)
{
    (void)data; (void)pTimeout;
}

static void
prl_wakeup_handler(void *data, int result)
{
    ScreenPtr pScreen = (ScreenPtr)data;
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;

    (void)result;
    if (pPrl && pPrl->probe_note_pending) {
        pPrl->probe_note_pending = FALSE;
        xf86Msg(X_INFO, PRL_NAME ": %s", pPrl->probe_note);
    }
}

/* CreateScreenResources wrapper: the screen pixmap only exists after fb's
 * implementation runs, so Damage registration must happen here (during
 * ScreenInit GetScreenPixmap is still NULL — that fault cost a whole day
 * in an earlier round). */
static Bool
prl_create_screen_resources(ScreenPtr pScreen)
{
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;
    Bool ok;

    pScreen->CreateScreenResources = pPrl->CreateScreenResources;
    ok = (*pScreen->CreateScreenResources) (pScreen);
    pScreen->CreateScreenResources = prl_create_screen_resources;

    if (!ok)
        return FALSE;

    if (DamageSetup(pScreen)) {
        pPrl->damage = DamageCreate(prl_damage_callback, NULL,
                                    DamageReportNonEmpty,
                                    FALSE, pScreen, pScreen);
        if (pPrl->damage) {
            DamageRegister(&pScreen->GetScreenPixmap(pScreen)->drawable,
                           pPrl->damage);
            DamageSetReportAfterOp(pPrl->damage, TRUE);
            xf86Msg(X_INFO, PRL_NAME ": Damage registered\n");
        } else {
            xf86Msg(X_WARNING, PRL_NAME ": DamageCreate failed\n");
        }
        /* wrap AFTER DamageSetup so our teardown runs before the damage
         * layer's own CloseScreen handler */
        pPrl->CloseScreen = pScreen->CloseScreen;
        pScreen->CloseScreen = PrlCloseScreen;
    } else {
        xf86Msg(X_WARNING, PRL_NAME ": DamageSetup failed\n");
    }
    return TRUE;
}

/* ---- RandR screen size (dynamic resolution) ------------------------- */

static Bool
prl_rr_get_info(ScreenPtr pScreen, Rotation *rotations)
{
    *rotations = RR_Rotate_0;
    return TRUE;
}

static Bool
prl_rr_set_size(ScreenPtr pScreen, CARD16 width, CARD16 height,
                CARD32 mmWidth, CARD32 mmHeight)
{
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;
    PixmapPtr root;
    int stride = (width * 4 + 31) & ~31;

    if (width == pScrn->virtualX && height == pScrn->virtualY)
        return TRUE;
    if (width < 640 || width > 2560 || height < 480 || height > 1600)
        return FALSE;

    /* The extended-sequencer mode-set switches the host into read-once +
     * SHARE_STATE mode; only do it while the share consumer is proven
     * live (sender thread probes completed), else the screen would
     * freeze.  0x8114 MM SET_MODE would displace the consumer — never. */
    if (!pPrl->share_ok) {
        xf86Msg(X_WARNING, PRL_NAME ": resize needs a live share-state "
                "consumer (currently closed)\n");
        return FALSE;
    }
    prl_vga_mode(32, width, height, stride, pPrl->fb_offset);

    pScrn->virtualX = width;
    pScrn->virtualY = height;
    pScrn->displayWidth = stride / 4;
    pScrn->frameX0 = pScrn->frameY0 = 0;
    pScrn->frameX1 = width - 1;
    pScrn->frameY1 = height - 1;
    if (pScrn->currentMode) {
        pScrn->currentMode->HDisplay = width;
        pScrn->currentMode->VDisplay = height;
    }

    root = pScreen->GetScreenPixmap(pScreen);
    pScreen->ModifyPixmapHeader(root, width, height,
                                root->drawable.depth,
                                root->drawable.bitsPerPixel,
                                stride, pPrl->vram + pPrl->fb_offset);

    pScreen->mmWidth = mmWidth ? mmWidth : pScreen->mmWidth;
    pScreen->mmHeight = mmHeight ? mmHeight : pScreen->mmHeight;

    /* everything on screen is now garbage; reannounce the full frame */
    pthread_mutex_lock(&pPrl->lock);
    RegionEmpty(&pPrl->pending_dirty);
    {
        BoxRec whole = { 0, 0, width - 1, height - 1 };
        RegionReset(&pPrl->pending_dirty, &whole);
    }
    pPrl->dirty_pending = TRUE;
    pthread_mutex_unlock(&pPrl->lock);

    RRScreenSizeNotify(pScreen);
    xf86Msg(X_INFO, PRL_NAME ": RandR resize to %dx%d (stride %d)\n",
            width, height, stride);
    return TRUE;
}

static Bool
PrlScreenInit(ScreenPtr pScreen, int argc, char **argv)
{
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;
    unsigned stride;
    VisualPtr visual;
    BoxRec avail;

    stride = (unsigned)pScrn->displayWidth * 4;

    /* NO host mode-set here: programming the VGA extended sequencer
     * switches the host display pipeline from continuous VESA scanout
     * (boot mode, always live) into read-once + SHARE_STATE mode, which
     * freezes the picture unless a live consumer takes our dirty
     * notifications.  The boot mode already matches fb0 geometry. */
    xf86Msg(X_INFO, PRL_NAME ": ScreenInit w=%d h=%d stride=%u off=0x%x\n",
            pScrn->displayWidth, pScrn->virtualY, stride, pPrl->fb_offset);
    xf86Msg(X_INFO, PRL_NAME ": calling fbScreenInit\n");

    /* VRAM direct mapping (fb_offset=0): writes go straight to host
       scanout memory; this is the visible display. */
    {
        void *fbmem = (void *)(pPrl->vram + pPrl->fb_offset);

        if (!fbScreenInit(pScreen, fbmem,
                          pScrn->virtualX, pScrn->virtualY,
                          pScrn->xDpi, pScrn->yDpi, pScrn->displayWidth,
                          pScrn->bitsPerPixel))
            return FALSE;
    }
    xf86Msg(X_INFO, PRL_NAME ": fbScreenInit OK (VRAM direct)\n");

    xf86Msg(X_INFO, PRL_NAME ": fbScreenInit OK\n");

    if (pScrn->bitsPerPixel > 8) {
        visual = pScreen->visuals + pScreen->numVisuals;
        while (--visual >= pScreen->visuals) {
            if ((visual->class | DynamicClass) == DirectColor) {
                visual->offsetRed = pScrn->offset.red;
                visual->offsetGreen = pScrn->offset.green;
                visual->offsetBlue = pScrn->offset.blue;
                visual->redMask = pScrn->mask.red;
                visual->greenMask = pScrn->mask.green;
                visual->blueMask = pScrn->mask.blue;
            }
        }
    }
    xf86Msg(X_INFO, PRL_NAME ": visual setup OK, calling fbPictureInit\n");
    fbPictureInit(pScreen, 0, 0);
    xf86Msg(X_INFO, PRL_NAME ": fbPictureInit OK\n");

    /* fbdev-aligned finish sequence */
    xf86SetBlackWhitePixels(pScreen);
    xf86SetBackingStore(pScreen);

    /* hardware cursor via MOUSE_SET_POINTER; miDCInitialize must run
     * first (xf86InitCursor wraps its sprite funcs); while the channel
     * probe is pending the cursor silently stays software */
    miDCInitialize(pScreen, xf86GetPointerScreenFuncs());
    pPrl->cursor_info = xf86CreateCursorInfoRec();
    if (pPrl->cursor_info) {
        pPrl->cursor_info->MaxWidth = 64;
        pPrl->cursor_info->MaxHeight = 64;
        pPrl->cursor_info->Flags = HARDWARE_CURSOR_ARGB |
                                   HARDWARE_CURSOR_SOURCE_MASK_INTERLEAVE_1;
        pPrl->cursor_info->SetCursorColors = prl_set_cursor_colors;
        pPrl->cursor_info->SetCursorPosition = prl_set_cursor_position;
        pPrl->cursor_info->LoadCursorImage = prl_load_cursor_image;
        pPrl->cursor_info->HideCursor = prl_hide_cursor;
        pPrl->cursor_info->ShowCursor = prl_show_cursor;
        pPrl->cursor_info->UseHWCursor = prl_use_hw_cursor;
        pPrl->cursor_info->UseHWCursorARGB = prl_use_hw_cursor_argb;
        pPrl->cursor_info->LoadCursorARGB = prl_load_cursor_argb;
        if (xf86InitCursor(pScreen, pPrl->cursor_info)) {
            xf86Msg(X_INFO, PRL_NAME ": hw cursor initialized\n");
        } else {
            xf86DestroyCursorInfoRec(pPrl->cursor_info);
            pPrl->cursor_info = NULL;
            xf86Msg(X_WARNING, PRL_NAME ": hw cursor init failed, "
                    "staying software\n");
        }
    }

    if (!miCreateDefColormap(pScreen)) {
        xf86Msg(X_ERROR, PRL_NAME ": miCreateDefColormap failed\n");
        return FALSE;
    }
    xf86Msg(X_INFO, PRL_NAME ": default colormap OK\n");

    /* fb builds depth-32 visuals with ColormapEntries=2048 on this screen;
       CMapReinstallMap fills PreAllocIndices[maxColors] with numColors, so
       maxColors must cover the largest visual's entries or it overflows the
       heap by 7KB (corrupting the SYNC extension entry -> terminal crash). */
    if (!xf86HandleColormaps(pScreen, 2048, 8, prl_load_palette, NULL,
                             CMAP_PALETTED_TRUECOLOR))
        return FALSE;
    xf86Msg(X_INFO, PRL_NAME ": colormap OK\n");

    /* Damage tracking → SHARE_STATE dirty bounds; registered from
     * CreateScreenResources when the screen pixmap actually exists */
    RegionInit(&pPrl->pending_dirty, (BoxPtr)NULL, 0);
    pPrl->dirty_pending = FALSE;
    pPrl->mouse_changed = FALSE;
    pPrl->mbx_cmd = 0;
    pPrl->cursor_ok = FALSE;
    pPrl->share_ok = FALSE;
    pPrl->CreateScreenResources = pScreen->CreateScreenResources;
    pScreen->CreateScreenResources = prl_create_screen_resources;

    /* RandR 1.1 screen size: xrandr --fb WxH drives dynamic resolution */
    if (RRScreenInit(pScreen)) {
        rrScrPrivPtr rp = rrGetScrPriv(pScreen);

        rp->rrGetInfo = prl_rr_get_info;
        rp->rrScreenSetSize = prl_rr_set_size;
        RRScreenSetSizeRange(pScreen, 640, 480, 2560, 1600);
        xf86Msg(X_INFO, PRL_NAME ": RandR size range 640x480-2560x1600\n");
    } else {
        xf86Msg(X_WARNING, PRL_NAME ": RRScreenInit failed\n");
    }

    /* sender thread: probes the host channels, then flushes dirty bounds,
     * cursor updates and the ~1s share-state heartbeat off the main loop */
    RegisterBlockAndWakeupHandlers(prl_block_noop, prl_wakeup_handler, pScreen);
    pPrl->thread_run = TRUE;
    if (pthread_create(&pPrl->share_thread, NULL, prl_share_thread,
                       pPrl) == 0) {
        pPrl->thread_started = TRUE;
        xf86Msg(X_INFO, PRL_NAME ": share-state sender thread started\n");
    } else {
        pPrl->thread_run = FALSE;
        xf86Msg(X_WARNING, PRL_NAME ": sender thread create failed\n");
    }

    xf86Msg(X_INFO, PRL_NAME ": ScreenInit complete\n");

    pScrn->memPhysBase = 0xb0000000;
    return TRUE;
}

static Bool
PrlCloseScreen(ScreenPtr pScreen)
{
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;
    Bool ok;

    if (pPrl) {
        /* stop the sender first; cancel in case it is parked in a
         * blocked toolgate write (the host consumer may be gone) */
        if (pPrl->thread_started) {
            pPrl->thread_run = FALSE;
            pthread_cancel(pPrl->share_thread);
        }
        if (pPrl->damage) {
            DamageUnregister(pPrl->damage);
            DamageDestroy(pPrl->damage);
            pPrl->damage = NULL;
        }
        if (pPrl->cursor_info) {
            xf86DestroyCursorInfoRec(pPrl->cursor_info);
            pPrl->cursor_info = NULL;
        }
        RegionUninit(&pPrl->pending_dirty);
        RemoveBlockAndWakeupHandlers(prl_block_noop, prl_wakeup_handler, pScreen);
        if (pPrl->CreateScreenResources)
            pScreen->CreateScreenResources = pPrl->CreateScreenResources;
    }
    if (pPrl && pPrl->CloseScreen)
        pScreen->CloseScreen = pPrl->CloseScreen;
    ok = pScreen->CloseScreen ? (*pScreen->CloseScreen)(pScreen) : TRUE;
    return ok;
}

static void
PrlFreeScreen(ScrnInfoPtr pScrn)
{
    PrlPtr pPrl = pScrn->driverPrivate;

    if (!pPrl)
        return;
    if (pPrl->vram && pPrl->vram != MAP_FAILED)
        munmap(pPrl->vram, pPrl->vram_len);
    if (pPrl->vtg_fd >= 0)
        close(pPrl->vtg_fd);
    if (pPrl->vtg_mmap_fd >= 0)
        close(pPrl->vtg_mmap_fd);
    free(pPrl);
    pScrn->driverPrivate = NULL;
}

static Bool
PrlSwitchMode(ScrnInfoPtr pScrn, DisplayModePtr mode)
{
    return TRUE;
}

static Bool
PrlEnterVT(ScrnInfoPtr pScrn)
{
    PrlPtr pPrl = pScrn->driverPrivate;

    /* the console owned the scanout while we were away; reannounce the
     * whole frame so the host picks our framebuffer up again */
    pthread_mutex_lock(&pPrl->lock);
    {
        BoxRec whole = { 0, 0, pScrn->virtualX - 1, pScrn->virtualY - 1 };

        RegionEmpty(&pPrl->pending_dirty);
        RegionReset(&pPrl->pending_dirty, &whole);
    }
    pPrl->dirty_pending = TRUE;
    pthread_mutex_unlock(&pPrl->lock);
    return TRUE;
}

static void
PrlLeaveVT(ScrnInfoPtr pScrn)
{
    /* scanout returns to the kernel console; nothing to undo */
    (void)pScrn;
}

static void
PrlAdjustFrame(ScrnInfoPtr pScrn, int x, int y)
{
}
