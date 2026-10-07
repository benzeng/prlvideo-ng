
undefined8 FUN_10030b500(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) == 0x8513) {
    uVar2 = *(int *)(param_1 + 0x10) - 0x8515;
    uVar1 = 0;
    if (uVar2 < 6) {
      uVar1 = (ulong)uVar2;
    }
  }
  return *(undefined8 *)(param_1 + 0x20 + uVar1 * 8);
}

