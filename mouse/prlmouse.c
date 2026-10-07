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

#define PRLM_NAME "prlmouse"

static int prlm_pre_init(InputDriverPtr drv, InputInfoPtr pInfo, int flags);
static void prlm_un_init(InputDriverPtr drv, InputInfoPtr pInfo, int flags);
static Bool prlm_device_control(DeviceIntPtr dev, int what);
static void prlm_read_input(InputInfoPtr pInfo);

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

static XF86ModuleData prlm_module_data = {
    &prlm_version_rec,
    NULL,               /* setup */
    NULL                /* teardown */
};

_X_EXPORT XF86ModuleData *prlmouseModuleData = &prlm_module_data;

/* ---- device control ------------------------------------------------- */

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
    /* parity with the original: R+O_RDWR — write() is the control
     * channel for absolute-mode negotiation (magic pending RE) */
    xf86Msg(X_INFO, "%s: opened %s (fd %d)\n", PRLM_NAME, path, pInfo->fd);
    pInfo->read_input = prlm_read_input;
    xf86FlushInput(pInfo->fd);
    return Success;
}

static void
prlm_device_off(InputInfoPtr pInfo)
{
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

    while ((n = read(pInfo->fd, buf, sizeof(buf))) > 0) {
        int recs = n / 24;
        int i;

        if (n % 24)
            continue;
        for (i = 0; i < recs; i++) {
            unsigned char *e = buf + i * 24;
            unsigned short type = *(unsigned short *)(e + 16);
            unsigned short code = *(unsigned short *)(e + 18);
            int value = *(int *)(e + 20);

            /* struct input_event on 64-bit: timeval(16) type code value */
            if (type == EV_REL) {
                if (code == REL_X)
                    xf86PostMotionEvent(pInfo->dev, TRUE, 0, 1, value);
                else if (code == REL_Y)
                    xf86PostMotionEvent(pInfo->dev, TRUE, 1, 1, value);
                else if (code == REL_WHEEL)
                    xf86PostMotionEvent(pInfo->dev, FALSE, 2, 1, value);
                else if (code == REL_HWHEEL)
                    xf86PostMotionEvent(pInfo->dev, FALSE, 3, 1, value);
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
            /* EV_ABS / capture transitions: pending reverse engineering */
        }
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
    unsigned char map[32];
    int i;

    switch (what) {
    case DEVICE_INIT: {
        Atom btn_labels[8] = { 0 };
        Atom axes_labels[4] = { 0 };

        for (i = 0; i < 8; i++)
            map[i] = i + 1;
        if (!InitPointerDeviceStruct(&dev->public, map, 8, btn_labels,
                                     prlm_ptr_ctl, GetMotionHistorySize(),
                                     4, axes_labels))
            return !Success;
        xf86InitValuatorAxisStruct(dev, 0, 0,
                                   NO_AXIS_LIMITS, NO_AXIS_LIMITS,
                                   0, 0, 0, Absolute);
        xf86InitValuatorAxisStruct(dev, 1, 0,
                                   NO_AXIS_LIMITS, NO_AXIS_LIMITS,
                                   0, 0, 0, Absolute);
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
