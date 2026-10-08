
undefined4 *
FUN_1003e7130(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)*param_2;
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = uVar1;
  param_1[4] = param_4;
  return param_1;
}

