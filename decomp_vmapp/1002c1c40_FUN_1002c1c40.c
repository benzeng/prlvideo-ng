
void FUN_1002c1c40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_100bb3448;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = param_3;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  return;
}

