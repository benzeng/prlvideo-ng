
long FUN_1000d5060(uint param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)DAT_100bfbb64;
  if (param_1 == 0) {
    DAT_100bfbb64 = DAT_100bfbb64 + 1 & 3;
    uVar1 = (ulong)DAT_100bfbb64;
    lVar2 = *(long *)(DAT_1011c3698 + 0x1938);
  }
  else {
    lVar2 = *(long *)(DAT_1011c3698 + 0x1938);
    if (3 < DAT_100bfbb64) {
      FUN_1008e3970("","vm",0,"[CSnapshot] invalid IDE device index %u");
      uVar1 = 0;
    }
  }
  return (ulong)param_1 + 0x2dc40 + uVar1 * 0x538 + lVar2;
}

