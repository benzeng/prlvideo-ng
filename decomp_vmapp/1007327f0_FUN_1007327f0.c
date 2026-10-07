
byte FUN_1007327f0(long *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  uint uVar19;
  long lVar20;
  ulong *puVar21;
  long lVar22;
  uint uVar23;
  bool bVar24;
  
  lVar15 = *param_1;
  if ((*(code **)(lVar15 + 0xc0) != (code *)0x0) && (lVar15 == *param_3)) {
    iVar10 = (**(code **)(lVar15 + 0xc0))(param_1,param_3);
    if (iVar10 != 0) {
      *(undefined4 *)(param_2 + 0x40) = 0;
      *(undefined4 *)(param_2 + 0x48) = 0;
      *(undefined4 *)(param_2 + 0x50) = 0;
      return 1;
    }
    lVar15 = *param_1;
  }
  pcVar5 = *(code **)(lVar15 + 0x100);
  pcVar6 = *(code **)(lVar15 + 0x108);
  puVar17 = (undefined8 *)0x0;
  if (param_4 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar17 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)(puVar17 + 7) = 0;
    puVar17[6] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    param_4 = puVar17;
  }
  bVar9 = 0;
  FUN_1007353b0(param_4);
  plVar13 = (long *)FUN_100735470(param_4);
  plVar14 = (long *)FUN_100735470(param_4);
  lVar15 = FUN_100735470(param_4);
  lVar16 = FUN_100735470(param_4);
  if (lVar16 == 0) goto LAB_10073338a;
  plVar3 = param_1 + 0xd;
  if ((int)param_3[10] == 0) {
    if ((int)param_1[0x19] == 0) {
      iVar10 = (*pcVar6)(param_1,plVar13,param_3 + 1,param_4);
      if ((iVar10 == 0) || (iVar10 = FUN_100737790(plVar14,plVar13), iVar10 == 0))
      goto LAB_10073338a;
      if (plVar14 == (long *)0x0) {
LAB_100732bb7:
        iVar10 = FUN_100737670(plVar14,plVar14,plVar3);
        if (iVar10 == 0) goto LAB_10073338a;
      }
      else {
        iVar10 = (int)plVar14[2];
        uVar11 = ~-(uint)(iVar10 == 0) | 1;
        uVar12 = uVar11;
        if (iVar10 == (int)param_1[0xf]) {
          iVar4 = (int)plVar14[1];
          lVar20 = (long)iVar4;
          if ((iVar4 <= (int)param_1[0xe]) &&
             (uVar23 = -(uint)(iVar10 == 0) | 1, uVar12 = uVar23, (int)param_1[0xe] <= iVar4)) {
            lVar22 = (long)(iVar4 + -1) << 3;
            do {
              if (lVar20 < 1) goto LAB_100732bb7;
              puVar18 = (ulong *)(*plVar14 + lVar22);
              puVar21 = (ulong *)(*plVar3 + lVar22);
              uVar12 = uVar11;
              if (*puVar21 < *puVar18) break;
              lVar20 = lVar20 + -1;
              lVar22 = lVar22 + -8;
              uVar12 = uVar23;
            } while (*puVar21 <= *puVar18);
          }
        }
        if (-1 < (int)uVar12) goto LAB_100732bb7;
      }
      iVar10 = FUN_100736d50(plVar13,plVar13,plVar14);
      if (iVar10 == 0) goto LAB_10073338a;
      iVar10 = (int)plVar13[1];
      lVar20 = (long)iVar10;
      if (iVar10 == (int)param_1[0xe]) {
        lVar22 = (long)(iVar10 + -1) * 8;
        puVar21 = (ulong *)(*plVar3 + lVar22);
        puVar18 = (ulong *)(lVar22 + *plVar13);
        do {
          if (lVar20 < 1) goto LAB_100732ecf;
          uVar7 = *puVar21;
          lVar20 = lVar20 + -1;
          puVar21 = puVar21 + -1;
          uVar8 = *puVar18;
          puVar18 = puVar18 + -1;
        } while (uVar8 == uVar7);
        if (uVar7 <= uVar8) {
LAB_100732ecf:
          iVar10 = FUN_100737410(plVar13,plVar13,plVar3);
          if (iVar10 == 0) goto LAB_10073338a;
        }
      }
      else if ((int)param_1[0xe] <= iVar10) goto LAB_100732ecf;
      iVar10 = (*pcVar6)(param_1,plVar14,param_3 + 7,param_4);
      if ((((iVar10 == 0) || (iVar10 = (*pcVar6)(param_1,plVar14,plVar14,param_4), iVar10 == 0)) ||
          (iVar10 = (*pcVar5)(param_1,plVar14,plVar14,param_1 + 0x13), iVar10 == 0)) ||
         (iVar10 = FUN_100736d50(plVar14,plVar14,plVar13), iVar10 == 0)) goto LAB_10073338a;
      iVar10 = (int)plVar14[1];
      lVar20 = (long)iVar10;
      if (iVar10 == (int)param_1[0xe]) {
        lVar22 = (long)(iVar10 + -1) * 8;
        puVar21 = (ulong *)(*plVar3 + lVar22);
        puVar18 = (ulong *)(lVar22 + *plVar14);
        do {
          if (lVar20 < 1) goto LAB_10073301c;
          uVar7 = *puVar21;
          lVar20 = lVar20 + -1;
          puVar21 = puVar21 + -1;
          uVar8 = *puVar18;
          puVar18 = puVar18 + -1;
        } while (uVar8 == uVar7);
        if (uVar7 < uVar8) {
LAB_10073301c:
          iVar10 = FUN_100737410(plVar14,plVar14,plVar3);
          goto joined_r0x000100732ffb;
        }
      }
      else if ((int)param_1[0xe] <= iVar10) goto LAB_10073301c;
      goto LAB_100733036;
    }
    iVar10 = (*pcVar6)(param_1,plVar14,param_3 + 7,param_4);
    if (iVar10 == 0) goto LAB_10073338a;
    iVar10 = FUN_100736d50(plVar13,param_3 + 1,plVar14);
    if (iVar10 != 0) {
      iVar10 = (int)plVar13[1];
      lVar20 = (long)iVar10;
      if (iVar10 == (int)param_1[0xe]) {
        lVar22 = (long)(iVar10 + -1) * 8;
        puVar21 = (ulong *)(*plVar3 + lVar22);
        puVar18 = (ulong *)(lVar22 + *plVar13);
        do {
          if (lVar20 < 1) goto LAB_100732ce7;
          uVar7 = *puVar21;
          lVar20 = lVar20 + -1;
          puVar21 = puVar21 + -1;
          uVar8 = *puVar18;
          puVar18 = puVar18 + -1;
        } while (uVar8 == uVar7);
        if (uVar7 <= uVar8) {
LAB_100732ce7:
          iVar10 = FUN_100737410(plVar13,plVar13,plVar3);
          if (iVar10 == 0) goto LAB_100733380;
        }
      }
      else if ((int)param_1[0xe] <= iVar10) goto LAB_100732ce7;
      iVar10 = FUN_100737670(lVar15,param_3 + 1,plVar14);
      if (iVar10 == 0) goto LAB_100733380;
      bVar9 = 0;
      if (((*(int *)(lVar15 + 0x10) != 0) &&
          (iVar10 = FUN_100737900(lVar15,lVar15,plVar3), iVar10 == 0)) ||
         ((iVar10 = (*pcVar5)(param_1,plVar14,plVar13,lVar15), iVar10 == 0 ||
          (iVar10 = FUN_100737790(plVar13,plVar14), iVar10 == 0)))) goto LAB_10073338a;
      if (plVar13 == (long *)0x0) {
LAB_100732de3:
        iVar10 = FUN_100737670(plVar13,plVar13,plVar3);
        if (iVar10 == 0) goto LAB_10073338a;
      }
      else {
        iVar10 = (int)plVar13[2];
        uVar11 = ~-(uint)(iVar10 == 0) | 1;
        uVar12 = uVar11;
        if (iVar10 == (int)param_1[0xf]) {
          iVar4 = (int)plVar13[1];
          lVar20 = (long)iVar4;
          if ((iVar4 <= (int)param_1[0xe]) &&
             (uVar23 = -(uint)(iVar10 == 0) | 1, uVar12 = uVar23, (int)param_1[0xe] <= iVar4)) {
            lVar22 = (long)(iVar4 + -1) << 3;
            do {
              if (lVar20 < 1) goto LAB_100732de3;
              puVar18 = (ulong *)(*plVar13 + lVar22);
              puVar21 = (ulong *)(*plVar3 + lVar22);
              uVar12 = uVar11;
              if (*puVar21 < *puVar18) break;
              lVar20 = lVar20 + -1;
              lVar22 = lVar22 + -8;
              uVar12 = uVar23;
            } while (*puVar21 <= *puVar18);
          }
        }
        if (-1 < (int)uVar12) goto LAB_100732de3;
      }
      iVar10 = FUN_100736d50(plVar14,plVar13,plVar14);
      if (iVar10 == 0) goto LAB_10073338a;
      iVar10 = (int)plVar14[1];
      lVar20 = (long)iVar10;
      if (iVar10 != (int)param_1[0xe]) {
        if ((int)param_1[0xe] <= iVar10) goto LAB_100732fe7;
        goto LAB_100733036;
      }
      lVar22 = (long)(iVar10 + -1) * 8;
      puVar21 = (ulong *)(*plVar3 + lVar22);
      puVar18 = (ulong *)(lVar22 + *plVar14);
      do {
        if (lVar20 < 1) goto LAB_100732fe7;
        uVar7 = *puVar21;
        lVar20 = lVar20 + -1;
        puVar21 = puVar21 + -1;
        uVar8 = *puVar18;
        puVar18 = puVar18 + -1;
      } while (uVar8 == uVar7);
      if (uVar8 <= uVar7) goto LAB_100733036;
LAB_100732fe7:
      iVar10 = FUN_100737410(plVar14,plVar14,plVar3);
      goto joined_r0x000100732ffb;
    }
  }
  else {
    iVar10 = (*pcVar6)(param_1,plVar13,param_3 + 1,param_4);
    if ((iVar10 == 0) || (iVar10 = FUN_100737790(plVar14,plVar13), iVar10 == 0)) goto LAB_10073338a;
    if (plVar14 == (long *)0x0) {
LAB_1007329d5:
      iVar10 = FUN_100737670(plVar14,plVar14,plVar3);
      if (iVar10 == 0) goto LAB_10073338a;
    }
    else {
      iVar10 = (int)plVar14[2];
      uVar11 = ~-(uint)(iVar10 == 0) | 1;
      uVar12 = uVar11;
      if (iVar10 == (int)param_1[0xf]) {
        iVar4 = (int)plVar14[1];
        lVar20 = (long)iVar4;
        if ((iVar4 <= (int)param_1[0xe]) &&
           (uVar23 = -(uint)(iVar10 == 0) | 1, uVar12 = uVar23, (int)param_1[0xe] <= iVar4)) {
          lVar22 = (long)(iVar4 + -1) << 3;
          do {
            if (lVar20 < 1) goto LAB_1007329d5;
            puVar18 = (ulong *)(*plVar14 + lVar22);
            puVar21 = (ulong *)(*plVar3 + lVar22);
            uVar12 = uVar11;
            if (*puVar21 < *puVar18) break;
            lVar20 = lVar20 + -1;
            lVar22 = lVar22 + -8;
            uVar12 = uVar23;
          } while (*puVar21 <= *puVar18);
        }
      }
      if (-1 < (int)uVar12) goto LAB_1007329d5;
    }
    iVar10 = FUN_100736d50(plVar13,plVar13,plVar14);
    if (iVar10 == 0) goto LAB_10073338a;
    iVar10 = (int)plVar13[1];
    lVar20 = (long)iVar10;
    if (iVar10 == (int)param_1[0xe]) {
      lVar22 = (long)(iVar10 + -1) * 8;
      puVar21 = (ulong *)(*plVar3 + lVar22);
      puVar18 = (ulong *)(lVar22 + *plVar13);
      do {
        if (lVar20 < 1) goto LAB_100732c52;
        uVar7 = *puVar21;
        lVar20 = lVar20 + -1;
        puVar21 = puVar21 + -1;
        uVar8 = *puVar18;
        puVar18 = puVar18 + -1;
      } while (uVar8 == uVar7);
      if (uVar7 <= uVar8) {
LAB_100732c52:
        iVar10 = FUN_100737410(plVar13,plVar13,plVar3);
        if (iVar10 == 0) goto LAB_10073338a;
      }
    }
    else if ((int)param_1[0xe] <= iVar10) goto LAB_100732c52;
    iVar10 = FUN_100736d50(plVar14,plVar13,param_1 + 0x13);
    if (iVar10 == 0) goto LAB_10073338a;
    iVar10 = (int)plVar14[1];
    lVar20 = (long)iVar10;
    if (iVar10 == (int)param_1[0xe]) {
      lVar22 = (long)(iVar10 + -1) * 8;
      puVar21 = (ulong *)(*plVar3 + lVar22);
      puVar18 = (ulong *)(lVar22 + *plVar14);
      do {
        if (lVar20 < 1) goto LAB_100732e84;
        uVar7 = *puVar21;
        lVar20 = lVar20 + -1;
        puVar21 = puVar21 + -1;
        uVar8 = *puVar18;
        puVar18 = puVar18 + -1;
      } while (uVar8 == uVar7);
      if (uVar7 <= uVar8) {
LAB_100732e84:
        iVar10 = FUN_100737410(plVar14,plVar14,plVar3);
joined_r0x000100732ffb:
        bVar9 = 0;
        if (iVar10 == 0) goto LAB_10073338a;
      }
    }
    else if ((int)param_1[0xe] <= iVar10) goto LAB_100732e84;
LAB_100733036:
    bVar9 = 0;
    plVar1 = param_3 + 4;
    if ((int)param_3[10] == 0) {
      iVar10 = (*pcVar5)(param_1,plVar13,plVar1,param_3 + 7);
      if (iVar10 == 0) goto LAB_10073338a;
    }
    else {
      lVar20 = FUN_10072d5c0(plVar13,plVar1);
      if (lVar20 == 0) goto LAB_10073338a;
    }
    plVar2 = (long *)(param_2 + 0x38);
    iVar10 = FUN_100737790(plVar2,plVar13);
    if (iVar10 == 0) goto LAB_10073338a;
    iVar10 = *(int *)(param_2 + 0x48);
    uVar11 = ~-(uint)(iVar10 == 0) | 1;
    uVar12 = uVar11;
    if (iVar10 == (int)param_1[0xf]) {
      iVar4 = *(int *)(param_2 + 0x40);
      lVar20 = (long)iVar4;
      if ((iVar4 <= (int)param_1[0xe]) &&
         (uVar23 = -(uint)(iVar10 == 0) | 1, uVar12 = uVar23, (int)param_1[0xe] <= iVar4)) {
        lVar22 = (long)(iVar4 + -1) << 3;
        do {
          if (lVar20 < 1) goto LAB_100733133;
          puVar18 = (ulong *)(*plVar2 + lVar22);
          puVar21 = (ulong *)(*plVar3 + lVar22);
          uVar12 = uVar11;
          if (*puVar21 < *puVar18) break;
          lVar20 = lVar20 + -1;
          lVar22 = lVar22 + -8;
          uVar12 = uVar23;
        } while (*puVar21 <= *puVar18);
      }
    }
    if (-1 < (int)uVar12) {
LAB_100733133:
      iVar10 = FUN_100737670(plVar2,plVar2,plVar3);
      if (iVar10 == 0) goto LAB_10073338a;
    }
    *(undefined4 *)(param_2 + 0x50) = 0;
    iVar10 = (*pcVar6)(param_1,lVar16,plVar1,param_4);
    if ((((iVar10 == 0) || (iVar10 = (*pcVar5)(param_1,lVar15,param_3 + 1,lVar16), iVar10 == 0)) ||
        (iVar10 = FUN_10073e610(lVar15,lVar15,2,plVar3), iVar10 == 0)) ||
       (iVar10 = FUN_100737790(plVar13,lVar15), iVar10 == 0)) goto LAB_10073338a;
    if (plVar13 == (long *)0x0) {
LAB_100733236:
      iVar10 = FUN_100737670(plVar13,plVar13,plVar3);
      if (iVar10 == 0) goto LAB_10073338a;
    }
    else {
      iVar10 = (int)plVar13[2];
      uVar11 = ~-(uint)(iVar10 == 0) | 1;
      uVar12 = uVar11;
      if (iVar10 == (int)param_1[0xf]) {
        iVar4 = (int)plVar13[1];
        lVar20 = (long)iVar4;
        if ((iVar4 <= (int)param_1[0xe]) &&
           (uVar23 = -(uint)(iVar10 == 0) | 1, uVar12 = uVar23, (int)param_1[0xe] <= iVar4)) {
          lVar22 = (long)(iVar4 + -1) << 3;
          do {
            if (lVar20 < 1) goto LAB_100733236;
            puVar18 = (ulong *)(*plVar13 + lVar22);
            puVar21 = (ulong *)(*plVar3 + lVar22);
            uVar12 = uVar11;
            if (*puVar21 < *puVar18) break;
            lVar20 = lVar20 + -1;
            lVar22 = lVar22 + -8;
            uVar12 = uVar23;
          } while (*puVar21 <= *puVar18);
        }
      }
      if (-1 < (int)uVar12) goto LAB_100733236;
    }
    lVar20 = param_2 + 8;
    iVar10 = (*pcVar6)(param_1,lVar20,plVar14,param_4);
    if (((((iVar10 != 0) && (iVar10 = FUN_100737670(lVar20,lVar20,plVar13), iVar10 != 0)) &&
         ((*(int *)(param_2 + 0x18) == 0 ||
          (iVar10 = FUN_100737900(lVar20,lVar20,plVar3), iVar10 != 0)))) &&
        (((iVar10 = (*pcVar6)(param_1,plVar13,lVar16,param_4), iVar10 != 0 &&
          (iVar10 = FUN_10073e610(lVar16,plVar13,3,plVar3), iVar10 != 0)) &&
         (iVar10 = FUN_100737670(plVar13,lVar15,lVar20), iVar10 != 0)))) &&
       (((int)plVar13[2] == 0 || (iVar10 = FUN_100737900(plVar13,plVar13,plVar3), iVar10 != 0)))) {
      iVar10 = (*pcVar5)(param_1,plVar13,plVar14,plVar13,param_4);
      bVar9 = 0;
      if (iVar10 != 0) {
        lVar15 = param_2 + 0x20;
        iVar10 = FUN_100737670(lVar15,plVar13,lVar16);
        bVar24 = true;
        if (iVar10 != 0) {
          if (*(int *)(param_2 + 0x30) == 0) {
            bVar24 = false;
          }
          else {
            iVar10 = FUN_100737900(lVar15,lVar15,plVar3);
            bVar24 = iVar10 == 0;
          }
        }
        bVar9 = bVar24 ^ 1;
      }
      goto LAB_10073338a;
    }
  }
