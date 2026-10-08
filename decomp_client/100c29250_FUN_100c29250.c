
void FUN_100c29250(ulong *param_1,long param_2,long param_3,long param_4,uint param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  ulong *puVar23;
  
  iVar6 = (int)param_5 / 2;
  uVar18 = (ulong)iVar6;
  lVar1 = param_2 + uVar18 * 8;
  iVar7 = FUN_100c27450(param_2,lVar1,iVar6);
  lVar12 = param_3 + uVar18 * 8;
  iVar8 = FUN_100c27450(lVar12,param_3,iVar6);
  switch(iVar8 + 4 + iVar7 * 3) {
  case 0:
    FUN_100c2f030(param_1,lVar1,param_2,iVar6);
    lVar15 = lVar12;
    break;
  default:
    goto LAB_100c2939d;
  case 2:
    FUN_100c2f030(param_1,lVar1,param_2,iVar6);
    lVar15 = param_3;
    param_3 = lVar12;
    goto LAB_100c2935b;
  case 6:
    FUN_100c2f030(param_1,param_2,lVar1,iVar6);
    lVar15 = lVar12;
LAB_100c2935b:
    FUN_100c2f030(param_1 + uVar18,param_3,lVar15,iVar6);
    bVar5 = true;
    goto LAB_100c293a4;
  case 8:
    FUN_100c2f030(param_1,param_2,lVar1,iVar6);
    lVar15 = param_3;
    param_3 = lVar12;
  }
  FUN_100c2f030(param_1 + uVar18,param_3,lVar15,iVar6);
LAB_100c2939d:
  bVar5 = false;
LAB_100c293a4:
  puVar11 = param_1 + uVar18;
  if ((param_5 & 0xfffffffe) == 0x10) {
    FUN_100c2f060(param_6,param_1,puVar11);
    FUN_100c2f060(param_1,lVar1,lVar12);
  }
  else {
    lVar15 = param_6 + (long)(int)param_5 * 8;
    FUN_100c284c0(param_6,param_1,puVar11,iVar6,0,0,lVar15);
    FUN_100c284c0(param_1,lVar1,lVar12,iVar6,0,0,lVar15);
  }
  puVar23 = param_1;
  if (param_4 != 0) {
    puVar23 = (ulong *)(param_6 + (long)(int)(iVar6 + param_5) * 8);
    FUN_100c2f000(puVar23,param_1,param_4);
  }
  lVar12 = (long)(int)param_5;
  lVar1 = param_6 + lVar12 * 8;
  if (bVar5) {
    FUN_100c2f030(lVar1,puVar23,param_6,iVar6);
  }
  else {
    FUN_100c2f000(lVar1,puVar23,param_6,iVar6);
  }
  lVar10 = (long)(int)(iVar6 + param_5);
  lVar15 = param_6 + lVar10 * 8;
  if (param_4 == 0) {
    iVar7 = 0;
    lVar20 = lVar15;
    if (1 < (int)param_5) {
      uVar14 = 1;
      if (0 < (long)uVar18) {
        uVar14 = uVar18;
      }
      uVar13 = 0;
      if (uVar14 != 0) {
        uVar16 = 1;
        if (0 < (long)uVar18) {
          uVar16 = uVar18;
        }
        iVar7 = 0;
        uVar13 = 0;
        if (((uVar14 & 0xfffffffffffffffc) != 0) &&
           ((param_6 + -8 + (uVar16 + lVar12) * 8 < (ulong)(param_6 + lVar10 * 8) ||
            (uVar13 = 0, param_6 + -8 + (uVar16 + lVar10) * 8 < (ulong)(param_6 + lVar12 * 8))))) {
          plVar19 = (long *)(param_6 + 0x10 + lVar10 * 8);
          plVar21 = (long *)(param_6 + 0x10 + lVar12 * 8);
          uVar16 = 0;
          if (0 < (long)uVar18) {
            uVar16 = uVar18;
          }
          uVar16 = uVar16 & 0xfffffffffffffffc;
          do {
            lVar2 = plVar21[-1];
            lVar3 = *plVar21;
            lVar4 = plVar21[1];
            plVar19[-2] = -plVar21[-2];
            plVar19[-1] = -lVar2;
            *plVar19 = -lVar3;
            plVar19[1] = -lVar4;
            plVar19 = plVar19 + 4;
            plVar21 = plVar21 + 4;
            uVar16 = uVar16 - 4;
            uVar13 = uVar14 & 0xfffffffffffffffc;
          } while (uVar16 != 0);
        }
        if (uVar14 == uVar13) goto LAB_100c295fa;
      }
      do {
        iVar7 = 0;
        *(long *)(param_6 + lVar10 * 8 + uVar13 * 8) = -*(long *)(param_6 + lVar12 * 8 + uVar13 * 8)
        ;
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)uVar18);
    }
  }
  else {
    FUN_100c2f030(lVar15,param_4 + uVar18 * 8,lVar1,iVar6);
    iVar7 = FUN_100c2f000(lVar1,lVar15,param_4,iVar6);
    lVar20 = lVar1;
  }
