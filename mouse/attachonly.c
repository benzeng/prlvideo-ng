/* minimal: OTG console attach ONLY — no TIS, no 0x8100, nothing else.
 * usage: attachonly [seconds] */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "otg.h"
#include <time.h>

static unsigned char evbuf[64];
static struct otg_link olink;

int main(int argc, char **argv)
{
    int secs = argc > 1 ? atoi(argv[1]) : 8;
    unsigned *q = (unsigned *)evbuf;
    int rc;

    if (otg_open(&olink)) return 1;
    memset(evbuf, 0, 0x1c);
    q[0] = 1; q[2] = 1;   /* cmd 1 = attach */
    rc = otg_request(&olink, evbuf, 0x1c, 0x1c, NULL);
    printf("attach rc=%d sm_ver=%u\n", rc, q[5]);

    /* watch PS/2 while attached */
    {
        int fd = open("/dev/input/event3", O_RDONLY | O_NONBLOCK);
        time_t end = time(NULL) + secs;
        long n = 0;
        char buf[24*32];

        if (fd < 0) { perror("event3"); return 1; }
        printf(">>> MOVE MOUSE %ds <<<\n", secs);
        while (time(NULL) < end) {
            ssize_t r = read(fd, buf, sizeof(buf));
            if (r > 0) n += r / 24;
            else usleep(20000);
        }
        printf("PS/2 events during attach: %ld\n", n);
    }

    /* release */
    memset(evbuf, 0, 0x1c);
    q[0] = 1; q[2] = 0;
    otg_request(&olink, evbuf, 0x1c, 0x10, NULL);
    printf("released\n");
    return 0;
}