LAB_100733380:
  bVar9 = 0;
LAB_10073338a:
  if (*(int *)((long)param_4 + 0x34) == 0) {
    iVar10 = *(int *)(param_4 + 5);
    *(uint *)(param_4 + 5) = iVar10 - 1U;
    uVar12 = *(uint *)(param_4[4] + (ulong)(iVar10 - 1U) * 4);
    uVar11 = *(uint *)(param_4 + 6);
    if (uVar12 <= uVar11 && uVar11 - uVar12 != 0) {
      iVar10 = *(int *)(param_4 + 3);
      uVar23 = uVar11 - uVar12;
      *(uint *)(param_4 + 3) = iVar10 - (uVar11 - uVar12);
      if (uVar23 != 0) {
        uVar19 = iVar10 + 0xfU & 0xf;
        if ((uVar23 & 1) != 0) {
          if (uVar19 == 0) {
            param_4[1] = *(undefined8 *)(param_4[1] + 0x180);
            uVar19 = 0xf;
          }
          else {
            uVar19 = uVar19 - 1;
          }
          uVar23 = uVar23 - 1;
        }
        if (uVar11 - 1 != uVar12) {
          do {
            if (uVar19 == 0) {
              param_4[1] = *(undefined8 *)(param_4[1] + 0x180);
              iVar10 = 0xf;
            }
            else {
              iVar10 = uVar19 - 1;
            }
            uVar23 = uVar23 - 2;
            if (iVar10 == 0) {
              param_4[1] = *(undefined8 *)(param_4[1] + 0x180);
              uVar19 = 0xf;
            }
            else {
              uVar19 = iVar10 - 1;
            }
          } while (uVar23 != 0);
        }
      }
    }
    *(uint *)(param_4 + 6) = uVar12;
    *(undefined4 *)(param_4 + 7) = 0;
  }
  else {
    *(int *)((long)param_4 + 0x34) = *(int *)((long)param_4 + 0x34) + -1;
  }
  if (puVar17 != (undefined8 *)0x0) {
    FUN_100729fd0();
  }
  return bVar9;
}

