/* 初始化链全串联: 探测→DynResEnable→模式→渐变→SHARE_STATE (fork保护) */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include "otg.h"

typedef struct { unsigned Request, Status; unsigned short InlineByteCount, BufferCount; unsigned Reserved; } __attribute__((aligned(8))) TG_REQUEST;
typedef struct { union { void *Buffer; unsigned long long Va; } u; unsigned ByteCount; unsigned Writable:1, Userspace:1, Reserved:30; } __attribute__((aligned(8))) TG_BUFFER;

static int fd;
static int tg(unsigned code, void *inl, unsigned inlen, void *b0, unsigned l0, void *b1, unsigned l1)
{
	unsigned char m[160] __attribute__((aligned(8)));
	memset(m, 0, sizeof(m));
	TG_REQUEST *req = (TG_REQUEST *)m;
	req->Request = code; req->Status = 0xffffffff;
	req->InlineByteCount = inlen;
	req->BufferCount = (b0 != NULL) + (b1 != NULL);
	if (inlen) memcpy(m + 16, inl, inlen);
	TG_BUFFER *b = (TG_BUFFER *)(m + 16 + ((inlen + 7) & ~7u));
	if (b0) { b[0].u.Buffer = b0; b[0].ByteCount = l0; b[0].Writable = 1; }
	if (b1) { b[1].u.Buffer = b1; b[1].ByteCount = l1; b[1].Writable = 1; }
	void *p = m;
	write(fd, &p, sizeof(p));
	return (int)req->Status;
}
struct sm { unsigned short head, bpp, w, h; unsigned stride, refresh, fb_off, x, y; unsigned short flags, pad; };
static unsigned mouse_xy[2];
static unsigned short bounds[16][4];
static int share_state(unsigned x1, unsigned y1, unsigned x2, unsigned y2)
{
	for (int i = 0; i < 16; i++) {
		bounds[i][0] = 0x3fff; bounds[i][1] = 0x3fff;
		bounds[i][2] = 0xc000; bounds[i][3] = 0xc000;
	}
	bounds[0][0] = x1; bounds[0][1] = y1; bounds[0][2] = x2; bounds[0][3] = y2;
	return tg(0x8117, NULL, 0, bounds, 128, mouse_xy, 8);
}
int main(void)
{
	uint32_t ver, chunk;
	int r = mon_check(&ver, &chunk);
	printf("[probe] rc=%d ver=%u chunk=0x%x\n", r, ver, chunk);
	if (r) return 1;

	setbuf(stdout, NULL);
	pid_t pid = fork();
	if (pid == 0) {
		alarm(15);
		struct otg_link link;
		int rc = otg_open(&link);
		printf("[child] otg_open rc=%d chunk=0x%x\n", rc, link.chunk);
		uint32_t payload[4] = { 0xb, 0, 0, 0 };   /* DynResEnable(1) */
		uint32_t actual = 0;
		rc = otg_request(&link, payload, 16, 16, &actual);
		printf("[child] DynResEnable rc=%d actual=%u resp={0x%x,0x%x,0x%x,0x%x}\n",
			rc, actual, payload[0], payload[1], payload[2], payload[3]);

		fd = open("/proc/driver/prl_vtg", O_RDWR);
		if (fd < 0) _exit(2);
		const unsigned W = 1280, H = 800, STRIDE = 5120, FB_OFF = 0x1000000;
		unsigned *vram = mmap(NULL, FB_OFF + (size_t)STRIDE * H, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
		if (vram == MAP_FAILED) _exit(3);
		unsigned *fb = (unsigned *)((char *)vram + FB_OFF);
		for (unsigned y = 0; y < H; y++)
			for (unsigned x = 0; x < W; x++)
				fb[y * (STRIDE / 4) + x] = 0xff000000u | (x * 255 / W) << 16 | (y * 255 / H) << 8 | 0x80;
		printf("[child] ENABLE=0x%x\n", tg(0x8111, (unsigned[2]){0,0}, 8, NULL,0,NULL,0));
		struct sm a = { 0, 32, W, H, STRIDE, 60, FB_OFF, 0, 0, 1, 0 };
		printf("[child] SET_MODE=0x%x\n", tg(0x8114, &a, 32, NULL,0,NULL,0));
		printf("[child] SHARE_STATE#1=0x%x\n", share_state(0, 0, W, H));
		fflush(stdout);
		sleep(10);
		_exit(0);
	}
	int st; waitpid(pid, &st, 0);
	printf("[parent] child 结束 st=%d —— 恢复显示\n", st);
	fd = open("/proc/driver/prl_vtg", O_RDWR);
	struct sm r2 = { 0, 32, 1600, 1200, 6400, 60, 0, 0, 0, 1, 0 };
	printf("[parent] 恢复 SET_MODE=0x%x\n", tg(0x8114, &r2, 32, NULL,0,NULL,0));
	/* DynResDisable */
	struct otg_link link;
	if (otg_open(&link) == 0) {
		uint32_t p[4] = { 0xb, 0, 0, 1 };
		uint32_t act;
		printf("[parent] DynResDisable rc=%d\n", otg_request(&link, p, 16, 16, &act));
	}
	return 0;
}
