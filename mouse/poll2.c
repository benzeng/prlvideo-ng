/* cmd-2 console state poller: prints the sliding-mouse state snapshot
 * (position/buttons/abs-flag) N times. If x/y track the Mac cursor this
 * path can replace the (permanently empty) cmd-8 batch queue.
 * usage: poll2 [iterations] [interval_ms] */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "otg.h"

static unsigned char evbuf[0xfe8];
static struct otg_link olink;

int main(int argc, char **argv)
{
    int iters = argc > 1 ? atoi(argv[1]) : 10;
    int ms = argc > 2 ? atoi(argv[2]) : 100;
    unsigned *q;
    uint32_t actual;
    int rc, i;

    if (otg_open(&olink)) { printf("otg_open failed\n"); return 1; }

    memset(evbuf, 0, 0x1c);
    q = (unsigned *)evbuf; q[0] = 1; q[2] = 1;
    rc = otg_request(&olink, evbuf, 0x1c, 0x1c, &actual);
    printf("attach rc=%d sm_ver=%u\n", rc, q[5]);
    /* no cmd7, no release: the DRIVER owns the live session; a probe
     * release would clear the global console state and kill it */

    for (i = 0; i < iters; i++) {
        unsigned short *h;

        memset(evbuf, 0, 0x1c);
        q = (unsigned *)evbuf; q[0] = 1; q[2] = 2;
        rc = otg_request(&olink, evbuf, 0x1c, 0x1c, &actual);
        h = (unsigned short *)(evbuf + 0x0c);
        /* reply words per old driver: code,x,y,w,h,z */
        printf("%3d rc=%d code=%u x=%u y=%u w=%u h=%u z=%u |",
               i, rc, h[0], h[1], h[2], h[3], h[4], h[5]);
        {   /* raw hex of the 0x1c-byte reply */
            unsigned char *r = evbuf;
            int j;

            for (j = 0; j < 0x1c; j++)
                printf("%02x", r[j]);
        }
        printf("\n");
        fflush(stdout);
        usleep(ms * 1000);
    }
    /* deliberately NO release here */
    return 0;
}
