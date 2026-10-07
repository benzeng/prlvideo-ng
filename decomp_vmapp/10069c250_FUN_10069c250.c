
void FUN_10069c250(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

