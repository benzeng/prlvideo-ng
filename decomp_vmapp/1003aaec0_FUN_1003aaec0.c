
void FUN_1003aaec0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = param_1;
  param_1[3] = param_1 + 2;
  param_1[4] = param_1 + 2;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(byte *)((long)param_1 + 0x2d) = *(byte *)((long)param_1 + 0x2d) & 0xf8;
  return;
}

