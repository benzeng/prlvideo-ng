/* Display-session injection experiment: feed vtg display traffic step by
 * step and watch whether the OTG sliding-mouse state (dims/absX/absY)
 * lights up.  WARNING: the display traffic may flip the host into the
 * frozen tools-managed display mode — run deliberately.
 * usage: injecttest   (keep moving the mouse the whole time) */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
#include <sys/io.h>
#include "otg.h"

typedef struct { unsigned Request, Status; unsigned short InlineByteCount, BufferCount; unsigned Reserved; } __attribute__((aligned(8))) TgRequest;
typedef struct { union { void *Buffer; unsigned long long Va; } u; unsigned ByteCount; unsigned Writable:1, Userspace:1, Reserved:30; } __attribute__((aligned(8))) TgBuffer;

static int vtg;
static struct otg_link otglink;
static unsigned short bounds[16][4];
static unsigned mouse_xy[2] = {960, 600};
static volatile sig_atomic_t alarmed;

static void on_alrm(int s) { (void)s; alarmed = 1; }

static int vtg_write(TgRequest *req, void *extra, unsigned extra_len,
                     TgBuffer *bufs, unsigned nbufs, int timeout_sec)
{
    unsigned char m[192] __attribute__((aligned(8)));
    void *p = m;
    unsigned total = 16 + extra_len + nbufs * 16;

    memset(m, 0, sizeof(m));
    memcpy(m, req, 16);
    if (extra_len) memcpy(m + 16, extra, extra_len);
    if (nbufs) memcpy(m + 16 + extra_len, bufs, nbufs * 16);
    alarmed = 0;
    alarm(timeout_sec);
    ssize_t n = write(vtg, &p, sizeof(p));
    alarm(0);
    if (n < 0 || alarmed) {
        printf("    [write hung/err — request parked]\n");
        return -1;
    }
    return (int)((TgRequest *)m)->Status;
}

static void mouse_poll(const char *tag)
{
    unsigned char b[64] __attribute__((aligned(8)));
    unsigned *r = (unsigned *)b;
    uint32_t actual;

    memset(b, 0, 28);
    r[0] = 1; r[2] = 2;
    if (otg_request(&otglink, b, 0x1c, 0x1c, &actual) == 0) {
        unsigned short *q = (unsigned short *)(b + 0x0c);
        printf("%-22s c=%u absX=%4u absY=%4u dim=%ux%u Z=%d\n",
               tag, q[0], q[1], q[2], q[3], q[4], (short)q[5]);
    } else {
        printf("%-22s poll FAILED\n", tag);
    }
    fflush(stdout);
}

static void otg_simple(int code)
{
    unsigned char b[64] __attribute__((aligned(8)));
    unsigned *r = (unsigned *)b;
    uint32_t actual;

    memset(b, 0, 28);
    r[0] = 1; r[2] = (unsigned)code;
    otg_request(&otglink, b, 0x1c, 0x1c, &actual);
}

int main(void)
{
    TgRequest req;
    unsigned glv = 3;
    unsigned char setmode[32];
    unsigned enable_head[2] = {0, 0};
    int i;

    signal(SIGALRM, on_alrm);
    vtg = open("/proc/driver/prl_vtg", O_WRONLY);
    if (vtg < 0) { perror("vtg open"); return 1; }
    if (otg_open(&otglink)) { printf("otg_open failed\n"); return 1; }

    /* mouse session up */
    otg_simple(1);
    otg_simple(7);

    printf("=== baseline ===\n");
    for (i = 0; i < 2; i++) mouse_poll("baseline");

    printf("=== step 1: GL_VERSION ===\n");
    memset(&req, 0, sizeof(req));
    req.Request = 0x8130; req.Status = 0xffffffff; req.InlineByteCount = 4;
    printf("    status=0x%x\n", vtg_write(&req, &glv, 4, NULL, 0, 5));
    mouse_poll("after GL_VERSION");

    printf("=== step 2: SHARE_STATE ===\n");
    for (i = 0; i < 16; i++) {
        bounds[i][0] = 0x3fff; bounds[i][1] = 0x3fff;
        bounds[i][2] = 0xc000; bounds[i][3] = 0xc000;
    }
    bounds[0][0] = 0; bounds[0][1] = 0;
    bounds[0][2] = 1920; bounds[0][3] = 1200;
    {
        TgBuffer bufs[2];
        memset(&req, 0, sizeof(req));
        req.Request = 0x8117; req.Status = 0xffffffff; req.BufferCount = 2;
        bufs[0].u.Buffer = bounds; bufs[0].ByteCount = 128; bufs[0].Writable = 1;
        bufs[1].u.Buffer = mouse_xy; bufs[1].ByteCount = 8; bufs[1].Writable = 1;
        printf("    status=0x%x\n", vtg_write(&req, NULL, 0, bufs, 2, 6));
    }
    mouse_poll("after SHARE_STATE");

    printf("=== step 3: ENABLE_HEAD ===\n");
    memset(&req, 0, sizeof(req));
    req.Request = 0x8111; req.Status = 0xffffffff; req.InlineByteCount = 8;
    printf("    status=0x%x\n", vtg_write(&req, enable_head, 8, NULL, 0, 5));
    mouse_poll("after ENABLE_HEAD");

    printf("=== step 4: SET_MODE 1920x1200 ===\n");
    memset(setmode, 0, sizeof(setmode));
    {
        unsigned short *h = (unsigned short *)setmode;
        h[0] = 0; h[1] = 32; h[2] = 1920; h[3] = 1200;
        *(unsigned *)(setmode + 8) = 7680;
        *(unsigned *)(setmode + 12) = 60;
        *(unsigned short *)(setmode + 16) = 1;
        *(unsigned *)(setmode + 24) = 0;      /* fb offset */
    }
    memset(&req, 0, sizeof(req));
    req.Request = 0x8114; req.Status = 0xffffffff; req.InlineByteCount = 32;
    printf("    status=0x%x\n", vtg_write(&req, setmode, 32, NULL, 0, 6));
    for (i = 0; i < 4; i++) mouse_poll("after SET_MODE");

    /* leave mouse session enabled for observation; report done */
    printf("=== done (mouse session left enabled) ===\n");
    return 0;
}
