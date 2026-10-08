
void FUN_100a30b40(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_102237db0;
  param_1[1] = &PTR_FUN_102237e28;
  param_1[2] = &PTR_FUN_102237e40;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[9] = param_1 + 9;
  param_1[10] = param_1 + 9;
  param_1[0xb] = 0;
  FUN_100ab0360(param_1 + 0xc);
  param_1[0x14] = param_2;
  FUN_100ab0360(param_1 + 0x15);
  FUN_100ab4670(param_1 + 0x1d);
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  param_1[0x32] = 0;
  return;
}

