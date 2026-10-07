/*
 * prlmouse-ng: X.Org input driver for Parallels Desktop mouse integration
 * on modern Xorg (tested: 21.1.24), clean-room reimplementation.
 *
 * Architecture (from decompiled prlmouse_drv.so, Parallels Tools 12.2.1):
 *  - binds to the i8042 AUX port event device (MatchTag "prlmouse", the
 *    udev rule xorg-prlmouse.rules tags it)
 *  - reads struct input_event records (24 bytes on 64-bit)
 *  - relative branch decodes REL_X/REL_Y/REL_WHEEL/REL_HWHEEL and
 *    BTN_LEFT/RIGHT/MIDDLE into xf86Post* calls
 *  - absolute/capture mode: TBD from reverse engineering
 */

#include <xorg-server.h>

#include <xf86.h>
#include <xf86Xinput.h>
#include <xf86_OSproc.h>
#include <exevents.h>
#include <X11/Xatom.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <linux/input.h>
#include "otg.h"
#include "mipointer.h"

#include <dlfcn.h>

/* prlvideo-ng exports this (same process); the original stack linked
 * PrlCtlShareMousePosition the same way */
extern void prl_share_mouse_position(int x, int y)
    __attribute__((weak));
extern int prl_share_state_enabled(void)
    __attribute__((weak));

#define PRLM_NAME "prlmouse"

typedef struct {
    struct otg_link link;
    int otg_ready;
    int sliding_on;          /* host acked the session */
    int batch;               /* host supports batch events */
    unsigned short abs_x, abs_y, dim_w, dim_h;
    int last_buttons;
    int logged;
    int fetch_logged;
    int evdev_active;
    volatile unsigned cell[2] __attribute__((aligned(8)));  /* host-written mouse cell */
    unsigned code, z;
    unsigned scr_w, scr_h;
    unsigned char evbuf[0xfe8];
} PrlMouseRec, *PrlMousePriv;
static int prlm_pre_init(InputDriverPtr drv, InputInfoPtr pInfo, int flags);
static void prlm_un_init(InputDriverPtr drv, InputInfoPtr pInfo, int flags);
static Bool prlm_device_control(DeviceIntPtr dev, int what);
static void prlm_read_input(InputInfoPtr pInfo);


/* ---- OTG sliding-mouse session (from the decompiled original) ------ */

static int
prlm_otg_req(PrlMousePriv p, unsigned code)
{
    unsigned *r = (unsigned *)p->evbuf;
    uint32_t actual;

    memset(p->evbuf, 0, 0x1c);
    r[0] = 1;
    r[2] = code;
    return otg_request(&p->link, p->evbuf, 0x1c, 0x1c, &actual);
}

static int
prlm_tis_register(PrlMousePriv p)
{
    unsigned char *b = p->evbuf;
    unsigned *h = (unsigned *)b;
    uint32_t pos = 0x1c, total = 0, seq = 0;
    unsigned toolinfo[10];
    const char *name = "parallels.SlidingMouse.guest.lin";
    const char *desc = "Mouse Synchronization Tool";
    const char *val = "initialized";
    unsigned ver[2] = {1, 3};
    uint32_t actual;
    int i;

    memset(b, 0, 512);
    memset(toolinfo, 0, sizeof(toolinfo));
    toolinfo[0] = 0xc; toolinfo[1] = 2; toolinfo[2] = 0xa28f;
    ((unsigned char *)toolinfo)[0xc] = 1;
    ((unsigned char *)toolinfo)[0xf] = 0x80;
    toolinfo[4] = 1;
    toolinfo[6] = 0x3041a28f;
    ((unsigned char *)toolinfo)[0x1c] = 9;

#define TIS(tag_, d_, len_) do { \
    unsigned *e = (unsigned *)(b + pos); \
    e[0] = (len_); e[1] = (tag_); e[2] = seq++; \
    if (len_) memcpy(e + 3, (d_), (len_)); \
    pos += 12 + (len_); total += 12 + (len_); \
} while (0)
    TIS(0x2001, ver, 8);
    TIS(0x20ca, desc, strlen(desc));
    TIS(0x20cb, toolinfo, 40);
    TIS(0x20cc, val, strlen(val));
    TIS(0x2191, name, strlen(name));
