
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1000ed7d0(void)

{
  long lVar1;
  long lVar2;
  
  if ((int)DAT_1011c37a0 != 0) {
    FUN_1008e3970("","vm",0,"%s: stop writing",*(undefined8 *)(DAT_1011b6d40 + 0x2c));
  }
  lVar1 = (ulong)*(uint *)(DAT_1011b6d60 + 0xc) + DAT_1011b6d50;
  lVar2 = (ulong)(DAT_1011b6d6c + 1) * 0x10;
  *(undefined4 *)(lVar2 + lVar1) = 0;
  *(undefined4 *)(lVar2 + 4 + lVar1) = 0x8a9ffffb;
  *(undefined4 *)(lVar2 + 0xc + lVar1) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar1) = 0;
  _DAT_1011b6d78 = 0;
  _DAT_1011b6d70 = 0;
  _DAT_1011b6d68 = 0;
  DAT_1011b6d60 = 0;
  _DAT_1011b6d58 = 0;
  DAT_1011b6d50 = 0;
  _DAT_1011b6d48 = 0;
  DAT_1011b6d40 = 0;
  return 1;
}

