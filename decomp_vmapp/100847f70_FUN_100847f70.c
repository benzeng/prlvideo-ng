
undefined8 FUN_100847f70(long *param_1,long param_2,long *param_3,long *param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  int iVar19;
  ulong *puVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  bool bVar29;
  long local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  
  if ((0 < (long)(int)param_3[1]) && (*(long *)(*param_3 + -8 + (long)(int)param_3[1] * 8) == 0)) {
LAB_10084813f:
    FUN_100887ce0(3,0x6b,0x6b,"bn_div.c",0xcf);
    return 0;
  }
  iVar6 = (int)param_4[1];
  if ((0 < (long)iVar6) && (*(long *)(*param_4 + -8 + (long)iVar6 * 8) == 0)) goto LAB_10084813f;
  if (((*(byte *)((long)param_3 + 0x14) & 4) != 0) ||
     (iVar19 = 0, (*(byte *)((long)param_4 + 0x14) & 4) != 0)) {
    iVar19 = 1;
  }
  if (iVar6 == 0) {
    FUN_100887ce0(3,0x6b,0x67,"bn_div.c",0xe5);
    return 0;
  }
  if ((iVar19 == 0) && (iVar6 = FUN_10084bf00(param_3,param_4), iVar6 < 0)) {
    if ((param_2 != 0) && (lVar13 = FUN_10084b950(param_2,param_3), lVar13 == 0)) {
      return 0;
    }
    if (param_1 != (long *)0x0) {
      FUN_10084bbb0(param_1,0);
      return 1;
    }
    return 1;
  }
  FUN_10084ca60(param_5);
  plVar10 = (long *)FUN_10084cc20(param_5);
  plVar11 = (long *)FUN_10084cc20(param_5);
  plVar12 = (long *)FUN_10084cc20(param_5);
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_10084cc20(param_5);
  }
  if ((((plVar11 == (long *)0x0) || (plVar10 == (long *)0x0)) || (plVar12 == (long *)0x0)) ||
     (param_1 == (long *)0x0)) {
LAB_1008483b9:
    FUN_10084cb40(param_5);
    return 0;
  }
  iVar6 = FUN_10084b410(param_4);
  iVar7 = FUN_10084ffd0(plVar12,param_4);
  if (iVar7 == 0) goto LAB_1008483b9;
  *(undefined4 *)(plVar12 + 2) = 0;
  iVar7 = FUN_10084ffd0(plVar11,param_3);
  if (iVar7 == 0) goto LAB_1008483b9;
  *(undefined4 *)(plVar11 + 2) = 0;
  iVar7 = (int)plVar11[1];
  if (iVar19 != 0) {
    iVar27 = (int)plVar12[1];
    if (iVar27 + 1 < iVar7) {
      if (*(int *)((long)plVar11 + 0xc) <= iVar7) {
        lVar13 = FUN_10084b900(plVar11,iVar7 + 1);
        if (lVar13 == 0) goto LAB_1008483b9;
        iVar7 = (int)plVar11[1];
      }
      *(undefined8 *)(*plVar11 + (long)iVar7 * 8) = 0;
      iVar7 = iVar7 + 1;
    }
    else {
      iVar26 = iVar7;
      if (*(int *)((long)plVar11 + 0xc) < iVar27 + 2) {
        lVar13 = FUN_10084b900(plVar11,iVar27 + 2);
        if (lVar13 == 0) goto LAB_1008483b9;
        iVar26 = (int)plVar11[1];
        iVar27 = (int)plVar12[1];
      }
      iVar7 = iVar27 + 2;
      if (iVar26 < iVar7) {
        ___bzero(*plVar11 + (long)iVar26 * 8);
      }
    }
    *(int *)(plVar11 + 1) = iVar7;
  }
  iVar27 = (int)plVar12[1];
  lVar13 = (long)iVar27;
  iVar26 = iVar7 - iVar27;
  local_38 = 0;
  local_48 = (long)iVar26 * 8 + *plVar11;
  local_3c = *(int *)((long)plVar11 + 0xc) - iVar26;
  uVar25 = 0;
  uVar18 = *(ulong *)(*plVar12 + -8 + lVar13 * 8);
  if (lVar13 != 1) {
    uVar25 = *(ulong *)(*plVar12 + -0x10 + lVar13 * 8);
  }
  puVar20 = (ulong *)((long)(iVar7 + -1) * 8 + *plVar11);
  *(uint *)(param_1 + 2) = *(uint *)(param_4 + 2) ^ *(uint *)(param_3 + 2);
  local_40 = iVar27;
  if ((*(int *)((long)param_1 + 0xc) <= iVar26) &&
     (lVar14 = FUN_10084b900(param_1,iVar26 + 1), lVar14 == 0)) goto LAB_1008483b9;
  *(int *)(param_1 + 1) = iVar26 - iVar19;
  lVar14 = *param_1;
  if ((*(int *)((long)plVar10 + 0xc) <= iVar27) &&
     (lVar15 = FUN_10084b900(plVar10,iVar27 + 1), lVar15 == 0)) goto LAB_1008483b9;
  iVar7 = iVar26 + -1;
  puVar24 = (ulong *)(lVar14 + (long)iVar7 * 8);
  if (iVar19 == 0) {
    iVar8 = FUN_10084bf00(&local_48,plVar12);
    if (iVar8 < 0) {
      iVar8 = (int)param_1[1] + -1;
      *(int *)(param_1 + 1) = iVar8;
      goto LAB_1008483ae;
    }
    FUN_100853e30(local_48,local_48,*plVar12,lVar13);
    *puVar24 = 1;
  }
  iVar8 = (int)param_1[1];