#undef TIS
    h[0] = 0xe; h[1] = 0; h[2] = 1; h[3] = 0;
    h[4] = total; h[5] = 0x1000;
    return otg_request(&p->link, b, pos, 0, &actual);
}

static int
prlm_sliding_enable(PrlMousePriv p)
{
    unsigned *r;

    if (otg_open(&p->link))
        return -1;
    if (prlm_tis_register(p))
        return -2;
    if (prlm_otg_req(p, 1))          /* attach */
        return -3;
    /* the ATTACH reply carries sm_ver at +0x14 (LAB_1000d7c2b);
     * the cmd-7 reply is empty */
    {
        unsigned smv = ((unsigned *)p->evbuf)[5];

        if (prlm_otg_req(p, 7))      /* abs-flag on (the original's
                                        'version query' is really this) */
            return -4;
        r = (unsigned *)p->evbuf;
        p->batch = (int)smv != 0;
        p->sliding_on = 1;
        xf86Msg(X_INFO, PRLM_NAME ": sm_ver=%u batch=%d\n", smv,
                p->batch);
    }

    /* console session completion (host FUN_1000d7af0): without these
     * the console never activates — dims stay 0, HWC stays unsupported,
     * and the PET_IO flags tell the client the console owns the
     * pointer (killing keyboard+mouse delivery) */
    {
        unsigned char *b = p->evbuf;
        unsigned *q = (unsigned *)b;
        uint32_t actual;

        /* cmd 4: monitor rect {x,y,x2,y2} + cursor {w,h,data[w*h*4]}
         * (w,h are CURSOR dims, must be < 0x81; this fills the console
         * state buffer — the activation gate) */
        {
            unsigned char lb[0x28 + 64 * 64 * 4] __attribute__((aligned(8)));
            unsigned *l = (unsigned *)lb;

            memset(lb, 0, sizeof(lb));
            l[0] = 1; l[2] = 4;
            *(unsigned *)(lb + 0x10) = 0;            /* x */
            *(unsigned *)(lb + 0x14) = 0;            /* y */
            *(unsigned *)(lb + 0x18) = p->scr_w;     /* x2 */
            *(unsigned *)(lb + 0x1c) = p->scr_h;     /* y2 */
            *(unsigned *)(lb + 0x20) = 32;           /* cursor w */
            *(unsigned *)(lb + 0x24) = 32;           /* cursor h */
            /* 32x32 transparent ARGB cursor at +0x28 (all zeros) */
            if (otg_request(&p->link, lb, 0x28 + 32 * 32 * 4, 0x10, &actual))
                return -6;
        }

    }
    return 0;
}

/* batch fetch: 44-byte event records {flags,_,_,buttons,X,Y,Z,W,_,w,h}
 * flags bit0 = absolute; this is the tablet-queue reader — without it
 * the host's absolute delivery has no consumer and input dies */
static int
prlm_sliding_fetch(PrlMousePriv p, InputInfoPtr pInfo)
{
    unsigned char *b = p->evbuf;
    unsigned *q = (unsigned *)b;
    uint32_t actual;
    int rc, n, i;

    memset(b, 0, 0x44);
    q[0] = 1; q[2] = 8; q[3] = 0; q[4] = 1; q[5] = 0xfd0;
    rc = otg_request(&p->link, b, 0x44, 0xfd0, &actual);
    if (p->fetch_logged < 8) {
        p->fetch_logged++;
        xf86Msg(X_INFO, PRLM_NAME ": fetch rc=%d actual=%u st=0x%x dlen=0x%x\n",
                rc, actual, q[1], q[5]);
    }
    if (rc)
        return -1;
    {
        uint32_t dlen = q[5];

        if (dlen == 0 || dlen > 0xfd0)
            return 0;
        n = dlen / 0x2c;
        for (i = 0; i < n; i++) {
            unsigned *e = (unsigned *)(b + 0x18 + i * 0x2c);
            int absolute = (e[0] & 1) != 0;
            unsigned buttons = e[3];
            int x = (int)e[4], y = (int)e[5];
            int z = (int)e[6], w = (int)e[7];
            static int last_btn;

            if (p->logged < 10) {
                p->logged++;
                xf86Msg(X_INFO, PRLM_NAME ": ev abs=%d btn=0x%x x=%d y=%d z=%d dims=%dx%d\n",
                        absolute, buttons, x, y, z, (int)e[9], (int)e[10]);
            }
            if (absolute && pInfo) {
                ScreenPtr scr = miPointerGetScreen(pInfo->dev);

                if (scr) {
                    x -= scr->x;
                    y -= scr->y;
                }
                xf86PostMotionEvent(pInfo->dev, TRUE, 0, 2, x, y);
            }
            if (buttons != (unsigned)last_btn) {
                int bi;

                for (bi = 1; bi <= 8; bi++) {
                    int mask = (buttons >> (bi - 1)) & 1;
                    int old = (last_btn >> (bi - 1)) & 1;

                    if (mask != old)
                        xf86PostButtonEvent(pInfo->dev, FALSE, bi,
                                            mask != 0, 0, 0);
                }
                last_btn = buttons;
            }
            (void)z; (void)w;
        }
    }
    return n;
}

