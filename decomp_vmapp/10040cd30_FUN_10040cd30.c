
void FUN_10040cd30(long param_1,byte *param_2)

{
  *param_2 = *param_2 | 0x10;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

