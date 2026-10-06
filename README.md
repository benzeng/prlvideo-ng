# prlvideo-ng

X.Org video driver for **Parallels Desktop 12** virtual graphics on modern Linux
(tested: Kali Rolling, kernel 7.1.5+kali-amd64, Xorg 21.1.24, gcc 15.3).

Brings a 2017 virtual GPU back to life on a 2026 stack: mode-set via the
Parallels VGA extended sequencer registers, a framebuffer mapped directly into
the 256 MB virtual VRAM, and the toolgate protocol for host session handshake.

## Status

- ✅ Full startup: PCI probe → GL_VERSION handshake → fbScreenInit → colormap
- ✅ Visible desktop (lightdm/Xfce) rendered by this driver via VRAM-direct FB
- ✅ xdpyinfo: 1600x1200, depths 1/4/8/15/16/24/32
- 🚧 Damage→SHARE_STATE dirty-region flush (deferred; VRAM direct is already
  host-visible through VESA scanout — needed only for host compositor /
  dynamic resolution / multi-head)
- 🚧 Hardware cursor, dynamic resolution

## Why

Parallels Tools 12.2.1 (2017) ships only a binary `prlvideo_drv.so` built for
Xorg ≤1.19 — unusable on modern Xorg (22.x, different driver ABI), and its
kernel modules fail to build on modern kernels. This project reverse-engineers
the toolgate/RDPMC/VGA protocols (see `PROTOCOL.md` in the companion repo
`prl-tools-kernel7-patch`) and reimplements a clean driver from scratch.

## Build & install

```bash
make
sudo make install        # copies prlvideo_drv.so to /usr/lib/xorg/modules/drivers/
```

`/etc/X11/xorg.conf.d/` device section:

```
Section "Device"
    Identifier "Parallels VGA"
    Driver     "prlvideo"
EndSection
```

Requires the kernel-side patches (prl_tg / prl_fs / prl_eth / prl_fs_freeze)
from `prl-tools-kernel7-patch` so `/proc/driver/prl_vtg` and the VRAM BAR exist.

## License

MIT. Original Parallels protocol/PCI device belongs to Parallels International
GmbH; this is a clean-room reimplementation for interoperability.