/* poll host state; returns 0 and fills dims/abs when served */
static int
prlm_sliding_poll(PrlMousePriv p)
{
    unsigned short *q;

    if (!p->sliding_on)
        return -1;
    if (prlm_otg_req(p, 2))
        return -2;
    q = (unsigned short *)(p->evbuf + 0x0c);
    p->code = q[0];
    p->abs_x = q[1];
    p->abs_y = q[2];
    p->dim_w = q[3];
    p->dim_h = q[4];
    p->z = q[5];
    if (!p->logged && p->dim_w > 1) {
        p->logged = 1;
        xf86Msg(X_INFO, PRLM_NAME ": host sliding ACTIVE dims=%ux%u\n",
                p->dim_w, p->dim_h);
    }
    /* dims here are the console cursor-dims echo: any value > 1 means
     * the console session is ALIVE (original driver's check) */
    return 0;
}

static XF86ModuleVersionInfo prlm_version_rec = {
    PRLM_NAME,
    MODULEVENDORSTRING,
    MODINFOSTRING1,
    MODINFOSTRING2,
    XORG_VERSION_CURRENT,
    0, 1, 0,
    ABI_CLASS_XINPUT,
    ABI_XINPUT_VERSION,
    MOD_CLASS_XINPUT,
    {0, 0, 0, 0}
};

_X_EXPORT InputDriverRec PRLMOUSE = {
    1,
    PRLM_NAME,
    NULL,               /* Identify */
    prlm_pre_init,
    prlm_un_init,
    NULL,               /* module */
    0                   /* refCount */
};

static pointer
prlm_setup(pointer module, pointer opts, int *errmaj, int *errmin)
{
    xf86AddInputDriver(&PRLMOUSE, module, 0);
    return module;
}

_X_EXPORT XF86ModuleData prlmouseModuleData = {
    &prlm_version_rec,
    prlm_setup,
    NULL                /* teardown */
};

/* ---- device control ------------------------------------------------- */

/* poll OTG on a timer: when the host stops PS/2 injection (display
 * session active), evdev never fires and absolute events would starve */
static CARD32
prlm_wakeup_timer(OsTimerPtr timer, CARD32 now, pointer arg)
{
    InputInfoPtr pInfo = (InputInfoPtr)arg;
    PrlMousePriv p = (PrlMousePriv)pInfo->private;

    (void)timer; (void)now;
    if (p && p->sliding_on && !p->evdev_active) {
        /* batch fetch is the tablet-queue reader; it must run even
         * when evdev is silent. Main-thread OTG was believed to stall,
         * but the timer runs in the dispatch loop between requests —
         * and without this reader the host's absolute delivery dies */
        int prc = p->batch ? prlm_sliding_fetch(p, pInfo) : 0;

        if (p && p->logged < 6) {
            p->logged++;
            xf86Msg(X_INFO, PRLM_NAME ": poll#%d rc=%d c=%u abs=%u,%u dims=%ux%u Z=%d cell=%u,%u\n",
                    p->logged, prc, p->code, p->abs_x, p->abs_y,
                    p->dim_w, p->dim_h, p->z, p->cell[0], p->cell[1]);
        }
        if (prc == 0 && p->dim_w > 1 && p->dim_h > 1) {
            int x = p->abs_x, y = p->abs_y;
            ScreenPtr scr = miPointerGetScreen(pInfo->dev);

            if (scr) {
                x -= scr->x;
                y -= scr->y;
            }
            if (x < 0) x = 0;
            if (y < 0) y = 0;
            if (x >= (int)p->dim_w) x = p->dim_w - 1;
            if (y >= (int)p->dim_h) y = p->dim_h - 1;
            xf86PostMotionEvent(pInfo->dev, TRUE, 0, 2, x, y);
        }
    }
    if (p)
        p->evdev_active = FALSE;   /* read_input re-sets it */
    return 20;                     /* 20ms rearm */
}

