
undefined8 FUN_1002d4d80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_100356bd0(param_1 + 0x58,uVar1);
  return 0;
}

