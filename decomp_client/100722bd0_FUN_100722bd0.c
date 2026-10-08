
undefined8 FUN_100722bd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 8) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 8) + 4) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}

