
void FUN_100c28b60(long param_1,long param_2,long param_3,int param_4,ulong param_5,int param_6,
                  long param_7)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long local_90;
  
  iVar8 = (int)param_5;
  if (param_4 < 8) {
    FUN_100c28a00(param_1,param_2,iVar8 + param_4,param_3,param_6 + param_4);
    return;
  }
  lVar12 = (long)param_4;
  lVar1 = param_2 + lVar12 * 8;
  iVar14 = param_4 - iVar8;
  iVar6 = FUN_100c274a0(param_2,lVar1,param_5 & 0xffffffff,iVar14);
  lVar2 = param_3 + lVar12 * 8;
  iVar11 = param_6 - param_4;
  iVar7 = FUN_100c274a0(lVar2,param_3,param_6,iVar11);
  bVar5 = false;
  switch(iVar7 + 4 + iVar6 * 3) {
  case 0:
    FUN_100c28020(param_7,lVar1,param_2,param_5,iVar8 - param_4);
    FUN_100c28020(param_7 + lVar12 * 8,param_3,lVar2,param_6,param_4 - param_6);
    break;
  case 1:
  case 2:
    FUN_100c28020(param_7,lVar1,param_2,param_5,iVar8 - param_4);
    lVar10 = param_3;
    lVar15 = lVar2;
    goto LAB_100c28cb2;
  case 3:
  case 4:
  case 5:
  case 6:
    FUN_100c28020(param_7,param_2,lVar1,param_5,iVar14);
    iVar11 = param_4 - param_6;
    lVar10 = lVar2;
    lVar15 = param_3;
LAB_100c28cb2:
    FUN_100c28020(param_7 + lVar12 * 8,lVar15,lVar10,param_6,iVar11);
    bVar5 = true;
    break;
  case 7:
  case 8:
    FUN_100c28020(param_7,param_2,lVar1,param_5,iVar14);
    FUN_100c28020(param_7 + lVar12 * 8,lVar2,param_3,param_6,iVar11);
  }
  iVar11 = param_4 * 2;
  if (param_4 == 8) {
    local_90 = param_7 + 0x80;
    FUN_100c2f060(local_90,param_7,param_7 + 0x40);
    FUN_100c2f060(param_1,param_2,param_3);
    lVar13 = param_1 + 0x80;
    FUN_100c28a00(lVar13,lVar1,param_5 & 0xffffffff,lVar2,param_6);
    ___bzero(param_1 + (long)(iVar8 + 0x10 + param_6) * 8,(long)((0x10 - iVar8) - param_6) << 3);
  }
  else {
    lVar10 = param_7 + (long)(param_4 * 4) * 8;
    lVar15 = (long)iVar11;
    local_90 = param_7 + lVar15 * 8;
    FUN_100c284c0(local_90,param_7,param_7 + lVar12 * 8,param_4,0,0,lVar10);
    FUN_100c284c0(param_1,param_2,param_3,param_4,0,0,lVar10);
    iVar7 = param_4 / 2;
    iVar6 = param_6;
    if (param_6 <= iVar8) {
      iVar6 = iVar8;
    }
    if (iVar6 == iVar7) {
      lVar13 = param_1 + lVar15 * 8;
      FUN_100c284c0(lVar13,lVar1,lVar2,iVar7,iVar8 - iVar7,param_6 - iVar7,lVar10);
      iVar6 = iVar11 + iVar7 * 2;
      param_6 = iVar11 + iVar7 * -2;
    }
    else {
      lVar13 = param_1 + lVar15 * 8;
      if (iVar6 <= iVar7) {
        ___bzero(lVar13,lVar15 << 3);
        if ((iVar8 < 0x10) && (param_6 < 0x10)) {
          FUN_100c28a00(lVar13,lVar1,param_5 & 0xffffffff,lVar2,param_6);
        }
        else {
          do {
            iVar7 = iVar7 / 2;
            if ((iVar7 < iVar8) || (iVar7 < param_6)) {
              FUN_100c28b60(lVar13,lVar1,lVar2,iVar7,iVar8 - iVar7,param_6 - iVar7,lVar10);
              goto LAB_100c28eea;
            }
          } while ((iVar7 != iVar8) && (iVar7 != param_6));
          FUN_100c284c0(lVar13,lVar1,lVar2,iVar7,iVar8 - iVar7,param_6 - iVar7,lVar10);
        }
        goto LAB_100c28eea;
      }
      FUN_100c28b60(lVar13,lVar1,lVar2,iVar7,iVar8 - iVar7,param_6 - iVar7,lVar10);
      iVar6 = iVar11 + iVar8 + param_6;
      param_6 = (iVar11 - iVar8) - param_6;
    }
    ___bzero(param_1 + (long)iVar6 * 8,(long)param_6 << 3);
  }
LAB_100c28eea:
  iVar8 = FUN_100c2f000(param_7,param_1,lVar13,iVar11);
  if (bVar5) {
    iVar6 = FUN_100c2f030(local_90,param_7,local_90,iVar11);
    iVar6 = -iVar6;
  }
  else {
    iVar6 = FUN_100c2f000(local_90,local_90,param_7,iVar11);
  }
  lVar1 = param_1 + lVar12 * 8;
  iVar11 = FUN_100c2f000(lVar1,lVar1,local_90,iVar11);
  iVar11 = iVar11 + iVar8 + iVar6;
  if ((iVar11 != 0) &&
     (puVar3 = (ulong *)(param_1 + (long)(param_4 * 3) * 8), uVar4 = *puVar3,
     *(ulong *)(param_1 + (long)(param_4 * 3) * 8) = (long)iVar11 + *puVar3,
     CARRY8((long)iVar11,uVar4))) {
    plVar9 = (long *)(param_1 + 8 + (long)(param_4 * 3) * 8);
    do {
      *plVar9 = *plVar9 + 1;
      lVar1 = *plVar9;
      plVar9 = plVar9 + 1;
    } while (lVar1 == 0);
  }
  return;
}

