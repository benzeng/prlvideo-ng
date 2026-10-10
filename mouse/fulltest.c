/* attach + cmd7(abs routing) + batch fetch — the full trilogy */
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include "otg.h"

static unsigned char evbuf[0xfe8];
static struct otg_link olink;

static int otg_cmd(unsigned cmd)
{
    unsigned *q = (unsigned *)evbuf;
    memset(evbuf, 0, 0x1c);
    q[0] = 1; q[2] = cmd;
    return otg_request(&olink, evbuf, 0x1c, 0x1c, NULL);
}

int main(int argc, char **argv)
{
    int secs = argc > 1 ? atoi(argv[1]) : 10;
    int rc, n = 0;

    if (otg_open(&olink)) return 1;

    rc = otg_cmd(1);
    printf("attach rc=%d sm_ver=%u\n", rc, ((unsigned*)evbuf)[5]);
    rc = otg_cmd(7);
    printf("cmd7(abs) rc=%d\n", rc);
    printf(">>> MOVE MOUSE %ds <<<\n", secs);

    {
        time_t end = time(NULL) + secs;
        while (time(NULL) < end) {
            unsigned *q = (unsigned *)evbuf;

            memset(evbuf, 0, 0x44);
            q[0] = 1; q[2] = 8; q[3] = 0; q[4] = 1; q[5] = 0xfd0;
            if (otg_request(&olink, evbuf, 0x44, 0xfd0, NULL) == 0) {
                uint32_t dlen = q[5];
                if (dlen > 0 && dlen <= 0xfd0) {
                    int cnt = dlen / 0x2c, i;

                    for (i = 0; i < cnt; i++) {
                        unsigned *e = (unsigned *)(evbuf + 0x18 + i * 0x2c);
                        printf("EV abs=%d btn=0x%x x=%d y=%d dims=%dx%d\n",
                               e[0] & 1, e[3], (int)e[4], (int)e[5],
                               (int)e[9], (int)e[10]);
                        n++;
                    }
                }
            }
            usleep(20000);
        }
    }
    printf("total events: %d\n", n);
    otg_cmd(0);
    printf("released\n");
    return 0;
}
