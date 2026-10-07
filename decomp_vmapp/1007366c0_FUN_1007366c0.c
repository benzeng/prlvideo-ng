
undefined8 FUN_1007366c0(long *param_1,long param_2,long *param_3,long *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  ulong *puVar23;
  long lVar24;
  uint uVar25;
  ulong *puVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  bool bVar35;
  
  iVar9 = (int)param_4[1];
  lVar12 = (long)iVar9;
  if (lVar12 == 0) {
    return 0;
  }
  if ((int)param_3[1] == iVar9) {
    lVar22 = (long)(iVar9 + -1) * 8;
    puVar26 = (ulong *)(*param_4 + lVar22);
    puVar23 = (ulong *)(lVar22 + *param_3);
    do {
      if (lVar12 < 1) goto LAB_10073676c;
      uVar2 = *puVar26;
      lVar12 = lVar12 + -1;
      puVar26 = puVar26 + -1;
      uVar31 = *puVar23;
      puVar23 = puVar23 + -1;
    } while (uVar31 == uVar2);
    if (uVar31 <= uVar2) {
LAB_100736730:
      if ((param_2 != 0) && (lVar12 = FUN_10072d5c0(param_2,param_3), lVar12 == 0)) {
        return 0;
      }
      if (param_1 == (long *)0x0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return 1;
    }
  }
  else if ((int)param_3[1] < iVar9) goto LAB_100736730;
LAB_10073676c:
  FUN_1007353b0(param_5);
  plVar13 = (long *)FUN_100735470(param_5);
  plVar14 = (long *)FUN_100735470(param_5);
  plVar15 = (long *)FUN_100735470(param_5);
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_100735470(param_5);
  }
  if ((plVar15 == (long *)0x0) || (param_1 == (long *)0x0)) {
LAB_100736995:
    if (*(int *)(param_5 + 0x34) == 0) {
      uVar11 = *(int *)(param_5 + 0x28) - 1;
      *(uint *)(param_5 + 0x28) = uVar11;
      uVar11 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar11 * 4);
      uVar1 = *(uint *)(param_5 + 0x30);
      if (uVar11 <= uVar1 && uVar1 - uVar11 != 0) {
        iVar9 = *(int *)(param_5 + 0x18);
        uVar21 = uVar1 - uVar11;
        *(uint *)(param_5 + 0x18) = iVar9 - (uVar1 - uVar11);
        if (uVar21 != 0) {
          uVar25 = iVar9 + 0xfU & 0xf;
          if ((uVar21 & 1) != 0) {
            if (uVar25 == 0) {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
              uVar25 = 0xf;
            }
            else {
              uVar25 = uVar25 - 1;
            }
            uVar21 = uVar21 - 1;
          }
          if (uVar1 - 1 != uVar11) {
            do {
              if (uVar25 == 0) {
                *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                iVar9 = 0xf;
              }
              else {
                iVar9 = uVar25 - 1;
              }
              uVar21 = uVar21 - 2;
              if (iVar9 == 0) {
                *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                uVar25 = 0xf;
              }
              else {
                uVar25 = iVar9 - 1;
              }
            } while (uVar21 != 0);
          }
        }
      }
      *(uint *)(param_5 + 0x30) = uVar11;
      *(undefined4 *)(param_5 + 0x38) = 0;
    }
    else {
      *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + -1;
    }
    return 0;
  }
  iVar9 = (int)param_4[1];
  iVar8 = 0;
  if ((long)iVar9 != 0) {
    iVar8 = FUN_10072d8e0(*(undefined8 *)(*param_4 + -8 + (long)iVar9 * 8));
    iVar8 = iVar8 + (iVar9 + -1) * 0x40;
  }
  iVar9 = FUN_100736380(plVar15,param_4);
  if (iVar9 == 0) goto LAB_100736995;
  *(undefined4 *)(plVar15 + 2) = 0;
  iVar9 = FUN_100736380(plVar14);
  if (iVar9 == 0) goto LAB_100736995;
  *(undefined4 *)(plVar14 + 2) = 0;
  iVar9 = (int)plVar15[1];
  lVar34 = (long)iVar9;
  iVar20 = (int)plVar14[1];
  lVar22 = iVar20 - lVar34;
  uVar31 = 0;
  lVar12 = *plVar14;
  uVar2 = *(ulong *)(*plVar15 + -8 + lVar34 * 8);
  if (lVar34 != 1) {
    uVar31 = *(ulong *)(*plVar15 + -0x10 + lVar34 * 8);
  }
  *(uint *)(param_1 + 2) = *(uint *)(param_4 + 2) ^ *(uint *)(param_3 + 2);
  iVar33 = (int)lVar22;
  if ((*(int *)((long)param_1 + 0xc) <= iVar33) &&
     (lVar16 = FUN_10072d730(param_1,iVar33 + 1), lVar16 == 0)) goto LAB_100736995;
  *(int *)(param_1 + 1) = iVar33;
  lVar16 = *param_1;
  if ((*(int *)((long)plVar13 + 0xc) <= iVar9) &&
     (lVar17 = FUN_10072d730(plVar13,iVar9 + 1), lVar17 == 0)) goto LAB_100736995;
  lVar17 = lVar12 + (long)iVar33 * 8;
  puVar23 = (ulong *)(lVar16 + -8 + lVar22 * 8);
  if (iVar9 == (int)plVar15[1]) {
    lVar27 = *plVar15;
    lVar24 = (long)(iVar9 + -1);
    lVar32 = lVar34;
    do {
      if (lVar32 < 1) goto LAB_100736a2b;
      uVar30 = *(ulong *)(lVar27 + lVar24 * 8);
      lVar32 = lVar32 + -1;
      uVar18 = *(ulong *)(lVar12 + (long)(iVar20 - iVar9) * 8 + lVar24 * 8);
      lVar24 = lVar24 + -1;
    } while (uVar18 == uVar30);
    if (uVar30 <= uVar18) {
LAB_100736a2b:
      FUN_100739960(lVar17,lVar17,lVar27,iVar9);
      *puVar23 = 1;
      iVar10 = (int)param_1[1];
      goto LAB_100736a4e;
    }
  }
  else if ((int)plVar15[1] <= iVar9) {
    lVar27 = *plVar15;
    goto LAB_100736a2b;
  }
  iVar10 = (int)param_1[1] + -1;
  *(int *)(param_1 + 1) = iVar10;
