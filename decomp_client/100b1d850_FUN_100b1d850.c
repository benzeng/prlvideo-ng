
int FUN_100b1d850(long *param_1,long param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  
  iVar2 = FUN_100b0dcb0(*(long *)(*param_1 + -0x18) + (long)param_1);
  if (iVar2 < 0) {
    pcVar3 = "Base ReadDirect returned error 0x%x";
  }
  else {
    iVar2 = FUN_100b1d760(param_1,param_4);
    if (-1 < iVar2) {
      lVar7 = *param_1;
      uVar5 = *(ulong *)(*(long *)(lVar7 + -0x18) + 0x38 + (long)param_1);
      uVar1 = ((ulong)*(uint *)(param_1 + 0x3121) + param_1[0x3122]) / uVar5;
      if ((param_3 & 0xffffffff) / uVar5 == 0) {
        return 0;
      }
      iVar2 = 0;
      uVar6 = 0;
      uVar8 = 1;
      do {
        uVar4 = iVar2 + (param_4 - (int)uVar1);
        if ((*(uint *)(param_1[0x3120] + (ulong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0) {
          ___bzero(uVar6 * uVar5 + param_2);
          lVar7 = *param_1;
        }
        iVar2 = iVar2 + 1;
        uVar5 = *(ulong *)(*(long *)(lVar7 + -0x18) + 0x38 + (long)param_1);
        bVar9 = uVar8 < (param_3 & 0xffffffff) / uVar5;
        uVar6 = uVar8;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (bVar9);
      return 0;
    }
    pcVar3 = "Reading bitmap failed with error 0x%x";
  }
  FUN_100df99c0("","dimg",0,pcVar3,iVar2);
  return iVar2;
}

