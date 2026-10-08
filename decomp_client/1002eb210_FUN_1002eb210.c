
undefined8 FUN_1002eb210(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
  }
  return uVar1;
}

