
undefined8 FUN_100ca9fc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
      return *(undefined8 *)(param_1 + 0x18);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  return uVar1;
}

