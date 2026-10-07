
void FUN_10069da50(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  *param_1 = &PTR_FUN_100bcc300;
  param_1[6] = param_2;
  param_1[7] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

