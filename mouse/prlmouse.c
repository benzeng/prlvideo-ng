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
#include <pthread.h>
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
    /* hybrid positioning: PS/2 deltas at full rate, anchored to the
     * cmd-2 poll (client feeds it at only ~10Hz -> jumpy alone) */
    int anchor_x, anchor_y;      /* last polled absolute position */
    int acc_dx, acc_dy;          /* deltas since the anchor */
    CARD32 last_poll_change;     /* ms of last poll position change */
    int poll_live;               /* poll moved within 150ms */
    CARD32 last_delta_ms;        /* ms of last PS/2 motion delta */
    CARD32 last_bounce_ms;       /* ms of last session bounce */
    int bounce_count;            /* total auto-bounces this session */
    /* poll worker thread: ALL otg traffic lives here — a cold host
     * consumer blocks toolgate writes indefinitely, and any otg call
     * on the X main thread freezes the whole server (logout hang) */
    pthread_t poll_thread;
    int thread_run;
    pthread_mutex_t state_lock;  /* guards dims/anchor/live fields */
    char note[160];              /* thread -> main log messages */
    volatile int note_pending;
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
    toolinfo[4] = 0xc0201;       /* 12.2.1 — the host gates the sliding
                                    FLAG on a real tools version (proven
                                    with actprobe: ver=1 never fires it) */
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

/* real guest cursor: Adwaita left_ptr (Xcursor file), 32x32 ARGB —
 * a hand-rolled bitmap rendered garbled on the client; the genuine
 * image is what X itself displays */
