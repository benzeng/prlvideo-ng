
undefined8 FUN_100202d10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
  }
  return uVar1;
}

