
void FUN_1003f2220(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003e06d0(param_1,param_2,0x800,param_3);
  *param_1 = &PTR_FUN_100bbf5a0;
  param_1[0x24] = PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[1] = 0;
  return;
}

