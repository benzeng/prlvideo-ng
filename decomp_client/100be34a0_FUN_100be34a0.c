
undefined8 FUN_100be34a0(long param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
    FUN_100c62ee0(0x14,0xdb,0x111,"ssl_lib.c",0x193);
    return 0;
  }
  *(uint *)(param_1 + 0x154) = param_3;
  _memcpy((void *)(param_1 + 0x158),param_2,(ulong)param_3);
  return 1;
}

