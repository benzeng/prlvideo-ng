
undefined8 FUN_10025b490(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
  }
  return uVar1;
}

