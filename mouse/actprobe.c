/* Console activation probe (zero host-attach):
 * attach + layout + cursor-show(0x8100) and read the status.
 * st=0 -> console ACTIVE; st=0xf000001c -> activation failed.
 * usage: actprobe [w] [h] */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "otg.h"

typedef struct { unsigned Request, Status; unsigned short InlineByteCount, BufferCount; unsigned Reserved; } __attribute__((aligned(8))) TG_REQUEST;
typedef struct { union { void *Buffer; unsigned long long Va; } u; unsigned ByteCount; unsigned Writable:1, Userspace:1, Reserved:30; } __attribute__((aligned(8))) TG_BUFFER;

static unsigned char evbuf[0xfe8];
static struct otg_link olink;

/* TIS registration with a real tools version — the original sends
 * toolInfo(local, 1, 0) but the host may gate sliding input on the
 * version reported in the guest tools capability set */
static int tis_register_version(unsigned ver)
{
    unsigned char b[512];
    unsigned *h = (unsigned *)b;
    unsigned toolinfo[10];
    const char *name = "parallels.SlidingMouse.guest.lin";
    const char *desc = "Mouse Synchronization Tool";
    const char *val = "initialized";
    unsigned v2[2] = {1, 3};
    uint32_t pos = 0x1c, total = 0, seq = 0, actual;
    int i;

    memset(b, 0, sizeof(b));
    memset(toolinfo, 0, sizeof(toolinfo));
    toolinfo[0] = 0xc; toolinfo[1] = 2; toolinfo[2] = 0xa28f;
    ((unsigned char *)toolinfo)[0xc] = 1;
    ((unsigned char *)toolinfo)[0xf] = 0x80;
    toolinfo[4] = ver;                    /* VERSION FIELD */
    toolinfo[6] = 0x3041a28f;
    ((unsigned char *)toolinfo)[0x1c] = 9;

#define TIS(tag_, d_, len_) do { \
    unsigned *e = (unsigned *)(b + pos); \
    e[0] = (len_); e[1] = (tag_); e[2] = seq++; \
    if (len_) memcpy(e + 3, (d_), (len_)); \
    pos += 12 + (len_); total += 12 + (len_); \
} while (0)
    TIS(0x2001, v2, 8);
    TIS(0x20ca, desc, strlen(desc));
    TIS(0x20cb, toolinfo, 40);
    TIS(0x20cc, val, strlen(val));
    TIS(0x2191, name, strlen(name));
#undef TIS
    h[0] = 0xe; h[1] = 0; h[2] = 1; h[3] = 0;
    h[4] = total; h[5] = 0x1000;
    return otg_request(&olink, b, pos, 0, &actual);
}

static int otg_cmd(unsigned cmd, unsigned a, unsigned b)
{
    unsigned *q = (unsigned *)evbuf;
    uint32_t actual;

    memset(evbuf, 0, 0x1c);
    q[0] = 1; q[2] = cmd;
    return otg_request(&olink, evbuf, 0x1c, 0x1c, &actual);
}

int main(int argc, char **argv)
{
    unsigned w = argc > 1 ? atoi(argv[1]) : 1920;
    unsigned h = argc > 2 ? atoi(argv[2]) : 1200;
    int fd, rc;
    unsigned char m[0x28 + 32 * 32 * 4] __attribute__((aligned(8)));
    TG_REQUEST *req = (TG_REQUEST *)m;
    TG_BUFFER *buf;
    unsigned *inl;
    unsigned short *q16;
    void *p = m;

    if (otg_open(&olink)) { printf("otg_open failed\n"); return 1; }

    rc = tis_register_version(0xC0201);      /* 12.2.1 */
    printf("tis(ver=0x%x) rc=%d\n", 0xC0201, rc);

    rc = otg_cmd(1, 0, 0);                  /* attach */
    printf("attach rc=%d sm_ver=%u\n", rc,
           ((unsigned *)evbuf)[5]);
    /* cmd 7 SKIPPED: sliding_available(+0x40) stays 0 → the FLAG
     * (0x1895e) is emitted to the Mac client on attach → the client
     * enters Absolute mode and sends SWITCH_SLIDING_MOUSE itself */
    printf("cmd7 skipped (keep sliding_available=0)\n");

    /* layout cmd 4: monitor rect + 32x32 transparent cursor */
    fd = open("/proc/driver/prl_vtg", O_WRONLY);
    if (fd < 0) { perror("vtg"); return 1; }
    /* channel sanity check: QUERY_HEADS must return 0 */
    memset(m, 0, 64);
    req->Request = 0x8110; req->Status = 0xffffffff;
    req->InlineByteCount = 8;
    if (write(fd, &p, sizeof(p)) < 0) perror("0x8110");
    printf("0x8110 status = 0x%x\n", req->Status);

    memset(m, 0, sizeof(m));
    req->Request = 0x8100;
    req->Status = 0xffffffff;
    req->InlineByteCount = 0x1c;
    req->BufferCount = 1;
    inl = (unsigned *)(m + 16);
    inl[0] = 960; inl[1] = 600;             /* pos */
    inl[2] = 0; inl[3] = 0;                 /* hotspot */
    inl[4] = 32; inl[5] = 32;               /* cursor w,h */
    inl[6] = 32 * 4;                        /* stride */
    buf = (TG_BUFFER *)(m + 16 + 32);   /* INLINE_SIZE pads 28->32 */
    buf[0].u.Buffer = m + 64; buf[0].ByteCount = 32 * 32 * 4;
    buf[0].Writable = 1;
    /* cursor data stays zero (transparent) */
    if (write(fd, &p, sizeof(p)) < 0) { perror("0x8100 write"); return 1; }
    printf("0x8100 status = 0x%x  %s\n", req->Status,
           req->Status == 0 ? "<== CONSOLE ACTIVE!" :
           req->Status == 0xf000001c ? "(activation failed)" : "(?)");
    close(fd);

    /* batch-fetch mouse events for 8 seconds — MOVE THE MOUSE NOW */
    {
        int n = 0;

        printf(">>> MOVE THE MOUSE (8s) <<<\n");
        fflush(stdout);
        for (int t = 0; t < 600; t++) {
            unsigned *q2 = (unsigned *)evbuf;
            uint32_t actual;

            memset(evbuf, 0, 0x44);
            q2[0] = 1; q2[2] = 8; q2[3] = 0; q2[4] = 1; q2[5] = 0xfd0;
            if (otg_request(&olink, evbuf, 0x44, 0xfd0, &actual) == 0) {
                uint32_t dlen = q2[5];

                if (dlen > 0 && dlen <= 0xfd0) {
                    int cnt = dlen / 0x2c;

                    for (int i = 0; i < cnt; i++) {
                        unsigned *e = (unsigned *)(evbuf + 0x18 + i * 0x2c);
                        printf("EV abs=%d btn=0x%x x=%d y=%d z=%d\n",
                               e[0] & 1, e[3], (int)e[4], (int)e[5],
                               (int)e[6]);
                        n++;
                        if (n > 30) goto out;
                    }
                }
            }
            usleep(20000);
        }
out:
        printf("total events: %d\n", n);
    }
    otg_cmd(0, 0, 0);                       /* release: clear routing */
    printf("released\n");
    return 0;
}
