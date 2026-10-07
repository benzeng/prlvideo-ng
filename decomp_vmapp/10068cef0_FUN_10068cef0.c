
long FUN_10068cef0(ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  
  if ((param_3 < param_2) && (param_5 != 0 && (param_2 != 0 && (param_3 != 0 && param_4 != 0)))) {
    uVar1 = 0xffffffffffffffff;
    if ((param_3 < 8) &&
       (bVar3 = (char)param_3 * '\b' + 9,
       (ulong)(param_4 - 1) <= (ulong)~(1L << (bVar3 & 0x3f)) >> (bVar3 & 0x3f))) {
      uVar1 = (ulong)param_4 << (bVar3 & 0x3f);
    }
    uVar1 = uVar1 / param_2;
    uVar4 = param_3 * uVar1;
    if (((param_1 & 0xffffffff) <= ~uVar4) &&
       (uVar4 = uVar4 + (param_1 & 0xffffffff), (ulong)(param_5 - 1) <= ~uVar4)) {
      uVar1 = uVar1 * param_2;
      uVar4 = ((ulong)param_5 - 1) + uVar4;
      uVar4 = uVar4 - uVar4 % (ulong)param_5;
      lVar2 = 0;
      if (uVar4 <= uVar1) {
        lVar2 = uVar1 - uVar4;
      }
      return lVar2;
    }
  }
  return 0;
}

