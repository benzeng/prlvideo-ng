/* uinput virtual mouse injector: create a device and send motion bursts.
 * usage: vmouse [moves]   (default 20 diagonal steps, 10ms apart) */
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>
#include <linux/uinput.h>

int main(int argc, char **argv)
{
    int moves = argc > 1 ? atoi(argv[1]) : 20;
    int fd = open("/dev/uinput", O_WRONLY | O_NONBLOCK);
    struct uinput_user_dev u;
    int i;

    if (fd < 0) { perror("open /dev/uinput"); return 1; }
    ioctl(fd, UI_SET_EVBIT, EV_REL);
    ioctl(fd, UI_SET_RELBIT, REL_X);
    ioctl(fd, UI_SET_RELBIT, REL_Y);
    ioctl(fd, UI_SET_EVBIT, EV_KEY);
    ioctl(fd, UI_SET_KEYBIT, BTN_LEFT);
    memset(&u, 0, sizeof(u));
    strncpy(u.name, "prl-test-mouse", UINPUT_MAX_NAME_SIZE);
    u.id.bustype = BUS_USB;
    u.id.vendor = 0x1ab8;
    u.id.product = 0x9999;
    write(fd, &u, sizeof(u));
    if (ioctl(fd, UI_DEV_CREATE) < 0) { perror("UI_DEV_CREATE"); return 1; }
    sleep(1);

    if (argc > 2 && !strcmp(argv[2], "click")) {
        struct input_event ev;
        sleep(1);
        memset(&ev, 0, sizeof(ev));
        ev.type = EV_KEY; ev.code = BTN_LEFT; ev.value = 1;
        write(fd, &ev, sizeof(ev));
        memset(&ev, 0, sizeof(ev));
        ev.type = EV_SYN; ev.code = 0;
        write(fd, &ev, sizeof(ev));
        usleep(100000);
        memset(&ev, 0, sizeof(ev));
        ev.type = EV_KEY; ev.code = BTN_LEFT; ev.value = 0;
        write(fd, &ev, sizeof(ev));
        memset(&ev, 0, sizeof(ev));
        ev.type = EV_SYN; ev.code = 0;
        write(fd, &ev, sizeof(ev));
        sleep(1);
        ioctl(fd, UI_DEV_DESTROY);
        close(fd);
        printf("clicked\n");
        return 0;
    }

    if (argc > 2 && !strcmp(argv[2], "hold")) {
        /* keep the device alive with periodic movement */
        while (1) {
            struct input_event ev;
            for (int burst = 0; burst < 10; burst++) {
                memset(&ev, 0, sizeof(ev));
                ev.type = EV_REL; ev.code = REL_X;
                ev.value = (burst % 3 == 2) ? -6 : 4;
                write(fd, &ev, sizeof(ev));
                memset(&ev, 0, sizeof(ev));
                ev.type = EV_REL; ev.code = REL_Y;
                ev.value = (burst % 2) ? -5 : 6;
                write(fd, &ev, sizeof(ev));
                memset(&ev, 0, sizeof(ev));
                ev.type = EV_SYN; ev.code = 0;
                write(fd, &ev, sizeof(ev));
                usleep(20000);
            }
            /* click once per cycle too */
            {
                struct input_event ev;
                memset(&ev, 0, sizeof(ev));
                ev.type = EV_KEY; ev.code = BTN_LEFT; ev.value = 1;
                write(fd, &ev, sizeof(ev));
                memset(&ev, 0, sizeof(ev));
                ev.type = EV_SYN; ev.code = 0;
                write(fd, &ev, sizeof(ev));
                usleep(50000);
                memset(&ev, 0, sizeof(ev));
                ev.type = EV_KEY; ev.code = BTN_LEFT; ev.value = 0;
                write(fd, &ev, sizeof(ev));
                memset(&ev, 0, sizeof(ev));
                ev.type = EV_SYN; ev.code = 0;
                write(fd, &ev, sizeof(ev));
            }
            sleep(1);
        }
    }

    for (i = 0; i < moves; i++) {
        struct input_event ev;
        memset(&ev, 0, sizeof(ev));
        ev.type = EV_REL; ev.code = REL_X; ev.value = (i % 4 == 3) ? -9 : 3;
        write(fd, &ev, sizeof(ev));
        memset(&ev, 0, sizeof(ev));
        ev.type = EV_REL; ev.code = REL_Y; ev.value = (i % 4 == 1) ? -7 : 5;
        write(fd, &ev, sizeof(ev));
        memset(&ev, 0, sizeof(ev));
        ev.type = EV_SYN; ev.code = SYN_REPORT; ev.value = 0;
        write(fd, &ev, sizeof(ev));
        usleep(20000);
    }
    ioctl(fd, UI_DEV_DESTROY);
    close(fd);
    printf("injected %d moves\n", moves);
    return 0;
}
