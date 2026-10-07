
void FUN_100368d60(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_100bbc080;
  param_1[1] = param_2;
  ___bzero(param_1 + 2,0x200);
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4c] = 0;
  (*DAT_1011c5e38)(2,param_1 + 0x4b);
  (*DAT_1011c5e98)(1,(long)param_1 + 0x234);
  return;
}

