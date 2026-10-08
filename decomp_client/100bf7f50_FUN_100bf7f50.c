
ulong FUN_100bf7f50(undefined8 param_1,long param_2,int param_3,int param_4,code *param_5,
                   uint param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  
  uVar6 = 0;
  if (param_3 != 0) {
    iVar4 = 0;
    iVar2 = 0;
    uVar7 = 0;
    while (iVar3 = param_3, (int)uVar6 < iVar3) {
      iVar4 = (iVar3 + (int)uVar6) / 2;
      uVar7 = iVar4 * param_4 + param_2;
      iVar2 = (*param_5)(param_1,uVar7);
      param_3 = iVar4;
      if (-1 < iVar2) {
        if (iVar2 < 1) {
          bVar9 = false;
          goto LAB_100bf7ff3;
        }
        uVar6 = (ulong)(iVar4 + 1);
        param_3 = iVar3;
      }
    }
    bVar9 = iVar2 != 0;
    uVar6 = 0;
    if (((param_6 & 1) != 0) || (iVar2 == 0)) {
LAB_100bf7ff3:
      uVar6 = uVar7;
      if (((param_6 & 2) != 0) && (!bVar9)) {
        lVar5 = ((long)iVar4 + -1) * (long)param_4 + param_2;
        lVar1 = (long)iVar4;
        do {
          lVar8 = lVar1;
          if (lVar8 < 1) break;
          iVar2 = (*param_5)(param_1,lVar5);
          lVar5 = lVar5 - param_4;
          lVar1 = lVar8 + -1;
        } while (iVar2 == 0);
        uVar6 = param_2 + (int)lVar8 * param_4;
      }
    }
  }
  return uVar6;
}

