
undefined8 FUN_100190010(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0xb8) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0xb8) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
  }
  return uVar1;
}

