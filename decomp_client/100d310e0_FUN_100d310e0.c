
void FUN_100d310e0(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0xffffffff00000000;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 9) = param_2;
  return;
}

