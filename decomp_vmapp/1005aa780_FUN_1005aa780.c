
void FUN_1005aa780(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  return;
}

