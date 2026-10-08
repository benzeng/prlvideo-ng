
undefined8 * FUN_100328d10(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_2 + 0x28) == 0) || (*(int *)(*(long *)(param_2 + 0x28) + 4) == 0)) ||
     (*(long *)(param_2 + 0x30) == 0)) {
    *param_1 = 0;
  }
  else {
    uVar1 = FUN_100328090();
    FUN_1003193b0(param_1,uVar1);
  }
  return param_1;
}

