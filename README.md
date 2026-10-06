# prlvideo-ng

X.Org video driver for **Parallels Desktop 12** virtual graphics on modern Linux
(tested: Kali Rolling, kernel 7.1.5+kali-amd64, Xorg 21.1.24, gcc 15.3).

Brings a 2017 virtual GPU back to life on a 2026 stack: mode-set via the
Parallels VGA extended sequencer registers, a framebuffer mapped directly into
the 256 MB virtual VRAM, and the toolgate protocol for host session handshake.

## Status

- ✅ Full startup: PCI probe → GL_VERSION handshake → fbScreenInit → colormap
- ✅ Visible desktop (lightdm/Xfce) rendered by this driver via VRAM-direct FB
- ✅ xdpyinfo: 1920x1200 (matches host 16:10 fullscreen; mode derives from
  the live vesafb geometry — set via `GRUB_GFXMODE=1920x1200x32`)
- ✅ Stable under real workloads: terminals, browsers, window managers
  (fixed a 7 KB heap overflow in the colormap path — see below)
- ✅ Damage→SHARE_STATE dirty-region flush to the host compositor
  (requires the `prl-keeper` service — see below)
- ✅ Hardware cursor via MOUSE_SET_POINTER (0x8100/0x8101, ARGB up to 64x64)
- ✅ Dynamic resolution: RandR screen resize 640x480–2560x1600
  (`xrandr --fb 1920x1200`); host mode-set through the VGA extended
  sequencer registers (MM SET_MODE 0x8114 would displace the share-state
  consumer and is never used)

## The prl-keeper service

The host only serves SHARE_STATE (0x8117) requests while an original
2017 prlvideo driver lifecycle is running. `prl-keeper.service` keeps a
hidden Xorg 1.19 + prlvideo on VT8 alive (Restart=always) so the channel
stays open; the driver probes it at startup and degrades gracefully
(software cursor, no dirty flush) when it is absent. Cursor requests
(0x8100/0x8101) are ungated and work without the keeper.

## The colormap heap overflow

Opening a terminal used to crash X back to the login screen. Root cause: fb
builds depth-32 visuals with `ColormapEntries = 2048`, but the driver passed
`maxColors = 256` to `xf86HandleColormaps()`. On colormap install,
`CMapReinstallMap()` (hw/xfree86/common/xf86cmap.c) fills the
`maxColors`-sized `PreAllocIndices` array with `numColors` entries — 2048 ints
into a 256-int allocation, a 7 KB heap overflow that happened to land on the
SYNC extension's `ExtensionEntry` and turned the next dispatched request into
a jump through a garbage pointer. Fix: pass `2048` as `maxColors` (any value
covering the largest visual's `ColormapEntries` works).

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

Resolution follows the boot framebuffer: set `GRUB_GFXMODE=<W>x<H>x32` and
`GRUB_GFXPAYLOAD_LINUX=keep` in `/etc/default/grub`, then `update-grub` —
the driver reads the live scanout geometry from fb0 at PreInit and matches
it exactly.

## License

MIT. Original Parallels protocol/PCI device belongs to Parallels International
GmbH; this is a clean-room reimplementation for interoperability.
