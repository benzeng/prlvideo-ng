
undefined8 FUN_10080dd80(long param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
    FUN_100887ce0(0x14,0xda,0x111,"ssl_lib.c",0x1a1);
    return 0;
  }
  *(uint *)(param_1 + 0x108) = param_3;
  _memcpy((void *)(param_1 + 0x10c),param_2,(ulong)param_3);
  return 1;
}

