
undefined8 FUN_1006021b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  return uVar1;
}