static int
prlm_device_on(InputInfoPtr pInfo)
{
    const char *path = xf86CheckStrOption(pInfo->options, "Device",
                                          "/dev/input/mice");

    pInfo->fd = open(path, O_RDWR | O_NONBLOCK);
    if (pInfo->fd < 0) {
        xf86Msg(X_ERROR, "%s: cannot open %s (%s)\n", PRLM_NAME, path,
                strerror(errno));
        return !Success;
    }
    xf86Msg(X_INFO, "%s: opened %s (fd %d)\n", PRLM_NAME, path, pInfo->fd);
    pInfo->read_input = prlm_read_input;
    xf86FlushInput(pInfo->fd);

    if (!pInfo->private) {
        pInfo->private = calloc(1, sizeof(PrlMouseRec));
        if (pInfo->private && prl_share_state_enabled &&
            prl_share_state_enabled()) {
            PrlMousePriv pp = (PrlMousePriv)pInfo->private;
            ScrnInfoPtr pScrn = xf86Screens[0];
            int rc;

            pp->scr_w = (unsigned)pScrn->virtualX;
            pp->scr_h = (unsigned)pScrn->virtualY;
            rc = prlm_sliding_enable(pp);

            xf86Msg(X_INFO, "%s: sliding session %s (rc=%d batch=%d)\n",
                    PRLM_NAME, rc == 0 ? "ENABLED" : "unavailable",
                    rc, rc == 0 ? pp->batch : 0);
        } else {
            xf86Msg(X_INFO, "%s: sliding session OFF (ShareState disabled)\n",
                    PRLM_NAME);
        }
    }
    xf86AddEnabledDevice(pInfo);
    TimerSet(NULL, 0, 20, prlm_wakeup_timer, pInfo);
    return Success;
}

static void
prlm_device_off(InputInfoPtr pInfo)
{
    xf86RemoveEnabledDevice(pInfo);
    if (pInfo->fd >= 0) {
        close(pInfo->fd);
        pInfo->fd = -1;
    }
}

static void
prlm_read_input(InputInfoPtr pInfo)
{
    unsigned char buf[24 * 64];
    int n;
    PrlMousePriv p = (PrlMousePriv)pInfo->private;

    /* drain the evdev fd first (it is also the poll heartbeat), then
     * fetch the host sliding state and post absolute when served */
    p->evdev_active = TRUE;
    while ((n = read(pInfo->fd, buf, sizeof(buf))) > 0) {
        int recs = n / 24;
        int i, dx = 0, dy = 0, dz = 0, dw = 0;

        if (n % 24)
            continue;
        /* accumulate the whole batch, post once — per-event posting runs
         * pointer acceleration per delta and makes movement jittery */
        for (i = 0; i < recs; i++) {
            unsigned char *e = buf + i * 24;
            unsigned short type = *(unsigned short *)(e + 16);
            unsigned short code = *(unsigned short *)(e + 18);
            int value = *(int *)(e + 20);

            /* struct input_event on 64-bit: timeval(16) type code value */
            if (type == EV_REL) {
                if (code == REL_X)
                    dx += value;
                else if (code == REL_Y)
                    dy += value;
                else if (code == REL_WHEEL)
                    dz += value;
                else if (code == REL_HWHEEL)
                    dw += value;
            } else if (type == EV_KEY) {
                int btn;


                switch (code) {
                case BTN_LEFT: btn = 1; break;
                case BTN_MIDDLE: btn = 2; break;
                case BTN_RIGHT: btn = 3; break;
                case BTN_SIDE: btn = 8; break;
                case BTN_EXTRA: btn = 9; break;
                default: btn = 0; break;
                }
                if (btn)
                    xf86PostButtonEvent(pInfo->dev, FALSE, btn,
                                        value != 0, 0, 0);
            }
        }
        if (dx || dy) {
            xf86PostMotionEvent(pInfo->dev, FALSE, 0, 2, dx, dy);
            if (prl_share_mouse_position) {
                static int sx, sy;
                sx += dx; sy += dy;
                prl_share_mouse_position(sx, sy);
            }
        }
        if (dz)
            xf86PostMotionEvent(pInfo->dev, FALSE, 2, 1, dz);
        if (dw)
            xf86PostMotionEvent(pInfo->dev, FALSE, 3, 1, dw);
    }

    if (p && p->batch)
        prlm_sliding_fetch(p, pInfo);
    if (p && !p->batch && p->sliding_on && prlm_sliding_poll(p) == 0 &&
        p->dim_w > 1 && p->dim_h > 1) {
        int x = p->abs_x, y = p->abs_y;
        ScreenPtr scr = miPointerGetScreen(pInfo->dev);

        if (scr) {                    /* desktop-global -> screen-local */
            x -= scr->x;
            y -= scr->y;
        }
        if (x < 0) x = 0;
        if (y < 0) y = 0;
        if (x >= (int)p->dim_w) x = p->dim_w - 1;
        if (y >= (int)p->dim_h) y = p->dim_h - 1;
        xf86PostMotionEvent(pInfo->dev, TRUE, 0, 2, x, y);
    }
}

