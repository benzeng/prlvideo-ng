
void FUN_1002c17c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_100bb3410;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}

