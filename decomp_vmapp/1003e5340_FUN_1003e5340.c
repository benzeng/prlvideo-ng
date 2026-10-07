
void FUN_1003e5340(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003e06d0(param_1,param_2,0x800,param_3);
  *param_1 = &PTR_FUN_100bbec90;
  *(undefined4 *)(param_1 + 5) = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0x200000002;
  return;
}

