
undefined8 FUN_100be9cc0(long param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
    FUN_100c62ee0(0x14,0x138,0x111,"ssl_sess.c",0x3fd);
    return 0;
  }
  *(uint *)(param_1 + 0x68) = param_3;
  _memcpy((void *)(param_1 + 0x6c),param_2,(ulong)param_3);
  return 1;
}

