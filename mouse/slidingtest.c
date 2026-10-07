/* Standalone Sliding-Mouse experiment: replicate the prlmouse DEVICE_ON
 * OTG sequence and fetch batch events, entirely outside X.
 * usage: slidingtest [seconds] */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "otg.h"

static unsigned char buf[0xfe8];

/* ---- TIS registration (message opcode 0xE, TLV stream) -------------- */
static int tis_put(unsigned char *buf, uint32_t *pos, uint32_t *total,
                   uint32_t seq, uint32_t tag, const void *d, uint32_t len)
{
    unsigned *e = (unsigned *)(buf + *pos);
    e[0] = len; e[1] = tag; e[2] = seq;
    if (len) memcpy(e + 3, d, len);
    *pos += 12 + len;
    *total += 12 + len;
    return 0;
}

static int tis_register(struct otg_link *l)
{
    unsigned char b[512];
    unsigned *h = (unsigned *)b;
    uint32_t pos = 0x1c, total = 0, seq = 0;
    unsigned toolinfo[10];
    const char *name = "parallels.SlidingMouse.guest.lin";
    const char *desc = "Mouse Synchronization Tool";
    const char *val = "initialized";
    unsigned ver[2] = {1, 3};
    uint32_t actual;

    memset(b, 0, sizeof(b));
    memset(toolinfo, 0, sizeof(toolinfo));
    toolinfo[0] = 0xc; toolinfo[1] = 2; toolinfo[2] = 0xa28f;
    ((unsigned char *)toolinfo)[0xc] = 1;
    ((unsigned char *)toolinfo)[0xf] = 0x80;
    toolinfo[4] = 1; toolinfo[5] = 0;
    toolinfo[6] = 0x3041a28f;
    ((unsigned char *)toolinfo)[0x1c] = 9;

    tis_put(b, &pos, &total, seq++, 0x2001, ver, 8);
    tis_put(b, &pos, &total, seq++, 0x20ca, desc, strlen(desc));
    tis_put(b, &pos, &total, seq++, 0x20cb, toolinfo, 40);
    tis_put(b, &pos, &total, seq++, 0x20cc, val, strlen(val));
    tis_put(b, &pos, &total, seq++, 0x2191, name, strlen(name));

    h[0] = 0xe; h[1] = 0; h[2] = 1; h[3] = 0;
    h[4] = total;  h[5] = 0x1000;       /* TLV byte count + bufsize marker */
    return otg_request(l, b, pos, 0, &actual);
}


static void put_req(unsigned *r, int code)
{
    memset(r, 0, 0x1c);
    r[0] = 1;
    r[2] = (unsigned)code;
}

static int do_req(struct otg_link *l, unsigned *r, unsigned code,
                  uint32_t *actual)
{
    put_req(r, code);
    return otg_request(l, r, 0x1c, 0x1c, actual);
}

int main(int argc, char **argv)
{
    struct otg_link link;
    unsigned char *b = buf;
    unsigned *r = (unsigned *)buf;
    uint32_t actual = 0;
    int secs = argc > 1 ? atoi(argv[1]) : 6;
    int rc, batch = 0;
    long fetches = 0, events = 0;

    rc = otg_open(&link);
    printf("otg_open rc=%d chunk=0x%x\n", rc, link.chunk);
    if (rc)
        return 1;

    /* TIS tool registration first (module-init message in the original) */
    rc = tis_register(&link);
    printf("tis_register rc=%d\n", rc);

    /* enable sliding mouse */
    rc = do_req(&link, r, 1, &actual);
    printf("enable rc=%d resp={0x%x,0x%x,0x%x} actual=%u\n",
           rc, r[0], r[1], r[2], actual);
    if (rc)
        return 2;

    /* protocol version query */
    rc = do_req(&link, r, 7, &actual);
    batch = (int)r[3];
    printf("version rc=%d resp@0xc=0x%x -> batch=%d\n", rc, r[3], batch);
    if (rc)
        return 3;

    if (!batch)
        printf("batch unsupported -> POLL mode (opcode 2)\n");
    printf("=== fetch loop: move the mouse! ===\n");
    fflush(stdout);
    for (int t = 0; t < secs * 20; t++) {
        if (batch) {
        memset(b, 0, 0x44);
        r[0] = 1; r[2] = 8; r[3] = 0; r[4] = 1; r[5] = 0xfd0;
        rc = otg_request(&link, b, 0x44, 0xfe8, &actual);
        fetches++;
        if (rc) {
            printf("fetch rc=%d\n", rc);
            break;
        }
        {
            uint32_t dlen = r[5];
            if (dlen && dlen <= 0xfd0) {
                unsigned *rec = (unsigned *)(b + 0x18);
                int n = dlen / 0x2c;
                for (int i = 0; i < n; i++) {
                    unsigned *e = rec + i * 11;
                    events++;
                    if (events <= 12 || (events & 15) == 0)
                        printf("ev flags=0x%x btn=0x%x x=%d y=%d z=%d w=%d "
                               "d9=%d d10=%d\n",
                               e[0], e[3], (int)e[4], (int)e[5],
                               (int)e[6], (int)e[7], (int)e[9], (int)e[10]);
                }
            }
        }
        } else {
            /* poll mode: opcode 2, response:
             * u16@0xc ?, u16@0xe absX, u16@0x10 absY, u16@0x12 dim1,
             * u16@0x14 dim2, u16@0x16 Z */
            rc = do_req(&link, r, 2, &actual);
            fetches++;
            if (rc) { printf("poll rc=%d\n", rc); break; }
            {
                unsigned short *q = (unsigned short *)((char *)r + 0x0c);
                events++;
                if (events <= 12 || (events % 20) == 0)
                    printf("poll: c=%u absX=%u absY=%u dim1=%u dim2=%u Z=%d\n",
                           q[0], q[1], q[2], q[3], q[4], (short)q[5]);
            }
        }
        usleep(50000);   /* 20Hz */
    }
    printf("=== done: %ld fetches, %ld events ===\n", fetches, events);

    /* disable */
    do_req(&link, r, 0, &actual);
    do_req(&link, r, 7, &actual);
    printf("disabled\n");
    return 0;
}