static const unsigned prlm_arrow32[32*32] = {
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x02ffffffu,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x01000000u,0x0b2e2e2eu,0x00000000u,0x03aaaaaau,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x03aaaaaau,0x00000000u,0x9bebebebu,0x49b9b9b9u,0x00000000u,0x05ccccccu,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x06aaaaaau,0x00000000u,0xbbf8f8f8u,0xf4f7f7f7u,0x38a3a3a3u,0x00000000u,
    0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x06aaaaaau,0x06000000u,0xb4ebebebu,0xffffffffu,0xedfbfbfbu,0x3d9e9e9eu,
    0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0b000000u,0xbbfdfdfdu,0xfebfbfbfu,0xffaaaaaau,0xeeffffffu,
    0x3d9a9a9au,0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0c000000u,0xbcffffffu,0xffb5b5b5u,0xf9000000u,0xffbfbfbfu,
    0xeeffffffu,0x3d9a9a9au,0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbdbdbdu,0xfc000000u,0xfc060606u,
    0xffbcbcbcu,0xeeffffffu,0x3d9a9a9au,0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc010101u,0xff020202u,
    0xfc050505u,0xffbcbcbcu,0xeeffffffu,0x3d9a9a9au,0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff060606u,
    0xff000000u,0xfc050505u,0xffbcbcbcu,0xeeffffffu,0x3d9a9a9au,0x00000000u,0x05ccccccu,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff040404u,
    0xff020202u,0xff000000u,0xfc050505u,0xffbcbcbcu,0xeeffffffu,0x3d9a9a9au,0x00000000u,0x05ccccccu,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff040404u,
    0xff000000u,0xff020202u,0xff000000u,0xfc050505u,0xffbcbcbcu,0xeeffffffu,0x3d9a9a9au,0x00000000u,
    0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff040404u,
    0xff000000u,0xff000000u,0xff020202u,0xff000000u,0xfc050505u,0xffbcbcbcu,0xeeffffffu,0x3d9a9a9au,
    0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff040404u,
    0xff000000u,0xff000000u,0xff000000u,0xff020202u,0xff000000u,0xfc050505u,0xffbcbcbcu,0xeeffffffu,
    0x3d9a9a9au,0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff040404u,
    0xff000000u,0xff000000u,0xff000000u,0xff000000u,0xff020202u,0xff000000u,0xfc050505u,0xffbcbcbcu,
    0xeeffffffu,0x3d9a9a9au,0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff040404u,
    0xff000000u,0xff000000u,0xff000000u,0xff000000u,0xff010101u,0xff060606u,0xff040404u,0xfc080808u,
    0xffc0c0c0u,0xeeffffffu,0x3da3a3a3u,0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff040404u,
    0xff000000u,0xff000000u,0xff000000u,0xff000000u,0xff000000u,0xff000000u,0xfe000000u,0xfd000000u,
    0xfa000000u,0xffa8a8a8u,0xecf6f6f6u,0x3a999999u,0x00000000u,0x03aaaaaau,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff040404u,
    0xff010101u,0xff010101u,0xff030303u,0xff000000u,0xff575757u,0xffaaaaaau,0xffb0b0b0u,0xffbdbdbdu,
    0xffb9b9b9u,0xffbfbfbfu,0xffffffffu,0xfaf7f7f7u,0x4ac0c0c0u,0x01ffffffu,0x02ffffffu,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc000000u,0xff050505u,
    0xff000000u,0xff000000u,0xff030303u,0xff000000u,0xfe313131u,0xffffffffu,0xe5f9f9f9u,0xc9edededu,
    0xcdebebebu,0xcce7e7e7u,0xc6d7d7d7u,0xc4e3e3e3u,0xa5d9d9d9u,0x14666666u,0x027f7f7fu,0x01000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbbbbbbu,0xfc010101u,0xff010101u,
    0xfe060606u,0xfea9a9a9u,0xff2f2f2fu,0xff010101u,0xfd000000u,0xffb2b2b2u,0xd7e2e2e2u,0x4c000000u,
    0x4a000000u,0x46000000u,0x41000000u,0x31000000u,0x1a000000u,0x0e000000u,0x03000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfdfdfdu,0xffbebebeu,0xfc000000u,0xfe080808u,
    0xffbababau,0xffffffffu,0xfe8e8e8eu,0xff000000u,0xff010101u,0xfd363636u,0xffffffffu,0x70888888u,
    0x221e1e1eu,0x2a2a2a2au,0x261a1a1au,0x221e1e1eu,0x17161616u,0x08000000u,0x02000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcffffffu,0xffb5b5b5u,0xfa000000u,0xffc2c2c2u,
    0xeef8f8f8u,0xc5b5b5b5u,0xfff5f5f5u,0xfe161616u,0xff010101u,0xfc000000u,0xffcbcbcbu,0xc2f1f1f1u,
    0x0d000000u,0x0c2a2a2au,0x08000000u,0x07000000u,0x05000000u,0x02000000u,0x01000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xbcfafafau,0xfebfbfbfu,0xffabababu,0xf5fdfdfdu,
    0x7a494949u,0x5f000000u,0xf2ffffffu,0xfe828282u,0xfe000000u,0xff010101u,0xfe4c4c4cu,0xfdffffffu,
    0x46868686u,0x00010101u,0x047f7f7fu,0x01000000u,0x01000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0d000000u,0xb9e4e4e4u,0xffffffffu,0xf2f8f8f8u,0x775a5a5au,
    0x3c000000u,0x37040404u,0xadbfbfbfu,0xfff1f1f1u,0xfc0a0a0au,0xff000000u,0xfc020202u,0xffdededeu,
    0xadebebebu,0x01000000u,0x04bfbfbfu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x07919191u,0x0a000000u,0xc2efefefu,0xf9f4f4f4u,0x71555555u,0x31000000u,
    0x25222222u,0x1e000000u,0x5a383838u,0xf8ffffffu,0xfe6a6a6au,0xfe000000u,0xfe000000u,0xfe636363u,
    0xf8ffffffu,0x34666666u,0x00000000u,0x02ffffffu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x06555555u,0x0c000000u,0xabd5d5d5u,0x7b747474u,0x2b000000u,0x1f202020u,
    0x0c000000u,0x14333333u,0x27000000u,0xbbd3d3d3u,0xffe3e3e3u,0xfc030303u,0xff020202u,0xfc090909u,
    0xffebebebu,0x96e2e2e2u,0x00000000u,0x05ccccccu,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x03000000u,0x11000000u,0x320f0f0fu,0x28000000u,0x1b121212u,0x09000000u,
    0x04000000u,0x0a333333u,0x180a0a0au,0x66555555u,0xfdffffffu,0xfd4f4f4fu,0xff000000u,0xfd000000u,
    0xfe9b9b9bu,0xcdfdfdfdu,0x0c000000u,0x04bfbfbfu,0x01000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x02000000u,0x09000000u,0x12000000u,0x131a1a1au,0x08000000u,0x02000000u,
    0x01000000u,0x03000000u,0x122a2a2au,0x2b000000u,0xcbdededeu,0xffdfdfdfu,0xfa0f0f0fu,0xf9101010u,
    0xffddddddu,0xb8e4e4e4u,0x0d000000u,0x06aaaaaau,0x01000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x01000000u,0x02000000u,0x05333333u,0x04000000u,0x02000000u,0x01000000u,
    0x00000000u,0x02000000u,0x0a333333u,0x1b121212u,0x61545454u,0xedf1f1f1u,0xfff7f7f7u,0xfff7f7f7u,
    0xedf1f1f1u,0x595b5b5bu,0x100f0f0fu,0x05333333u,0x01000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x01000000u,0x01000000u,0x00000000u,0x00000000u,
    0x00000000u,0x01000000u,0x04000000u,0x120e0e0eu,0x2a000000u,0x602a2a2au,0x9f9e9e9eu,0x9f9e9e9eu,
    0x5e2b2b2bu,0x28000000u,0x100f0f0fu,0x02000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x01000000u,0x06000000u,0x170b0b0bu,0x2a000000u,0x33000000u,0x33000000u,
    0x2a000000u,0x170b0b0bu,0x06000000u,0x01000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x02000000u,0x07000000u,0x100f0f0fu,0x19282828u,0x19282828u,
    0x100f0f0fu,0x07000000u,0x02000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
    0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,
};
#define PRLM_ARROW_HSX 4
#define PRLM_ARROW_HSY 1