LAB_100736a4e:
  if (iVar10 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    puVar23 = (ulong *)(lVar16 + -8 + (lVar22 + -1) * 8);
  }
  if (1 < iVar33) {
    puVar26 = (ulong *)(lVar12 + -8 + (long)iVar20 * 8);
    iVar20 = 0;
    do {
      uVar30 = 0xffffffffffffffff;
      if (*puVar26 != uVar2) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar2;
        auVar4._8_8_ = *puVar26;
        auVar4._0_8_ = puVar26[-1];
        uVar30 = SUB168(auVar4 / auVar3,0);
        uVar28 = SUB168(auVar4 % auVar3,0);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar31;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar30;
        auVar7 = auVar5 * auVar6;
        uVar18 = uVar30;
        if (uVar28 <= auVar7._8_8_) {
          do {
            uVar30 = uVar18;
            uVar18 = auVar7._0_8_;
            if ((auVar7._8_8_ == uVar28) && (uVar18 <= puVar26[-2])) goto LAB_100736b0a;
            bVar35 = CARRY8(uVar28,uVar2);
            uVar28 = uVar28 + uVar2;
            if (bVar35) break;
            uVar29 = auVar7._8_8_ - (ulong)(uVar18 < uVar31);
            auVar7._8_8_ = uVar29;
            auVar7._0_8_ = uVar18 - uVar31;
            uVar18 = uVar30 - 1;
          } while (uVar28 <= uVar29);
          uVar30 = uVar30 - 1;
        }
      }
LAB_100736b0a:
      uVar19 = FUN_100737ec0(*plVar13,*plVar15,iVar9,uVar30);
      lVar12 = *plVar13;
      *(undefined8 *)(lVar12 + lVar34 * 8) = uVar19;
      lVar17 = lVar17 + -8;
      lVar12 = FUN_100739960(lVar17,lVar17,lVar12,iVar9 + 1);
      if (lVar12 != 0) {
        uVar30 = uVar30 - 1;
        lVar12 = FUN_100737dd0(lVar17,lVar17,*plVar15,iVar9);
        if (lVar12 != 0) {
          *puVar26 = *puVar26 + 1;
        }
      }
      *puVar23 = uVar30;
      iVar20 = iVar20 + 1;
      puVar26 = puVar26 + -1;
      puVar23 = puVar23 + -1;
    } while (iVar20 < (int)(lVar22 + -1));
  }
  iVar9 = (int)plVar14[1];
  if (0 < (long)iVar9) {
    plVar13 = (long *)(*plVar14 + -8 + (long)iVar9 * 8);
    iVar9 = iVar9 + 1;
    do {
      if (*plVar13 != 0) break;
      plVar13 = plVar13 + -1;
      *(int *)(plVar14 + 1) = iVar9 + -2;
      iVar9 = iVar9 + -1;
    } while (1 < iVar9);
  }
  if (param_2 != 0) {
    lVar12 = param_3[2];
    FUN_100737060(param_2,plVar14,0x80 - iVar8 % 0x40);
    if (*(int *)(param_2 + 8) != 0) {
      *(int *)(param_2 + 0x10) = (int)lVar12;
    }
  }
  if (*(int *)(param_5 + 0x34) != 0) {
    *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + -1;
    return 1;
  }
  uVar11 = *(int *)(param_5 + 0x28) - 1;
  *(uint *)(param_5 + 0x28) = uVar11;
  uVar11 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar11 * 4);
  uVar1 = *(uint *)(param_5 + 0x30);
  if (uVar11 <= uVar1 && uVar1 - uVar11 != 0) {
    iVar9 = *(int *)(param_5 + 0x18);
    uVar21 = uVar1 - uVar11;
    *(uint *)(param_5 + 0x18) = iVar9 - (uVar1 - uVar11);
    if (uVar21 != 0) {
      uVar25 = iVar9 + 0xfU & 0xf;
      if ((uVar21 & 1) != 0) {
        if (uVar25 == 0) {
          *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
          uVar25 = 0xf;
        }
        else {
          uVar25 = uVar25 - 1;
        }
        uVar21 = uVar21 - 1;
      }
      if (uVar1 - 1 != uVar11) {
        do {
          if (uVar25 == 0) {
            *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
            iVar9 = 0xf;
          }
          else {
            iVar9 = uVar25 - 1;
          }
          uVar21 = uVar21 - 2;
          if (iVar9 == 0) {
            *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
            uVar25 = 0xf;
          }
          else {
            uVar25 = iVar9 - 1;
          }
        } while (uVar21 != 0);
      }
    }
  }
  *(uint *)(param_5 + 0x30) = uVar11;
  *(undefined4 *)(param_5 + 0x38) = 0;
  return 1;
}

