
void FUN_1002d91b0(long param_1)

{
  if ((*(int *)(param_1 + 0x468) == 0) && (0x2ff < *(ushort *)(param_1 + 0x4da))) {
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"Fix usb3 device descriptor (bcd:%04x sz:%d)",
                    *(ushort *)(param_1 + 0x4da),*(undefined1 *)(param_1 + 0x4df));
    }
    *(undefined2 *)(param_1 + 0x4da) = 0x200;
    *(undefined1 *)(param_1 + 0x4df) = 0x40;
  }
  return;
}

