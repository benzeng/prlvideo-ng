#define _GNU_SOURCE
#include "otg.h"
#include <signal.h>
#include <setjmp.h>
#include <string.h>

/* Parallels otg private transport (RDPMC hypercalls), faithful port of
 * otgMonSideCall/otgPrivateIOCtl/otgCancelIO/otgRequest from the
 * decompiled 2017 driver.  Register layout (w[0..5] = rax,rbx,rcx,rdx,rsi,rdi):
 *   create: {0x5f9e653, total_send, has_recv, max_len, this_send, buf_ptr}
 *   cont. : {0x5f9e654, chan,       has_recv, max_len, this_send, buf_ptr}
 *   return: chan=create.w[1], off=w[4], status=w[5], got=w[3]
 *   cancel: {0x5f9e655, chan, 0,0,0,0} -> status=w[5]
 */

void mon_side_call(struct hcall *h)
{
	register uint64_t a asm("rax") = h->w[0], b asm("rbx") = h->w[1];
	register uint64_t c asm("rcx") = h->w[2], d asm("rdx") = h->w[3];
	register uint64_t s asm("rsi") = h->w[4], i asm("rdi") = h->w[5];
	asm volatile("rdpmc" : "+r"(a), "+r"(b), "+r"(c), "+r"(d), "+r"(s), "+r"(i) :: "memory");
	h->w[0]=a; h->w[1]=b; h->w[2]=c; h->w[3]=d; h->w[4]=s; h->w[5]=i;
}

#include <pthread.h>
static sigjmp_buf jb;
static volatile sig_atomic_t busy;
static volatile pthread_t owner;
static struct sigaction keep_ill, keep_segv;
static void segv(int s, siginfo_t *si, void *uc)
{
	/* Xorg is multithreaded: only handle faults from the thread that
	 * armed the hypercall; foreign faults chain to Xorg's handler */
	if (busy && pthread_equal(pthread_self(), owner)) {
		busy = 0;
		siglongjmp(jb, 1);
	}
	if (s == SIGILL && keep_ill.sa_handler != SIG_IGN &&
	    keep_ill.sa_handler != SIG_DFL) {
		keep_ill.sa_handler(s);
		return;
	}
	if (s == SIGSEGV && keep_segv.sa_handler != SIG_IGN &&
	    keep_segv.sa_handler != SIG_DFL) {
		keep_segv.sa_handler(s);
		return;
	}
	_exit(70);
}
static int protected_call(struct hcall *h)
{
	struct sigaction sa = {0}, o1, o2;
	sa.sa_sigaction = segv;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGILL, &sa, &o1);
	sigaction(SIGSEGV, &sa, &o2);
	keep_ill = o1; keep_segv = o2;
	owner = pthread_self();
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

struct io { int32_t chan; uint32_t total; uint32_t off; int32_t status; };

static int priv_ioctl(struct io *io, void *ptr, uint32_t send, uint32_t recv,
                      uint32_t *got)
{
	struct hcall h;
	uint32_t mx = send > recv ? send : recv;

	memset(&h, 0, sizeof(h));
	if (io->chan == -1) {
		h.w[0] = 0x5f9e653;
		h.w[1] = io->total;
	} else {
		h.w[0] = 0x5f9e654;
		h.w[1] = (uint64_t)(uint32_t)io->chan;
	}
	h.w[2] = recv != 0;
	h.w[3] = mx;
	h.w[4] = send;
	h.w[5] = (uint64_t)(uintptr_t)ptr;

	if (protected_call(&h)) return -99;
	if (io->chan == -1) io->chan = (int32_t)h.w[1];
	io->off = (uint32_t)h.w[4];
	io->status = (int32_t)h.w[5];
	if (io->status < 0) return -8;
	if (got) *got = (uint32_t)h.w[3];
	return 0;
}

static void cancel_io(struct io *io)
{
	struct hcall h = {{0x5f9e655, (uint64_t)(uint32_t)io->chan, 0, 0, 0, 0}};

	if (protected_call(&h)) return;
	io->status = (int32_t)h.w[5];
}

void otg_cancel(struct otg_io *io)
{
	cancel_io((struct io *)io);
}

int otg_request(struct otg_link *l, void *buf, uint32_t send, uint32_t recv,
                uint32_t *actual)
{
	struct io io = { -1, send, 0, (int32_t)0xfffffcf7 };
	uint32_t sent = 0, recved = 0;

	if (!l || !buf || (!send && !recv)) return -1;
	if (actual) *actual = 0;
	l->status = -777;

	while (1) {
		uint32_t this_send = send - sent;
		uint32_t this_recv, got = 0;
		int rc;

		if (l->chunk < this_send) this_send = l->chunk;
		if (this_send == 0) {
			this_recv = (recv - recved <= l->chunk) ? recv - recved
			                                        : l->chunk;
		} else {
			uint32_t v = this_send;

			if (send < recv) v = recv - sent;
			this_recv = (v <= l->chunk) ? v : l->chunk;
		}

		rc = priv_ioctl(&io, (char *)buf + sent, this_send, this_recv, &got);
		l->status = io.status;
		if (rc) return rc;
		if (recv < io.off && io.status != 2) {
			cancel_io(&io);
			return -7;
		}
		if (this_send && got && recved < sent)
			memmove((char *)buf + recved, (char *)buf + sent, got);
		recved += got;
		if (io.status == 0) break;
		sent += this_send;
	}

	if (actual) *actual = recved;
	l->status = 0;
	return 0;
}