LAB_1008483ae:
  if (iVar8 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    puVar24 = (ulong *)(lVar14 + -8 + (long)iVar7 * 8);
  }
  if (1 < iVar26) {
    iVar26 = 0;
    do {
      uVar28 = 0xffffffffffffffff;
      if (*puVar20 != uVar18) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar18;
        auVar2._8_8_ = *puVar20;
        auVar2._0_8_ = puVar20[-1];
        uVar28 = SUB168(auVar2 / auVar1,0);
        uVar22 = SUB168(auVar2 % auVar1,0);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar25;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar28;
        auVar5 = auVar3 * auVar4;
        uVar16 = uVar28;
        if (uVar22 <= auVar5._8_8_) {
          do {
            uVar28 = uVar16;
            uVar16 = auVar5._0_8_;
            if ((auVar5._8_8_ == uVar22) && (uVar16 <= puVar20[-2])) goto LAB_100848469;
            bVar29 = CARRY8(uVar22,uVar18);
            uVar22 = uVar22 + uVar18;
            if (bVar29) break;
            uVar23 = auVar5._8_8_ - (ulong)(uVar16 < uVar25);
            auVar5._8_8_ = uVar23;
            auVar5._0_8_ = uVar16 - uVar25;
            uVar16 = uVar28 - 1;
          } while (uVar22 <= uVar23);
          uVar28 = uVar28 - 1;
        }
      }
LAB_100848469:
      uVar17 = FUN_100853b90(*plVar10,*plVar12,iVar27,uVar28);
      *(undefined8 *)(*plVar10 + lVar13 * 8) = uVar17;
      local_48 = local_48 + -8;
      lVar14 = FUN_100853e30(local_48,local_48,*plVar10,iVar27 + 1);
      if (lVar14 != 0) {
        uVar28 = uVar28 - 1;
        lVar14 = FUN_100853e00(local_48,local_48,*plVar12,iVar27);
        if (lVar14 != 0) {
          *puVar20 = *puVar20 + 1;
        }
      }
      *puVar24 = uVar28;
      iVar26 = iVar26 + 1;
      puVar20 = puVar20 + -1;
      puVar24 = puVar24 + -1;
    } while (iVar26 < iVar7);
  }
  uVar18 = (ulong)(int)plVar11[1];
  if (0 < (long)uVar18) {
    plVar10 = (long *)(*plVar11 + -8 + uVar18 * 8);
    do {
      uVar9 = (uint)uVar18;
      uVar21 = uVar9;
      if (*plVar10 != 0) break;
      plVar10 = plVar10 + -1;
      uVar21 = uVar9 - 1;
      uVar18 = (ulong)uVar21;
    } while (1 < (int)uVar9);
    *(uint *)(plVar11 + 1) = uVar21;
  }
  if (param_2 != 0) {
    lVar13 = param_3[2];
    FUN_100850250(param_2,plVar11,0x80 - iVar6 % 0x40);
    if (*(int *)(param_2 + 8) != 0) {
      *(int *)(param_2 + 0x10) = (int)lVar13;
    }
  }
  if ((iVar19 != 0) && (uVar18 = (ulong)(int)param_1[1], 0 < (long)uVar18)) {
    plVar10 = (long *)(*param_1 + -8 + uVar18 * 8);
    do {
      uVar9 = (uint)uVar18;
      uVar21 = uVar9;
      if (*plVar10 != 0) break;
      plVar10 = plVar10 + -1;
      uVar21 = uVar9 - 1;
      uVar18 = (ulong)uVar21;
    } while (1 < (int)uVar9);
    *(uint *)(param_1 + 1) = uVar21;
  }
  FUN_10084cb40(param_5);
  return 1;
}

