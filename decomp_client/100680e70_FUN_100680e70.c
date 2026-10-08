
undefined8 FUN_100680e70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x188) != 0) &&
     (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x188) + 4) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 400);
  }
  return uVar1;
}

