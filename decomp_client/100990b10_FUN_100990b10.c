
undefined8 FUN_100990b10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  return uVar1;
}

