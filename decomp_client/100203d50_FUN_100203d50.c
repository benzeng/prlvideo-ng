
undefined8 * FUN_100203d50(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_2 + 0x28) == 0) || (*(int *)(*(long *)(param_2 + 0x28) + 4) == 0)) ||
     (*(long *)(param_2 + 0x30) == 0)) {
    uVar1 = QString::fromAscii_helper("",0);
    *param_1 = uVar1;
  }
  else {
    FUN_100188480(param_1);
  }
  return param_1;
}

