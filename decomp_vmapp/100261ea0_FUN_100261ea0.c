
void FUN_100261ea0(long param_1,byte *param_2)

{
  param_2[0x15] = *(byte *)(param_1 + 0x13d);
  param_2[0x16] = *(byte *)(param_1 + 0x13e);
  *param_2 = *param_2 & 0xe0 | 0x18;
  return;
}

