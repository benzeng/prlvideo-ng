CFLAGS = -O2 -Wall -fPIC -shared -I/usr/include/xorg -I/usr/include/pixman-1 -fvisibility=hidden
LDFLAGS = -shared

all: prlmouse_drv.so

prlmouse_drv.so: prlmouse.c otg.c
	$(CC) $(CFLAGS) -I. -o $@ prlmouse.c otg.c $(LDFLAGS)

install: prlmouse_drv.so
	install -m 755 prlmouse_drv.so /usr/lib/xorg/modules/input/

clean:
	rm -f prlmouse_drv.so

.PHONY: install clean
