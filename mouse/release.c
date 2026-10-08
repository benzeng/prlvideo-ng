/* console release: clear the host's sliding/abs routing state */
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "/home/dong/prlmouse-ng/otg.h"

int main(void)
{
    struct otg_link link;
    unsigned char b[64] __attribute__((aligned(8)));
    unsigned *q = (unsigned *)b;
    uint32_t actual;
    int rc;

    rc = otg_open(&link);
    if (rc) { printf("otg_open rc=%d\n", rc); return 1; }

    /* cmd 5 = release (same as 0 but per the original's disable path) */
    memset(b, 0, 0x1c);
    q[0] = 1; q[2] = 5;
    rc = otg_request(&link, b, 0x1c, 0x10, &actual);
    printf("release(5) rc=%d\n", rc);

    /* cmd 0 = release variant */
    memset(b, 0, 0x1c);
    q[0] = 1; q[2] = 0;
    rc = otg_request(&link, b, 0x1c, 0x10, &actual);
    printf("release(0) rc=%d\n", rc);
    return 0;
}
