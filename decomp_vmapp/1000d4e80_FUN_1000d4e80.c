
long FUN_1000d4e80(uint param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_1;
  lVar1 = *(long *)(DAT_1011c3698 + 0x1938);
  if (3 < param_1) {
    FUN_1008e3970("","vm",0,"[CSnapshot] invalid IDE device index %u");
    uVar2 = 0;
  }
  return lVar1 + 0x2decc + uVar2 * 0x538;
}

