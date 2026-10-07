
void FUN_100405c70(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  param_1[1] = 0;
  return;
}