static int
prlm_session_up(PrlMousePriv p)
{
    unsigned *r;

    if (prlm_otg_req(p, 1))          /* attach */
        return -3;
    /* the ATTACH reply carries sm_ver at +0x14 (LAB_1000d7c2b);
     * the cmd-7 reply is empty */
    {
        unsigned smv = ((unsigned *)p->evbuf)[5];

        if (prlm_otg_req(p, 7))      /* abs delivery: also powers the
                                        cmd-2 poll (position+dims die
                                        without it) */
            return -4;
        r = (unsigned *)p->evbuf;
        /* cmd-8 batch queue is dead on this host (its event page needs
         * the cmd-9 mapping modern tools set up); skip the extra otg
         * round trip per tick — cmd-2 poll carries everything */
        p->batch = 0;
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
            /* transparent placeholder: the host drops this into the
             * (unmapped) console page anyway; the REAL cursor flows via
             * prlvideo's LoadCursorARGB -> 0x8100 -> client render —
             * shipping our own bitmap here only ever produced a garbled
             * or doubled pointer */
            if (otg_request(&p->link, lb, 0x28 + 32 * 32 * 4, 0x10, &actual))
                return -6;
        }

        /* console activation re-check: the host's activation check only
         * runs on a 0x8100 cursor-show.  prlvideo's one-shot ran BEFORE
         * this layout landed (dims were 0 then) — without this extra
         * shot the console stays attached-but-inactive and the host
         * routes input nowhere: keyboard AND mouse die.
         * The image is a transparent placeholder: the real guest cursor
         * arrives later through prlvideo's cursor plane. */
        {
            unsigned char m[64 + 32 * 32 * 4] __attribute__((aligned(8)));
            unsigned *inl = (unsigned *)(m + 16);
            struct { unsigned Request, Status; unsigned short InlineByteCount,
                     BufferCount; unsigned Reserved; } *req =
                (void *)m;
            struct { void *buf; unsigned ByteCount; unsigned Writable:1,
                     Userspace:1, Reserved:30; } *b =
                (void *)(m + 16 + 32);        /* INLINE_SIZE pads 28->32 */
            void *ptr = m;
            int fd = open("/proc/driver/prl_vtg", O_WRONLY);

            memcpy(m + 64, prlm_arrow32, sizeof(prlm_arrow32));
            req->Request = 0x8100;
            req->Status = 0xffffffff;
            req->InlineByteCount = 0x1c;
            req->BufferCount = 1;
            inl[0] = p->scr_w / 2;
            inl[1] = p->scr_h / 2;
            inl[2] = PRLM_ARROW_HSX; inl[3] = PRLM_ARROW_HSY;
            inl[4] = 32; inl[5] = 32; inl[6] = 32 * 4;
            b[0].buf = m + 64;         /* real Adwaita arrow */
            b[0].ByteCount = 32 * 32 * 4;
            b[0].Writable = 1;
            if (fd < 0 || write(fd, &ptr, sizeof(ptr)) < 0)
                xf86Msg(X_WARNING, PRLM_NAME ": activation 0x8100 failed"
                        " (fd=%d %s)\n", fd, strerror(errno));
            else
                xf86Msg(X_INFO, PRLM_NAME ": console activation 0x8100 "
                        "st=0x%x\n", req->Status);
            if (fd >= 0)
                close(fd);
        }
    }
    return 0;
}

