
undefined8 * FUN_10037a7f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_2 + 0x30) == 0) || (*(int *)(*(long *)(param_2 + 0x30) + 4) == 0)) ||
     (*(long *)(param_2 + 0x38) == 0)) {
    uVar1 = QString::fromAscii_helper("",0);
    *param_1 = uVar1;
  }
  else {
    FUN_100323d90(param_1);
  }
  return param_1;
}

