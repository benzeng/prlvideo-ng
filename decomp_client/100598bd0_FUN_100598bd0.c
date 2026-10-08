
undefined4 *
FUN_100598bd0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)*param_2;
  *param_1 = param_3;
  *(long *)(param_1 + 2) = lVar1 + 0x10;
  param_1[4] = param_4;
  return param_1;
}

