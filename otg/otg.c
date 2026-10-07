#define _GNU_SOURCE
#include "otg.h"
#include <signal.h>
#include <setjmp.h>
#include <string.h>

void mon_side_call(struct hcall *h)
{
	register uint64_t a asm("rax") = h->w[0], b asm("rbx") = h->w[1];
	register uint64_t c asm("rcx") = h->w[2], d asm("rdx") = h->w[3];
	register uint64_t s asm("rsi") = h->w[4], i asm("rdi") = h->w[5];
	asm volatile("rdpmc" : "+r"(a), "+r"(b), "+r"(c), "+r"(d), "+r"(s), "+r"(i) :: "memory");
	h->w[0]=a; h->w[1]=b; h->w[2]=c; h->w[3]=d; h->w[4]=s; h->w[5]=i;
}

static sigjmp_buf jb;
static volatile sig_atomic_t busy;
static void segv(int s){ (void)s; if (busy){ busy=0; siglongjmp(jb,1);} }
static int protected_call(struct hcall *h)
{
	struct sigaction sa = {0}, o1, o2;
	sa.sa_handler = segv;
	sigaction(SIGILL, &sa, &o1);
	sigaction(SIGSEGV, &sa, &o2);
	busy = 1;
	if (sigsetjmp(jb, 1) != 0) { sigaction(SIGILL,&o1,0); sigaction(SIGSEGV,&o2,0); return -99; }
	mon_side_call(h);
	busy = 0;
	sigaction(SIGILL, &o1, 0);
	sigaction(SIGSEGV, &o2, 0);
	return 0;
}

int mon_check(uint32_t *ver, uint32_t *chunk)
{
	struct hcall h = {{0x5f9e652, 0x5f9e652, 0, 0, 0, 0}};
	if (protected_call(&h)) return -99;
	if ((uint32_t)h.w[0] != 0xb36af47) return -98;
	if (h.w[3] || h.w[4] || h.w[5]) return -97;
	if (ver) *ver = (uint32_t)h.w[1];
	if (chunk) *chunk = (uint32_t)h.w[2];
	return ((uint32_t)h.w[1] == 2) ? 0 : -96;
}

int otg_open(struct otg_link *l)
{
	uint32_t ver, chunk;
	int r = mon_check(&ver, &chunk);
	if (r) return r;
	l->chunk = chunk ? chunk : 0x1000;
	l->status = 0;
	l->magic2 = 0;
	return 0;
}

static int priv_ioctl(struct otg_io *io, void *ptr, uint32_t send, uint32_t recv)
{
	struct hcall h;
	memset(&h, 0, sizeof(h));
	h.w[0] = (io->chan == -1) ? 0x5f9e653 : 0x5f9e654;
	h.w[1] = (io->chan == -1) ? io->total : (uint64_t)(uint32_t)io->chan;
	h.w[2] = recv != 0;
	h.w[3] = send;
	h.w[4] = (uint64_t)(uintptr_t)ptr;
	h.w[5] = send > recv ? send : recv;
	int r = protected_call(&h);
	if (r) return r;
	if (io->chan == -1) io->chan = (int32_t)h.w[1];
	io->off = (uint32_t)h.w[2];
	io->status = (int32_t)h.w[3];
	return (io->status < 0) ? -8 : 0;
}

void otg_cancel(struct otg_io *io)
{
	struct hcall h = {{0x5f9e655, (uint64_t)(uint32_t)io->chan, 0, 0, 0, 0}};
	if (protected_call(&h)) return;
	io->status = (int32_t)h.w[5];
}

int otg_request(struct otg_link *l, void *buf, uint32_t send, uint32_t recv, uint32_t *actual)
{
	struct otg_io io = { -1, send, 0, -785 };
	uint32_t sent = 0, recved = 0;
	l->status = -10;
	while (1) {
		uint32_t remain = send - sent;
		uint32_t this_send = remain > l->chunk ? l->chunk : remain;
		uint32_t this_recv;
		if (this_send == 0) {
			this_recv = recv - recved;
			if (this_recv > l->chunk) this_recv = l->chunk;
		} else {
			uint32_t v = this_send;
			if (send < recv) v = recv - sent;
			this_recv = v > l->chunk ? l->chunk : v;
		}
		uint32_t got = 0;
		/* actual size 由 w[5] 带回 */
		struct { int dummy[3]; } _unused; (void)_unused;
		/* priv_ioctl 返回实际长度经 io.off/status; 复用简化: 通过包装拿 w[5] */
		/* —— 为拿到 actual, 直接展开一次调用 —— */
		struct hcall h;
		memset(&h, 0, sizeof(h));
		h.w[0] = (io.chan == -1) ? 0x5f9e653 : 0x5f9e654;
		h.w[1] = (io.chan == -1) ? io.total : (uint64_t)(uint32_t)io.chan;
		h.w[2] = this_recv != 0;
		h.w[3] = this_send;
		h.w[4] = (uint64_t)(uintptr_t)((char *)buf + sent);
		h.w[5] = this_send > this_recv ? this_send : this_recv;
		if (protected_call(&h)) return -99;
		if (io.chan == -1) io.chan = (int32_t)h.w[1];
		io.off = (uint32_t)h.w[2];
		io.status = (int32_t)h.w[3];
		got = (uint32_t)h.w[5];
		l->status = io.status;
		if (io.status < 0) return -8;
		if (recv < io.off && io.status != 2) { otg_cancel(&io); return -7; }
		if (this_send && got && recved < sent) {
			memmove((char *)buf + recved, (char *)buf + sent, got);
		}
		recved += got;
		if (io.status == 0) break;
		sent += this_send;
		if (sent >= send && !this_send) break;
	}
	if (actual) *actual = recved;
	if (io.status >= 1 && io.status <= 2) otg_cancel(&io);
	l->status = 0;
	return 0;
}
