
undefined8 FUN_10073da90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  }
  return uVar1;
}