static void
prlm_ptr_ctl(DeviceIntPtr dev, PtrCtrl *ctl)
{
    (void)dev; (void)ctl;
}

static Bool
prlm_device_control(DeviceIntPtr dev, int what)
{
    InputInfoPtr pInfo = dev->public.devicePrivate;
    unsigned char map[16];
    int i;

    switch (what) {
    case DEVICE_INIT: {
        Atom btn_labels[8] = { 0 };
        Atom axes_labels[4] = { 0 };

        /* dix uses the posted button as an INDEX into this map (verified
         * empirically: identity-1 map shifted every button up by one,
         * left-clicks arrived as button 2) — so publish an identity map
         * for indices 1..8 */
        map[0] = 8;
        for (i = 1; i <= 8; i++)
            map[i] = i;
        if (!InitPointerDeviceStruct(&dev->public, map, 8, btn_labels,
                                     prlm_ptr_ctl, GetMotionHistorySize(),
                                     4, axes_labels))
            return !Success;
        xf86InitValuatorAxisStruct(dev, 0, 0,
                                   NO_AXIS_LIMITS, NO_AXIS_LIMITS,
                                   0, 0, 0, Relative);
        xf86InitValuatorAxisStruct(dev, 1, 0,
                                   NO_AXIS_LIMITS, NO_AXIS_LIMITS,
                                   0, 0, 0, Relative);
        xf86InitValuatorAxisStruct(dev, 2, 0,
                                   NO_AXIS_LIMITS, NO_AXIS_LIMITS,
                                   0, 0, 0, Relative);
        xf86InitValuatorAxisStruct(dev, 3, 0,
                                   NO_AXIS_LIMITS, NO_AXIS_LIMITS,
                                   0, 0, 0, Relative);
        dev->valuator->axisVal[0] = 0;
        dev->valuator->axisVal[1] = 0;
        return Success;
    }
    case DEVICE_ON:
        if (prlm_device_on(pInfo) != Success)
            return !Success;
        dev->public.on = TRUE;
        return Success;
    case DEVICE_OFF:
    case DEVICE_CLOSE:
        prlm_device_off(pInfo);
        dev->public.on = FALSE;
        return Success;
    default:
        return BadValue;
    }
}

static int
prlm_pre_init(InputDriverPtr drv, InputInfoPtr pInfo, int flags)
{
    if (flags & PROBE_DETECT)
        return Success;

    pInfo->device_control = prlm_device_control;
    pInfo->read_input = prlm_read_input;
    pInfo->switch_mode = 0;
    pInfo->fd = -1;
    pInfo->type_name = XI_MOUSE;
    pInfo->flags = XI86_SEND_CORE_EVENTS;

    xf86CollectInputOptions(pInfo, NULL);
    xf86ProcessCommonOptions(pInfo, pInfo->options);

    xf86Msg(X_INFO, "%s: initialized (%s)\n", PRLM_NAME,
            xf86CheckStrOption(pInfo->options, "Device", "/dev/input/mice"));
    return Success;
}

static void
prlm_un_init(InputDriverPtr drv, InputInfoPtr pInfo, int flags)
{
    (void)drv; (void)flags;
    xf86DeleteInput(pInfo, 0);
}
