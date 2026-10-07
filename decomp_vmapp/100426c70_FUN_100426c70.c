
void FUN_100426c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x9a) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x12] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  FUN_100427f40();
  FUN_100426b50(param_1,param_4);
  return;
}

