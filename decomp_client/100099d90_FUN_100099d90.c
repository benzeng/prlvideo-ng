
void FUN_100099d90(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  param_1[1] = param_4;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}

