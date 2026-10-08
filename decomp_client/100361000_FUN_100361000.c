
void FUN_100361000(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return;
}

