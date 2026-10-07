CC = gcc
CFLAGS = -O2 -Wall -fPIC -shared -I/usr/include/xorg -I/usr/include/xorg/xserver -I/usr/include/pixman-1 -I/usr/include/libdrm -fvisibility=hidden
LDFLAGS = -shared

all: prlvideo_drv.so

prlvideo_drv.so: prlvideo.c otg.c
	$(CC) $(CFLAGS) -I. $(LDFLAGS) -o $@ prlvideo.c otg.c

install: prlvideo_drv.so
	cp prlvideo_drv.so /usr/lib/xorg/modules/drivers/

clean:
	rm -f prlvideo_drv.so

.PHONY: all install clean
