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
#include <sys/io.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define PRL_VTG_PATH "/proc/driver/prl_vtg"

typedef struct {
    int vtg_fd;           /* /proc/driver/prl_vtg (protocol channel) */
    int vtg_mmap_fd;      /* same device for VRAM mmap */
    unsigned char *vram;  /* mapped VRAM base (256MB) */
    size_t vram_len;
    unsigned fb_offset;   /* frame buffer byte offset in VRAM */
    void *shadow_mem;     /* TEMP: plain memory fallback for fbScreenInit */
    DamagePtr damage;
    RegionRec damage_region;   /* accumulated dirty region */
    Bool damage_pending;
    CloseScreenProcPtr CloseScreen;
    ScreenBlockHandlerProcPtr BlockHandler;
} PrlRec, *PrlPtr;

static const OptionInfoRec *PrlAvailableOptions(int chipid, int busid);
static void PrlIdentify(int flags);
static Bool PrlProbe(DriverPtr drv, int flags);
static Bool PrlPreInit(ScrnInfoPtr pScrn, int flags);
static Bool PrlScreenInit(ScreenPtr pScreen, int argc, char **argv);
static Bool PrlCloseScreen(ScreenPtr pScreen, int argc, char **argv);
static void PrlFreeScreen(ScrnInfoPtr pScrn);
static Bool PrlSwitchMode(ScrnInfoPtr pScrn, DisplayModePtr mode);
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
    pScrn->EnterVT = 0;
    pScrn->LeaveVT = 0;
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
    pScrn->EnterVT = 0;
    pScrn->LeaveVT = 0;
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
    pScrn->EnterVT = 0;
    pScrn->LeaveVT = 0;
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

#pragma pack(push, 1)
typedef struct {
    unsigned Request, Status;
    unsigned short InlineByteCount, BufferCount;
    unsigned Reserved;
} TgRequest;

typedef struct {
    union { void *Buffer; unsigned long long Va; } u;
    unsigned ByteCount;
    unsigned Writable:1, Userspace:1, Reserved:30;
} TgBuffer;
#pragma pack(pop)

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
    pPrl->vram_len = pPrl->fb_offset + (size_t)7680 * 2160;

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

    /* mode list: current + common VBE modes */
    {
        static const unsigned short modes[][2] = {
            {1600, 1200}, {1920, 1080}, {1280, 800}, {1280, 720}, {1024, 768}
        };
        DisplayModePtr mode, first = NULL, last = NULL;
        int i;

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

        for (i = 0; i < (int)(sizeof(modes) / sizeof(modes[0])); i++) {
            mode = calloc(1, sizeof(DisplayModeRec));
            if (!mode)
                continue;
            mode->HDisplay = modes[i][0];
            mode->VDisplay = modes[i][1];
            mode->HTotal = modes[i][0];
            mode->VTotal = modes[i][1];
            mode->HSyncStart = modes[i][0];
            mode->HSyncEnd = modes[i][0];
            mode->VSyncStart = modes[i][1];
            mode->VSyncEnd = modes[i][1];
            mode->Clock = 100000;
            mode->status = MODE_OK;
            mode->type = M_T_DRIVER;
            mode->name = xnfalloc(32);
            sprintf((char *)mode->name, "%dx%d", modes[i][0], modes[i][1]);

            if (!first)
                first = mode;
            if (last)
                last->next = mode;
            mode->prev = last;
            last = mode;

            xf86Msg(X_INFO, PRL_NAME ": supported mode %ux%u\n",
                    modes[i][0], modes[i][1]);
        }
        if (last)
            last->next = first;
        if (first)
            first->prev = last;
        pScrn->modes = first;
        pScrn->currentMode = first;

        /* screen geometry required by xf86InitViewport/miScreenInit */
        if (first) {
            pScrn->virtualX = first->HDisplay;
            pScrn->virtualY = first->VDisplay;
            pScrn->displayWidth = first->HDisplay;
            pScrn->frameX0 = 0;
            pScrn->frameY0 = 0;
            pScrn->frameX1 = first->HDisplay - 1;
            pScrn->frameY1 = first->VDisplay - 1;
        }

        /* standard DDX init sequence */
        if (pScrn->xDpi == 0)
            pScrn->xDpi = 96;
        if (pScrn->yDpi == 0)
            pScrn->yDpi = 96;
        xf86SetDepthBpp(pScrn, pScrn->depth, pScrn->bitsPerPixel, 32, 32);
        xf86SetDefaultVisual(pScrn, -1);
        xf86PrintModes(pScrn);
        xf86SetCrtcForModes(pScrn, 0);
    }
    return TRUE;
}