static int
prlm_sliding_enable(PrlMousePriv p)
{
    if (otg_open(&p->link))
        return -1;
    if (prlm_tis_register(p))
        return -2;
    return prlm_session_up(p);
}
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
    /* reply body (verified live against Mac-cursor moves, poll2 probe):
     * +0x12=X +0x14=Y +0x16=W(1920) +0x18=H(1200) +0x1a=Z; X/Y are in
     * GUEST screen coordinates and track the host cursor in realtime */
    q = (unsigned short *)(p->evbuf + 0x0c);
    p->code = q[0];
    p->abs_x = q[3];
    p->abs_y = q[4];
    p->dim_w = q[5];
    p->dim_h = q[6];
    p->z = q[7];
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
/* thread-side: cmd-2 poll -> anchor/live update + watchdogs.  NO X
 * calls and NO posting here; read_input consumes the shared fields. */
static void
prlm_poll_update(PrlMousePriv p)
{
    int prc;
    CARD32 now = GetTimeInMillis();
    int dims_ok, poll_moved = 0;

    prc = prlm_sliding_poll(p);   /* uses thread-private evbuf */

    pthread_mutex_lock(&p->state_lock);
    dims_ok = p->dim_w > 1 && p->dim_h > 1;
    if (prc == 0 && dims_ok) {
        int x = p->abs_x, y = p->abs_y;

        if (x < 0) x = 0;
        if (y < 0) y = 0;
        if (x >= (int)p->dim_w) x = p->dim_w - 1;
        if (y >= (int)p->dim_h) y = p->dim_h - 1;
        if (x != p->anchor_x || y != p->anchor_y) {
            p->anchor_x = x;
            p->anchor_y = y;
            p->acc_dx = p->acc_dy = 0;
            p->last_poll_change = now;
            p->poll_live = 1;
            poll_moved = 1;
        } else if (p->last_poll_change &&
                   now - p->last_poll_change > 150) {
            /* frozen poll = cursor left the VM window: park */
            p->poll_live = 0;
        }
    }
    pthread_mutex_unlock(&p->state_lock);

    /* ---- watchdogs (thread side, fuse-capped) ---- */
    if (p->bounce_count >= 10)
        return;

    if (prc == 0 && dims_ok && !poll_moved && p->last_poll_change &&
        now - p->last_poll_change > 500 &&
        p->last_delta_ms && now - p->last_delta_ms < 300 &&
        now - p->last_bounce_ms > 5000) {
        /* stuck fallback: poll frozen while PS/2 motion flows */
        p->bounce_count++;
        p->last_bounce_ms = now;
        prlm_otg_req(p, 0);          /* release: clears stale state */
        p->sliding_on = 0;
        if (prlm_session_up(p) == 0) {
            snprintf(p->note, sizeof(p->note),
                     "auto-bounce: client was stuck in relative (#%d)",
                     p->bounce_count);
            p->note_pending = 1;
        }
    } else if (prc != 0 || !dims_ok) {
        /* console dead: attached but no dims */
        if (!p->last_bounce_ms)
            p->last_bounce_ms = now;
        else if (now - p->last_bounce_ms > 5000) {
            p->bounce_count++;
            p->last_bounce_ms = now;
            prlm_otg_req(p, 0);      /* release: clears stale state */
            p->sliding_on = 0;
            if (prlm_session_up(p) == 0) {
                snprintf(p->note, sizeof(p->note),
                         "auto-bounce: console dead, no dims (#%d)",
                         p->bounce_count);
                p->note_pending = 1;
            }
        }
    }
}

