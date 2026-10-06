# xf86HandleColormaps(): PreAllocIndices heap overflow when maxColors < visual's ColormapEntries

## Summary

`xf86HandleColormaps()` allocates the per-screen `PreAllocIndices` scratch
array from the driver-supplied `maxColors` argument, with no validation
against the visuals the screen actually has. But `CMapAllocateColormapPrivate()`
sizes a colormap from `pVisual->ColormapEntries` whenever
`CMapColormapUseMax()` is true, and both `CMapReinstallMap()` and
`CMapStoreColors()` fill `PreAllocIndices` with that many entries
(`hw/xfree86/common/xf86cmap.c`):

```c
int i = cmapPriv->numColors;              /* pVisual->ColormapEntries */
int *indices = pScreenPriv->PreAllocIndices; /* int[maxColors] */
while (i--)
    indices[i] = i;                       /* writes past the array */
```

If a driver passes the historical `maxColors = 256` while the screen exposes
a visual with more entries, any X client installing a colormap of that
visual (`XCreateColormap` + `XInstallColormap`, no privileges needed)
triggers a deterministic, repeatable heap overflow.

## Reproducer (real-world)

Clean-room DDX on X.Org 21.1: fb built a depth-32 DirectColor visual with
`ColormapEntries = 2048`, driver passed 256 → installing that colormap
(opening a terminal was enough) wrote 2048 ints into the 256-int (1 KB)
allocation, a 7168-byte overflow. The corruption landed on an
`ExtensionEntry`, so the crash appeared in request dispatch (jump through
a smashed minor-opcode handler) rather than at the writer — found with
valgrind + a hardware watchpoint. Fix driver-side was
`xf86HandleColormaps(pScreen, 2048, ...)`.

Same wall hit driver-side on depth 30 (indices up to 1023 vs 256):
* https://www.spinics.net/lists/amd-gfx/msg06445.html
* https://www.mail-archive.com/amd-gfx@lists.freedesktop.org/msg16481.html

modesetting sidesteps the related depth>24 LUT problem by not calling
`xf86HandleColormaps()` at all:
* https://lists.freedesktop.org/archives/xorg-devel/2018-February/055867.html

Verified the code on current master is unchanged.

## Impact

* Any local X client can trigger it repeatedly; server may run privileged
  on classic setups.
* Written data is a fixed sequential pattern (0..numColors-1), so pointers
  become non-mappable low addresses — reliable DoS at minimum, constrained
  heap corruption (lengths/indices/flags) otherwise.

## Suggested hardening

Size the scratch array from the screen's actual visuals and warn if the
driver underreported — behavior-preserving; patch attached
(`xf86cmap-PreAllocIndices.patch`).

```c
int i, indicesNeeded = maxColors;
for (i = 0; i < pScreen->numVisuals; i++)
    if (pScreen->visuals[i].ColormapEntries > indicesNeeded)
        indicesNeeded = pScreen->visuals[i].ColormapEntries;
if (indicesNeeded > maxColors)
    LogMessageVerb(X_WARNING, 0, "xf86HandleColormaps: maxColors (%d) is "
                   "smaller than the largest visual colormap size (%d); "
                   "growing PreAllocIndices\n", maxColors, indicesNeeded);
/* allocate indicesNeeded ints instead of maxColors */
```
