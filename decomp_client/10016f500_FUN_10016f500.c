
undefined8 FUN_10016f500(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0xa8) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0xa8) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
  }
  return uVar1;
}

