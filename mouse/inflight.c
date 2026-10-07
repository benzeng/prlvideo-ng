/* Toolgate in-flight semantics test (no X needed):
 * Can two fds in one process complete each other's parked 0x8117?
 * usage: inflight [seconds] */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

typedef struct { unsigned Request, Status; unsigned short InlineByteCount, BufferCount; unsigned Reserved; } __attribute__((aligned(8))) TG_REQUEST;
typedef struct { union { void *Buffer; unsigned long long Va; } u; unsigned ByteCount; unsigned Writable:1, Userspace:1, Reserved:30; } __attribute__((aligned(8))) TG_BUFFER;

typedef struct {
    int fd;
    const char *name;
    volatile long writes, completes;
    volatile int done;
} Worker;

static unsigned short bounds[16][4];
static unsigned mouse_xy[2] = {960, 600};

static void *worker(void *arg)
{
    Worker *w = arg;
    unsigned char m[64] __attribute__((aligned(8)));
    TG_REQUEST *req = (TG_REQUEST *)m;
    TG_BUFFER *buf;
    void *p = m;
    int i;

    for (i = 0; i < 16; i++) {
        bounds[i][0]=0x3fff; bounds[i][1]=0x3fff; bounds[i][2]=0xc000; bounds[i][3]=0xc000;
    }
    while (!w->done) {
        memset(m, 0, sizeof(m));
        req->Request=0x8117; req->Status=0xffffffff; req->BufferCount=2;
        buf=(TG_BUFFER*)(m+16);
        buf[0].u.Buffer=bounds; buf[0].ByteCount=128; buf[0].Writable=1;
        buf[1].u.Buffer=mouse_xy; buf[1].ByteCount=8; buf[1].Writable=1;
        w->writes++;
        if (write(w->fd,&p,sizeof(p)) >= 0)
            w->completes++;
        usleep(20000);   /* 50Hz each */
    }
    return NULL;
}

int main(int argc, char **argv)
{
    int secs = argc > 1 ? atoi(argv[1]) : 10;
    int fa = open("/proc/driver/prl_vtg", O_WRONLY);
    int fb = open("/proc/driver/prl_vtg", O_WRONLY);
    Worker wa = { fa, "A", 0, 0, 0 }, wb = { fb, "B", 0, 0, 0 };
    pthread_t ta, tb;
    time_t t0 = time(NULL), tlast = t0;
    long la = 0, lb = 0;

    if (fa < 0 || fb < 0) { perror("open"); return 1; }
    printf("fds: A=%d B=%d (same process, separate fds)\n", fa, fb);
    pthread_create(&ta, NULL, worker, &wa);
    usleep(500000);           /* A parks first */
    pthread_create(&tb, NULL, worker, &wb);
    printf("both workers running %ds...\n", secs);

    while (time(NULL) - t0 < secs + 2) {
        sleep(2);
        printf("[%2lds] A: writes=%ld completes=%ld (%.1f/s) | B: writes=%ld completes=%ld (%.1f/s)\n",
               time(NULL)-t0, wa.writes, wa.completes,
               (double)(wa.completes-la)/2, wb.writes, wb.completes,
               (double)(wb.completes-lb)/2);
        la = wa.completes; lb = wb.completes;
    }
    wa.done = wb.done = 1;
    pthread_join(ta, NULL); pthread_join(tb, NULL);
    printf("VERDICT: ");
    if (wa.completes > 5 && wb.completes > 5)
        printf("dual-fd self-kick WORKS (problem is elsewhere)\n");
    else if (wa.writes > 5 && wb.writes > 5)
        printf("dual-fd DEADLOCK confirmed (device-wide in-flight=1)\n");
    else
        printf("inconclusive\n");
    return 0;
}
