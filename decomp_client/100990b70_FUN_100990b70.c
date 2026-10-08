
undefined8 FUN_100990b70(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_2 + 0x48) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_2 + 0x48) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_2 + 0x50);
  }
  FUN_100991ff0(param_1,uVar1);
  return param_1;
}

