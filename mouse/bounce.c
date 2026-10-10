/* prl-bounce: manual console-session bounce for when the Mac client
 * gets stuck in RelativeMouse after the cursor leaves the VM window
 * (PD 12 has no re-entry path — AutoSwitchedToRelMouse never clears).
 * release(0) -> FLAG DISABLED; attach(1)+cmd7 -> FLAG ENABLED -> the
 * client re-enters AbsoluteMouse.  Run from a guest terminal.
 * usage: bounce */
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "otg.h"

static unsigned char evbuf[0xfe8];
static struct otg_link olink;

static int otg_cmd(unsigned cmd)
{
    unsigned *q = (unsigned *)evbuf;

    memset(evbuf, 0, 0x1c);
    q[0] = 1;
    q[2] = cmd;
    return otg_request(&olink, evbuf, 0x1c, 0x1c, NULL);
}

int main(void)
{
    int rc;

    if (otg_open(&olink)) { printf("otg_open failed\n"); return 1; }
    rc = otg_cmd(0);
    printf("release rc=%d\n", rc);
    sleep(1);
    rc = otg_cmd(1);
    printf("attach rc=%d sm_ver=%u\n", rc, ((unsigned *)evbuf)[5]);
    rc = otg_cmd(7);
    printf("cmd7 rc=%d\n", rc);
    printf("bounced - client should re-enter AbsoluteMouse\n");
    return 0;
}
