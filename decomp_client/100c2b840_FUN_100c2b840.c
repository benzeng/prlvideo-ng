
ulong FUN_100c2b840(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  
  uVar6 = 0xffffffffffffffff;
  if ((param_2 != 0) && (uVar6 = 0, (int)param_1[1] != 0)) {
    iVar2 = FUN_100c26520(param_2);
    bVar7 = (byte)(0x40 - iVar2);
    param_2 = param_2 << (bVar7 & 0x3f);
    iVar2 = FUN_100c2b1d0(param_1,param_1,0x40 - iVar2);
    uVar6 = 0xffffffffffffffff;
    if (iVar2 != 0) {
      uVar6 = 0;
      if (0 < (long)(int)param_1[1]) {
        lVar4 = *param_1;
        lVar5 = (long)(int)param_1[1] + 1;
        uVar6 = 0;
        do {
          lVar1 = *(long *)(lVar4 + -0x10 + lVar5 * 8);
          lVar3 = FUN_100c2efe0(uVar6,lVar1,param_2);
          lVar4 = *param_1;
          *(long *)(lVar4 + -0x10 + lVar5 * 8) = lVar3;
          uVar6 = lVar1 - lVar3 * param_2;
          lVar5 = lVar5 + -1;
        } while (1 < lVar5);
        iVar2 = (int)param_1[1];
        if ((0 < (long)iVar2) && (*(long *)(*param_1 + -8 + (long)iVar2 * 8) == 0)) {
          *(int *)(param_1 + 1) = iVar2 + -1;
        }
      }
      uVar6 = uVar6 >> (bVar7 & 0x3f);
    }
  }
  return uVar6;
}

