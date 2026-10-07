
void FUN_1003ab200(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = param_1;
  param_1[2] = param_1 + 1;
  param_1[3] = param_1 + 1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = &PTR_FUN_100bbdaa8;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}

