
undefined8 FUN_100325f60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x70) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
  }
  return uVar1;
}

