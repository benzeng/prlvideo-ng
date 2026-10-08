
undefined8 FUN_10018d490(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  return uVar1;
}

