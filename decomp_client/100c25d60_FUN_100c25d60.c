
undefined8 FUN_100c25d60(long *param_1,int param_2,long param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  
  iVar10 = 1 << ((byte)param_5 & 0x1f);
  if ((*(int *)((long)param_1 + 0xc) < param_2) &&
     (lVar3 = FUN_100c26b00(param_1,param_2), lVar3 == 0)) {
    return 0;
  }
  if (param_5 < 4) {
    if (param_2 < 1) {
LAB_100c25ebd:
      *(int *)(param_1 + 1) = param_2;
      return 1;
    }
    lVar11 = *param_1;
    lVar3 = 0;
    do {
      lVar7 = 0;
      uVar4 = 0;
      do {
        uVar2 = (uint)lVar7 ^ param_4;
        uVar4 = -(ulong)((uVar2 - 1 & ~uVar2) >> 0x1f) & *(ulong *)(param_3 + lVar7 * 8) | uVar4;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar10);
      *(ulong *)(lVar11 + lVar3 * 8) = uVar4;
      param_3 = param_3 + (long)iVar10 * 8;
      iVar8 = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (iVar8 != param_2 + -1);
  }
  else {
    bVar12 = (byte)(param_5 + -2);
    iVar8 = 1 << (bVar12 & 0x1f);
    uVar9 = (int)param_4 >> (bVar12 & 0x1f);
    uVar2 = uVar9 ^ 0x80000000;
    if (param_2 < 1) goto LAB_100c25ebd;
    lVar3 = *param_1;
    if (param_5 + -2 == 0x1f) {
      ___bzero(lVar3,(ulong)(param_2 - 1) * 8 + 8);
      *(int *)(param_1 + 1) = param_2;
      goto LAB_100c25ff2;
    }
    lVar11 = 0;
    do {
      lVar7 = 0;
      uVar4 = 0;
      do {
        uVar13 = (uint)lVar7 ^ iVar8 - 1U & param_4;
        uVar4 = -(ulong)((uVar13 - 1 & ~uVar13) >> 0x1f) &
                (*(ulong *)(param_3 + (long)(3 << (bVar12 & 0x1f)) * 8 + lVar7 * 8) &
                 -(ulong)(((uVar9 ^ 3) - 1 & uVar2) >> 0x1f) |
                *(ulong *)(param_3 + (long)(iVar8 * 2) * 8 + lVar7 * 8) &
                -(ulong)(((uVar9 ^ 2) - 1 & uVar2) >> 0x1f) |
                *(ulong *)(param_3 + (long)iVar8 * 8 + lVar7 * 8) &
                -(ulong)(((uVar9 ^ 1) - 1 & uVar2) >> 0x1f) |
                *(ulong *)(param_3 + lVar7 * 8) & -(ulong)((uVar9 - 1 & uVar2) >> 0x1f)) | uVar4;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar8);
      *(ulong *)(lVar3 + lVar11 * 8) = uVar4;
      param_3 = param_3 + (long)iVar10 * 8;
      iVar6 = (int)lVar11;
      lVar11 = lVar11 + 1;
    } while (iVar6 != param_2 + -1);
  }
  *(int *)(param_1 + 1) = param_2;
  if (param_2 < 1) {
    return 1;
  }
LAB_100c25ff2:
  plVar5 = (long *)((long)(param_2 + -1) * 8 + *param_1);
  do {
    iVar10 = param_2;
    if (*plVar5 != 0) break;
    plVar5 = plVar5 + -1;
    iVar10 = param_2 + -1;
    bVar1 = 1 < param_2;
    param_2 = iVar10;
  } while (bVar1);
  *(int *)(param_1 + 1) = iVar10;
  return 1;
}