LAB_100c295fa:
  iVar8 = FUN_100c2f000(lVar1,lVar20,param_1,iVar6);
  if (bVar5) {
    iVar9 = FUN_100c2f030(lVar1,lVar1,param_6,iVar6);
    iVar9 = -iVar9;
  }
  else {
    iVar9 = FUN_100c2f000(lVar1,lVar1,param_6,iVar6);
  }
  uVar22 = iVar8 + iVar7 + iVar9;
  iVar7 = FUN_100c2f000(param_1,param_1,lVar15,iVar6);
  iVar8 = FUN_100c2f000(param_1,param_1,puVar11,iVar6);
  param_6 = param_6 + uVar18 * 8;
  if (bVar5) {
    iVar6 = FUN_100c2f030(param_1,param_1,param_6,iVar6);
    iVar6 = -iVar6;
  }
  else {
    iVar6 = FUN_100c2f000(param_1,param_1,param_6,iVar6);
  }
  uVar17 = iVar8 + iVar7 + iVar6;
  if (uVar22 != 0) {
    puVar11 = param_1;
    if ((int)uVar22 < 1) {
      uVar22 = -uVar22;
      do {
        uVar13 = (ulong)(int)uVar22;
        uVar14 = *puVar11;
        uVar22 = -(uint)(uVar14 < uVar13) & 1;
        *puVar11 = uVar14 - uVar13;
        puVar11 = puVar11 + 1;
      } while (uVar14 < uVar13);
    }
    else {
      do {
        uVar13 = (ulong)(int)uVar22;
        uVar14 = *puVar11;
        uVar22 = -(uint)CARRY8(uVar13,uVar14) & 1;
        *puVar11 = uVar13 + uVar14;
        puVar11 = puVar11 + 1;
      } while (CARRY8(uVar13,uVar14));
    }
  }
  if (uVar17 != 0) {
    if ((int)uVar17 < 1) {
      uVar17 = -uVar17;
      param_1 = param_1 + uVar18;
      do {
        uVar14 = (ulong)(int)uVar17;
        uVar18 = *param_1;
        uVar17 = -(uint)(uVar18 < uVar14) & 1;
        *param_1 = uVar18 - uVar14;
        param_1 = param_1 + 1;
      } while (uVar18 < uVar14);
    }
    else {
      param_1 = param_1 + uVar18;
      do {
        uVar14 = (ulong)(int)uVar17;
        uVar18 = *param_1;
        uVar17 = -(uint)CARRY8(uVar14,uVar18) & 1;
        *param_1 = uVar14 + uVar18;
        param_1 = param_1 + 1;
      } while (CARRY8(uVar14,uVar18));
    }
  }
  return;
}

