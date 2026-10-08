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

    rc = otg_cmd(1, 0, 0);                  /* attach */
    printf("attach rc=%d sm_ver=%u\n", rc,
           ((unsigned *)evbuf)[5]);
    rc = otg_cmd(7, 0, 0);                  /* abs flag (sets DAT) */
    printf("abs-flag rc=%d\n", rc);

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
        for (int t = 0; t < 400; t++) {
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
    return 0;
}