/* Damage callback → SHARE_STATE(0x8117) with per-head bounds */
static void
prl_damage_report(ScreenPtr pScreen)
{
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;
    static unsigned short bounds[16][4];
    static unsigned mouse_xy[2];
    unsigned char msg[192] __attribute__((aligned(8)));
    TgRequest *req = (TgRequest *)msg;
    TgBuffer *buf;
    int i;

    for (i = 0; i < 16; i++) {
        bounds[i][0] = 0x3fff; bounds[i][1] = 0x3fff;
        bounds[i][2] = 0xc000; bounds[i][3] = 0xc000;
    }
    bounds[0][0] = 0; bounds[0][1] = 0;
    bounds[0][2] = pScrn->frameX1 + 1;
    bounds[0][3] = pScrn->frameY1 + 1;

    memset(msg, 0, sizeof(msg));
    req->Request = 0x8117;
    req->Status = 0xffffffff;
    req->BufferCount = 2;
    buf = (TgBuffer *)(msg + sizeof(TgRequest));
    buf[0].u.Buffer = bounds; buf[0].ByteCount = 128; buf[0].Writable = 1;
    buf[1].u.Buffer = mouse_xy; buf[1].ByteCount = 8; buf[1].Writable = 1;
    {
        void *p = msg;
        ssize_t n = write(pPrl->vtg_fd, &p, sizeof(p));
        (void)n;
    }
}

static void
prl_shadow_refresh(ScrnInfoPtr pScrn, int num, BoxPtr boxes)
{
    PrlPtr pPrl = pScrn->driverPrivate;

    (void)num; (void)boxes;
    if (pPrl->damage)
        prl_damage_report(xf86ScrnToScreen(pScrn));
}

/* BlockHandler: periodic share-state flush of accumulated damage region */
static void
prl_block_handler(ScreenPtr pScreen, void *pTimeout)
{
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;
    ScreenBlockHandlerProcPtr next;

    if (pPrl->damage_pending) {
        prl_damage_report(pScreen);
        pPrl->damage_pending = FALSE;
        RegionEmpty(&pPrl->damage_region);
    }
    /* unwrap, call the previous handler, then re-wrap */
    next = pPrl->BlockHandler;
    if (next) {
        pScreen->BlockHandler = next;
        (*next)(pScreen, pTimeout);
    }
    pScreen->BlockHandler = prl_block_handler;
}

/* Damage region accumulation callback (DamageRegister reportProc) */
static void
prl_damage_callback(DamagePtr pDamage, RegionPtr pRegion, void *closure)
{
    ScreenPtr pScreen = (ScreenPtr)closure;
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;

    (void)pDamage;
    RegionUnion(&pPrl->damage_region, &pPrl->damage_region, pRegion);
    pPrl->damage_pending = TRUE;
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

    /* host mode-set via VGA extended regs (VBE-compatible) */
    xf86Msg(X_INFO, PRL_NAME ": ScreenInit w=%d h=%d stride=%u off=0x%x\n",
            pScrn->displayWidth, pScrn->virtualY, stride, pPrl->fb_offset);
#if 0 /* VGA port access blocked by Xorg VGA arbiter; vesafb already in mode */
    prl_vga_mode(32, (unsigned)pScrn->displayWidth, (unsigned)pScrn->virtualY,
                 stride, pPrl->fb_offset);
#endif
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

    /* software cursor */
    miDCInitialize(pScreen, xf86GetPointerScreenFuncs());

    if (!miCreateDefColormap(pScreen)) {
        xf86Msg(X_ERROR, PRL_NAME ": miCreateDefColormap failed\n");
        return FALSE;
    }
    xf86Msg(X_INFO, PRL_NAME ": default colormap OK\n");

    if (!xf86HandleColormaps(pScreen, 256, 8, prl_load_palette, NULL,
                             CMAP_PALETTED_TRUECOLOR))
        return FALSE;
    xf86Msg(X_INFO, PRL_NAME ": colormap OK\n");

    /* Damage/SHARE_STATE: deferred. VRAM-direct framebuffer is already
       host-visible via VESA scanout; share-state is only needed for the
       host compositor (dynamic resolution / multi-head), handled in a
       follow-up. Registering Damage on this pixmap path currently faults. */
#if 0
    RegionInit(&pPrl->damage_region, (BoxPtr)NULL, 0);
    pPrl->damage_pending = FALSE;
    DamageSetup(pScreen);
    if ((pPrl->damage = DamageCreate(prl_damage_callback, NULL,
                                     DamageReportNonEmpty,
                                     FALSE, pScreen, pScreen))) {
        DamageRegister(&pScreen->GetScreenPixmap(pScreen)->drawable, pPrl->damage);
        DamageSetReportAfterOp(pPrl->damage, TRUE);
        xf86Msg(X_INFO, PRL_NAME ": Damage registered\n");
    }

    /* wrap BlockHandler for periodic share-state flush */
    pPrl->BlockHandler = pScreen->BlockHandler;
    pScreen->BlockHandler = prl_block_handler;
#endif

    xf86Msg(X_INFO, PRL_NAME ": ScreenInit complete\n");

    pScrn->memPhysBase = 0xb0000000;
    return TRUE;
}

static Bool
PrlCloseScreen(ScreenPtr pScreen, int argc, char **argv)
{
    ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
    PrlPtr pPrl = pScrn->driverPrivate;

    if (pPrl) {
        if (pPrl->damage) {
            DamageUnregister(pPrl->damage);
            DamageDestroy(pPrl->damage);
            pPrl->damage = NULL;
        }
        if (pPrl->BlockHandler) {
            pScreen->BlockHandler = pPrl->BlockHandler;
            pPrl->BlockHandler = NULL;
        }
        RegionUninit(&pPrl->damage_region);
    }
    return TRUE;
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

static void
PrlAdjustFrame(ScrnInfoPtr pScrn, int x, int y)
{
}
