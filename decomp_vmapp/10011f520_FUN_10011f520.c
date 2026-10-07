
void FUN_10011f520(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_10011c900(param_1,(param_4 & 4) >> 2,param_4);
  *(undefined4 *)(param_1 + 2) = 0x7e7;
  *param_1 = &PTR_FUN_100baa940;
  FUN_10011f3e0(param_1,param_2,param_3);
  return;
}

