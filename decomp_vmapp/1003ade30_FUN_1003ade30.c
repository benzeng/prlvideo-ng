
void FUN_1003ade30(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  ___bzero(param_1 + 2,0xe0);
  param_1[0x1e] = param_1 + 0x1d;
  param_1[0x1f] = param_1 + 0x1d;
  param_1[0x20] = 0;
  param_1[0x21] = param_1 + 0x20;
  param_1[0x22] = param_1 + 0x20;
  param_1[0x23] = 0;
  param_1[0x24] = param_1 + 0x23;
  param_1[0x25] = param_1 + 0x23;
  param_1[0x26] = 0;
  param_1[0x27] = param_1 + 0x26;
  param_1[0x28] = param_1 + 0x26;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x31] = 0;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x32] = param_1 + 0x31;
  param_1[0x33] = param_1 + 0x31;
  param_1[0x34] = 0;
  param_1[0x35] = param_1 + 0x34;
  param_1[0x36] = param_1 + 0x34;
  param_1[0x37] = 0;
  *param_1 = &PTR_FUN_100bbdcc0;
  return;
}

