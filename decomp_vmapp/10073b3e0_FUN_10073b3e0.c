
void FUN_10073b3e0(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long local_48;
  long local_38;
  
  iVar13 = (int)param_3;
  if (iVar13 == 8) {
    FUN_10073a960(param_1,param_2);
    return;
  }
  if (iVar13 == 4) {
    FUN_10073a770(param_1,param_2);
    return;
  }
  if (iVar13 < 0x10) {
    FUN_10073b1a0(param_1,param_2,param_3 & 0xffffffff,param_4);
    return;
  }
  iVar14 = (int)(((uint)(param_3 >> 0x1f) & 1) + iVar13) >> 1;
  lVar11 = (long)iVar14;
  lVar9 = param_2 + lVar11 * 8;
  uVar2 = *(ulong *)(param_2 + ((iVar14 + -1) + lVar11) * 8);
  uVar3 = *(ulong *)(param_2 + (long)(iVar14 + -1) * 8);
  lVar10 = lVar9;
  lVar12 = param_2;
  if (uVar3 == uVar2) {
    if (-1 < iVar14 + -2) {
      lVar7 = (long)(iVar14 + -2) + 1;
      do {
        uVar2 = *(ulong *)(lVar9 + -8 + lVar7 * 8);
        uVar3 = *(ulong *)(param_2 + -8 + lVar7 * 8);
        if (uVar3 != uVar2) {
          if (uVar3 <= uVar2) goto LAB_10073b502;
          goto LAB_10073b513;
        }
        lVar7 = lVar7 + -1;
      } while (0 < lVar7);
    }
    lVar10 = param_4 + (long)(iVar13 * 2) * 8;
    local_38 = param_4 + (long)iVar13 * 8;
    ___bzero(local_38,(long)iVar13 * 8);
  }
  else {
    if (uVar3 <= uVar2) {
LAB_10073b502:
      lVar10 = param_2;
      lVar12 = lVar9;
    }
LAB_10073b513:
    FUN_100739960(param_4,lVar12,lVar10,iVar14);
    lVar10 = param_4 + (long)(iVar13 * 2) * 8;
    local_38 = param_4 + (long)iVar13 * 8;
    FUN_10073b3e0(local_38,param_4,iVar14,lVar10);
  }
  local_48 = (long)iVar13;
  FUN_10073b3e0(param_1,param_2,iVar14,lVar10);
  lVar12 = param_1 + local_48 * 8;
  FUN_10073b3e0(lVar12,lVar9,iVar14,lVar10);
  iVar4 = FUN_100737dd0(param_4,param_1,lVar12,param_3 & 0xffffffff);
  iVar5 = FUN_100739960(local_38,param_4,local_38,param_3 & 0xffffffff);
  lVar9 = param_1 + lVar11 * 8;
  iVar6 = FUN_100737dd0(lVar9,lVar9,local_38,param_3 & 0xffffffff);
  iVar6 = iVar6 + (iVar4 - iVar5);
  if (iVar6 != 0) {
    lVar9 = (long)(iVar14 + iVar13);
    puVar1 = (ulong *)(param_1 + lVar9 * 8);
    uVar2 = *puVar1;
    *(ulong *)(param_1 + lVar9 * 8) = (long)iVar6 + *puVar1;
    if (CARRY8((long)iVar6,uVar2)) {
      plVar8 = (long *)(param_1 + 8 + lVar9 * 8);
      do {
        *plVar8 = *plVar8 + 1;
        lVar9 = *plVar8;
        plVar8 = plVar8 + 1;
      } while (lVar9 == 0);
    }
  }
  return;
}

