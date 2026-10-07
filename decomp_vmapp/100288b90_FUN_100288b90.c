
uint FUN_100288b90(byte *param_1,void *param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = *param_1;
  _memcpy(param_2,&DAT_1011c3cb0 + (ulong)bVar1 * 0x12,(ulong)param_3);
  FUN_1004103f0(0,&DAT_1011c3cb0 + (ulong)bVar1 * 0x12,0x12,0);
  return param_3;
}

