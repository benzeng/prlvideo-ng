
void FUN_100ab0ab0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_102239cf0;
  *(undefined4 *)((long)param_1 + 0xc) = 1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_100aaf740(param_1 + 8,0);
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x400007530;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  return;
}

