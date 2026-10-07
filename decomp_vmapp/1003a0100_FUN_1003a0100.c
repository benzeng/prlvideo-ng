
void FUN_1003a0100(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_100bbd710;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = param_3;
  return;
}

