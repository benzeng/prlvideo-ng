
ulong FUN_100325f80(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x50);
  if (((int)*(undefined8 *)(param_1 + 0x58) == (int)uVar1 + -1) &&
     ((int)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) == (int)(uVar1 >> 0x20) + -1)) {
    return (ulong)CONCAT31((int3)((uint)*(int *)(param_1 + 0x30) >> 8),
                           *(int *)(param_1 + 0x30) == DAT_100e152b8);
  }
  return CONCAT71((uint7)(uVar1 >> 0x28),uVar1 >> 0x20 == 0 && (int)uVar1 == 0);
}

