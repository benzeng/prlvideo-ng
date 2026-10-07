/* Frame pump: cheap MM requests at high rate to raise the host's
 * request-processing frequency (its video thread throttles to ~1Hz
 * when idle; external MM traffic wakes it).
 * usage: pump [hz] [seconds]   (0 = forever) */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>

typedef struct { unsigned Request, Status; unsigned short InlineByteCount, BufferCount; unsigned Reserved; } __attribute__((aligned(8))) TG_REQUEST;

static volatile sig_atomic_t stop;

static void onsig(int s) { (void)s; stop = 1; }

int main(int argc, char **argv)
{
    int hz = argc > 1 ? atoi(argv[1]) : 60;
    int secs = argc > 2 ? atoi(argv[2]) : 0;
    int fd = open("/proc/driver/prl_vtg", O_WRONLY);
    unsigned char m[32] __attribute__((aligned(8)));
    TG_REQUEST *req = (TG_REQUEST *)m;
    void *p = m;
    long ok = 0, fail = 0, n = 0;

    signal(SIGINT, onsig);
    signal(SIGTERM, onsig);
    if (fd < 0) { perror("open"); return 1; }

    memset(m, 0, sizeof(m));
    req->Request = 0x8110;         /* QUERY_HEADS: cheap, no buffers */
    req->Status = 0xffffffff;
    req->InlineByteCount = 8;

    while (!stop && (secs == 0 || n / hz < secs)) {
        if (write(fd, &p, sizeof(p)) >= 0)
            ok++;
        else
            fail++;
        n++;
        usleep(1000000 / hz);
    }
    printf("pump: %ld writes (%.1f/s ok, %ld fail)\n",
           n, secs ? (double)ok / secs : 0, fail);
    return 0;
}