/* poll worker: owns the otg link and the session lifecycle */
static void *
prlm_poll_thread(void *arg)
{
    PrlMousePriv p = arg;
    sigset_t set;
    int rc;

    sigfillset(&set);
    pthread_sigmask(SIG_BLOCK, &set, NULL);

    if (otg_open(&p->link) == 0 && prlm_tis_register(p) == 0)
        rc = prlm_session_up(p);
    else
        rc = -100;
    snprintf(p->note, sizeof(p->note),
             "sliding session %s (rc=%d batch=%d)",
             rc == 0 ? "ENABLED" : "unavailable", rc, p->batch);
    p->note_pending = 1;

    while (p->thread_run) {
        if (p->sliding_on)
            prlm_poll_update(p);
        usleep(10000);            /* 100Hz cadence */
    }
    prlm_otg_req(p, 0);           /* release on shutdown */
    return NULL;
}

static CARD32
prlm_wakeup_timer(OsTimerPtr timer, CARD32 now, pointer arg)
{
    InputInfoPtr pInfo = (InputInfoPtr)arg;
    PrlMousePriv p = (PrlMousePriv)pInfo->private;

    (void)timer; (void)now;
    /* main thread does ZERO otg: the poll worker owns all toolgate
     * traffic (a cold consumer blocks writes forever -> X would hang,
     * e.g. at session logout).  Here we only drain thread notes. */
    if (p && p->note_pending) {
        pthread_mutex_lock(&p->state_lock);
        p->note_pending = 0;
        xf86Msg(X_INFO, PRLM_NAME ": %s\n", p->note);
        pthread_mutex_unlock(&p->state_lock);
    }
    if (p)
        p->evdev_active = FALSE;   /* read_input re-sets it */
    return 200;
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

            pp->scr_w = (unsigned)pScrn->virtualX;
            pp->scr_h = (unsigned)pScrn->virtualY;
            pthread_mutex_init(&pp->state_lock, NULL);
            pp->thread_run = 1;
            if (pthread_create(&pp->poll_thread, NULL,
                               prlm_poll_thread, pp) == 0) {
                xf86Msg(X_INFO, "%s: poll worker started\n", PRLM_NAME);
            } else {
                xf86Msg(X_WARNING, "%s: poll worker create failed\n",
                        PRLM_NAME);
            }
        } else {
            xf86Msg(X_INFO, "%s: sliding session OFF (ShareState disabled)\n",
                    PRLM_NAME);
        }
    }
    xf86AddEnabledDevice(pInfo);
    TimerSet(NULL, 0, 10, prlm_wakeup_timer, pInfo);
    return Success;
}

static void
prlm_device_off(InputInfoPtr pInfo)
{
    PrlMousePriv p = (PrlMousePriv)pInfo->private;

    xf86RemoveEnabledDevice(pInfo);
    if (p && p->thread_run) {
        p->thread_run = 0;
        pthread_join(p->poll_thread, NULL);
    }
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
        /* hybrid: the cmd-2 poll anchors absolute position but only
         * updates at ~10Hz (the client's feed rate); the PS/2 delta
         * stream carries the same motion at full rate.  Apply deltas
         * on top of the anchor while the poll is live; when it freezes
         * (cursor outside the VM window) park the pointer.  Sliding
         * off / poll dead -> plain relative fallback. */
        {
            int post_x = -1, post_y = -1;

            pthread_mutex_lock(&p->state_lock);
            if (p->sliding_on && p->dim_w > 1 && p->dim_h > 1) {
                if (dx || dy)
                    p->last_delta_ms = GetTimeInMillis();
                if (p->poll_live && (dx || dy)) {
                    int x, y;

                    p->acc_dx += dx;
                    p->acc_dy += dy;
                    x = p->anchor_x + p->acc_dx;
                    y = p->anchor_y + p->acc_dy;
                    if (x < 0) x = 0;
                    if (y < 0) y = 0;
                    if (x >= (int)p->dim_w) x = p->dim_w - 1;
                    if (y >= (int)p->dim_h) y = p->dim_h - 1;
                    post_x = x;
                    post_y = y;
                }
                dx = dy = 0;
            }
            pthread_mutex_unlock(&p->state_lock);
            if (post_x >= 0) {
                xf86PostMotionEvent(pInfo->dev, TRUE, 0, 2,
                                    post_x, post_y);
                if (prl_share_mouse_position)
                    prl_share_mouse_position(post_x, post_y);
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

    /* NO polling here — the wakeup timer owns the 10ms cadence */
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
