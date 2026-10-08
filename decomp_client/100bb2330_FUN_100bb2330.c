
uint FUN_100bb2330(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong *puVar18;
  uint uVar19;
  ulong *puVar20;
  long lVar21;
  uint local_34;
  
  lVar15 = *param_1;
  if ((*(code **)(lVar15 + 0xc0) != (code *)0x0) && (lVar15 == *param_2)) {
    iVar8 = (**(code **)(lVar15 + 0xc0))(param_1,param_2);
    if (iVar8 != 0) {
      return 1;
    }
    lVar15 = *param_1;
  }
  pcVar4 = *(code **)(lVar15 + 0x100);
  pcVar5 = *(code **)(lVar15 + 0x108);
  puVar11 = (undefined8 *)0x0;
  if (param_3 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)FUN_100bf3540(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar11 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    *(undefined4 *)(puVar11 + 7) = 0;
    puVar11[6] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
    param_3 = puVar11;
  }
  FUN_100bb4190(param_3);
  plVar12 = (long *)FUN_100bb4250(param_3);
  plVar13 = (long *)FUN_100bb4250(param_3);
  uVar14 = FUN_100bb4250(param_3);
  lVar15 = FUN_100bb4250(param_3);
  local_34 = 0xffffffff;
  if (lVar15 == 0) goto LAB_100bb2a01;
  plVar1 = param_2 + 1;
  iVar8 = (*pcVar5)(param_1,plVar12,plVar1,param_3);
  if (iVar8 == 0) goto LAB_100bb2a01;
  plVar2 = param_1 + 0xd;
  if ((int)param_2[10] == 0) {
    iVar8 = (*pcVar5)(param_1,plVar13,param_2 + 7,param_3);
    if (((iVar8 == 0) || (iVar8 = (*pcVar5)(param_1,uVar14,plVar13,param_3), iVar8 == 0)) ||
       (iVar8 = (*pcVar4)(param_1,lVar15,uVar14,plVar13), iVar8 == 0)) goto LAB_100bb2a01;
    if ((int)param_1[0x19] == 0) {
      iVar8 = (*pcVar4)(param_1,plVar13,uVar14,param_1 + 0x13,param_3);
      if ((iVar8 == 0) || (iVar8 = FUN_100bb5b30(plVar12,plVar12,plVar13), iVar8 == 0))
      goto LAB_100bb2a01;
      iVar8 = (int)plVar12[1];
      lVar17 = (long)iVar8;
      if (iVar8 == (int)param_1[0xe]) {
        lVar21 = (long)(iVar8 + -1) * 8;
        puVar20 = (ulong *)(*plVar2 + lVar21);
        puVar18 = (ulong *)(lVar21 + *plVar12);
        do {
          if (lVar17 < 1) goto LAB_100bb289a;
          uVar6 = *puVar20;
          lVar17 = lVar17 + -1;
          puVar20 = puVar20 + -1;
          uVar7 = *puVar18;
          puVar18 = puVar18 + -1;
        } while (uVar7 == uVar6);
        if (uVar6 <= uVar7) {
LAB_100bb289a:
          iVar8 = FUN_100bb61f0(plVar12,plVar12,plVar2);
          if (iVar8 == 0) goto LAB_100bb2a01;
        }
      }
      else if ((int)param_1[0xe] <= iVar8) goto LAB_100bb289a;
      iVar8 = (*pcVar4)(param_1,plVar12,plVar12,plVar1,param_3);
    }
    else {
      iVar8 = FUN_100bb6570(plVar13,uVar14);
      if (iVar8 == 0) goto LAB_100bb2a01;
      if (plVar13 == (long *)0x0) {
LAB_100bb25fd:
        iVar8 = FUN_100bb6450(plVar13,plVar13,plVar2);
        if (iVar8 == 0) goto LAB_100bb2a01;
      }
      else {
        iVar8 = (int)plVar13[2];
        uVar9 = ~-(uint)(iVar8 == 0) | 1;
        uVar10 = uVar9;
        if (iVar8 == (int)param_1[0xf]) {
          iVar3 = (int)plVar13[1];
          lVar17 = (long)iVar3;
          if ((iVar3 <= (int)param_1[0xe]) &&
             (uVar16 = -(uint)(iVar8 == 0) | 1, uVar10 = uVar16, (int)param_1[0xe] <= iVar3)) {
            lVar21 = (long)(iVar3 + -1) << 3;
            do {
              if (lVar17 < 1) goto LAB_100bb25fd;
              puVar18 = (ulong *)(*plVar13 + lVar21);
              puVar20 = (ulong *)(*plVar2 + lVar21);
              uVar10 = uVar9;
              if (*puVar20 < *puVar18) break;
              lVar17 = lVar17 + -1;
              lVar21 = lVar21 + -8;
              uVar10 = uVar16;
            } while (*puVar20 <= *puVar18);
          }
        }
        if (-1 < (int)uVar10) goto LAB_100bb25fd;
      }
      iVar8 = FUN_100bb5b30(plVar13,plVar13,uVar14);
      if (iVar8 == 0) goto LAB_100bb2a01;
      iVar8 = (int)plVar13[1];
      lVar17 = (long)iVar8;
      if (iVar8 == (int)param_1[0xe]) {
        lVar21 = (long)(iVar8 + -1) * 8;
        puVar20 = (ulong *)(*plVar2 + lVar21);
        puVar18 = (ulong *)(lVar21 + *plVar13);
        do {
          if (lVar17 < 1) goto LAB_100bb2822;
          uVar6 = *puVar20;
          lVar17 = lVar17 + -1;
          puVar20 = puVar20 + -1;
          uVar7 = *puVar18;
          puVar18 = puVar18 + -1;
        } while (uVar7 == uVar6);
        if (uVar6 <= uVar7) {
LAB_100bb2822:
          iVar8 = FUN_100bb61f0(plVar13,plVar13,plVar2);
          if (iVar8 == 0) goto LAB_100bb2a01;
        }
      }
      else if ((int)param_1[0xe] <= iVar8) goto LAB_100bb2822;
      iVar8 = FUN_100bb6450(plVar12,plVar12,plVar13);
      if ((iVar8 == 0) ||
         (((int)plVar12[2] != 0 && (iVar8 = FUN_100bb66e0(plVar12,plVar12,plVar2), iVar8 == 0))))
      goto LAB_100bb2a01;
      iVar8 = (*pcVar4)(param_1,plVar12,plVar12,plVar1,param_3);
    }
    if (((iVar8 == 0) ||
        (iVar8 = (*pcVar4)(param_1,plVar13,param_1 + 0x16,lVar15,param_3), iVar8 == 0)) ||
       (iVar8 = FUN_100bb5b30(plVar12,plVar12,plVar13), iVar8 == 0)) goto LAB_100bb2a01;
    iVar8 = (int)plVar12[1];
    lVar15 = (long)iVar8;
    if (iVar8 == (int)param_1[0xe]) {
      lVar17 = (long)(iVar8 + -1) * 8;
      puVar20 = (ulong *)(*plVar2 + lVar17);
      puVar18 = (ulong *)(lVar17 + *plVar12);
      do {
        if (lVar15 < 1) goto LAB_100bb2978;
        uVar6 = *puVar20;
        lVar15 = lVar15 + -1;
        puVar20 = puVar20 + -1;
        uVar7 = *puVar18;
        puVar18 = puVar18 + -1;
      } while (uVar7 == uVar6);
      if (uVar6 <= uVar7) {
LAB_100bb2978:
        iVar8 = FUN_100bb61f0(plVar12,plVar12,plVar2);
        goto joined_r0x000100bb2985;
      }
    }
    else if ((int)param_1[0xe] <= iVar8) goto LAB_100bb2978;
  }
  else {
    iVar8 = FUN_100bb5b30(plVar12,plVar12,param_1 + 0x13);
    if (iVar8 == 0) goto LAB_100bb2a01;
    iVar8 = (int)plVar12[1];
    lVar15 = (long)iVar8;
    if (iVar8 == (int)param_1[0xe]) {
      lVar17 = (long)(iVar8 + -1) * 8;
      puVar20 = (ulong *)(*plVar2 + lVar17);
      puVar18 = (ulong *)(lVar17 + *plVar12);
      do {
        if (lVar15 < 1) goto LAB_100bb268b;
        uVar6 = *puVar20;
        lVar15 = lVar15 + -1;
        puVar20 = puVar20 + -1;
        uVar7 = *puVar18;
        puVar18 = puVar18 + -1;
      } while (uVar7 == uVar6);
      if (uVar6 <= uVar7) {
LAB_100bb268b:
        iVar8 = FUN_100bb61f0(plVar12,plVar12,plVar2);
        if (iVar8 == 0) goto LAB_100bb2a01;
      }
    }
    else if ((int)param_1[0xe] <= iVar8) goto LAB_100bb268b;
    iVar8 = (*pcVar4)(param_1,plVar12,plVar12,plVar1,param_3);
    if ((iVar8 == 0) || (iVar8 = FUN_100bb5b30(plVar12,plVar12,param_1 + 0x16), iVar8 == 0))
    goto LAB_100bb2a01;
    iVar8 = (int)plVar12[1];
    lVar15 = (long)iVar8;
    if (iVar8 == (int)param_1[0xe]) {
      lVar17 = (long)(iVar8 + -1) * 8;
      puVar20 = (ulong *)(*plVar2 + lVar17);
      puVar18 = (ulong *)(lVar17 + *plVar12);
      do {
        if (lVar15 < 1) goto LAB_100bb2744;
        uVar6 = *puVar20;
        lVar15 = lVar15 + -1;
        puVar20 = puVar20 + -1;
        uVar7 = *puVar18;
        puVar18 = puVar18 + -1;
      } while (uVar7 == uVar6);
      if (uVar6 <= uVar7) {
LAB_100bb2744:
        iVar8 = FUN_100bb61f0(plVar12,plVar12,plVar2);
joined_r0x000100bb2985:
        if (iVar8 == 0) goto LAB_100bb2a01;
      }
    }
    else if ((int)param_1[0xe] <= iVar8) goto LAB_100bb2744;
  }
  iVar8 = (*pcVar5)(param_1,plVar13,param_2 + 4,param_3);
  if (iVar8 != 0) {
    iVar8 = (int)plVar13[1];
    lVar15 = (long)iVar8;
    if (iVar8 == (int)plVar12[1]) {
      lVar17 = (long)(iVar8 + -1) * 8;
      puVar20 = (ulong *)(*plVar12 + lVar17);
      puVar18 = (ulong *)(lVar17 + *plVar13);
      do {
        iVar8 = 0;
        if (lVar15 < 1) goto LAB_100bb29f6;
        uVar6 = *puVar20;
        lVar15 = lVar15 + -1;
        puVar20 = puVar20 + -1;
        uVar7 = *puVar18;
        puVar18 = puVar18 + -1;
      } while (uVar7 == uVar6);
      iVar8 = -1;
      if (uVar6 < uVar7) {
        iVar8 = 1;
      }
    }
    else {
      iVar8 = iVar8 - (int)plVar12[1];
    }
LAB_100bb29f6:
    local_34 = (uint)(iVar8 == 0);
  }
LAB_100bb2a01:
  if (*(int *)((long)param_3 + 0x34) == 0) {
    iVar8 = *(int *)(param_3 + 5);
    *(uint *)(param_3 + 5) = iVar8 - 1U;
    uVar10 = *(uint *)(param_3[4] + (ulong)(iVar8 - 1U) * 4);
    uVar9 = *(uint *)(param_3 + 6);
    if (uVar10 <= uVar9 && uVar9 - uVar10 != 0) {
      iVar8 = *(int *)(param_3 + 3);
      uVar16 = uVar9 - uVar10;
      *(uint *)(param_3 + 3) = iVar8 - (uVar9 - uVar10);
      if (uVar16 != 0) {
        uVar19 = iVar8 + 0xfU & 0xf;
        if ((uVar16 & 1) != 0) {
          if (uVar19 == 0) {
            param_3[1] = *(undefined8 *)(param_3[1] + 0x180);
            uVar19 = 0xf;
          }
          else {
            uVar19 = uVar19 - 1;
          }
          uVar16 = uVar16 - 1;
        }
        if (uVar9 - 1 != uVar10) {
          do {
            if (uVar19 == 0) {
              param_3[1] = *(undefined8 *)(param_3[1] + 0x180);
              iVar8 = 0xf;
            }
            else {
              iVar8 = uVar19 - 1;
            }
            uVar16 = uVar16 - 2;
            if (iVar8 == 0) {
              param_3[1] = *(undefined8 *)(param_3[1] + 0x180);
              uVar19 = 0xf;
            }
            else {
              uVar19 = iVar8 - 1;
            }
          } while (uVar16 != 0);
        }
      }
    }
    *(uint *)(param_3 + 6) = uVar10;
    *(undefined4 *)(param_3 + 7) = 0;
  }
  else {
    *(int *)((long)param_3 + 0x34) = *(int *)((long)param_3 + 0x34) + -1;
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_100ba8db0();
  }
  return local_34;
}

