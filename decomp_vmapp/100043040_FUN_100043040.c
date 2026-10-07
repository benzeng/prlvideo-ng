
void FUN_100043040(undefined8 *param_1)

{
  _free((void *)param_1[1]);
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

