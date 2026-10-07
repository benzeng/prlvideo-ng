
undefined8 FUN_10073a280(long *param_1,long param_2,int *param_3,long param_4)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  ulong *puVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  
  FUN_1007353b0(param_4);
  plVar11 = (long *)FUN_100735470(param_4);
  uVar26 = 0;
  if (plVar11 == (long *)0x0) goto LAB_10073a674;
  lVar12 = FUN_10072d5c0(plVar11,param_2);
  if (lVar12 != 0) {
    iVar30 = *param_3;
    if ((iVar30 + 0x3fU < 0x7f) || (iVar28 = param_3[10], iVar28 == 0)) {
      *(undefined4 *)(plVar11 + 1) = 0;
      return 1;
    }
    iVar15 = (int)(((uint)(iVar30 >> 0x1f) >> 0x1a) + iVar30) >> 6;
    iVar29 = iVar28 + iVar15;
    iVar30 = iVar28 + 1 + iVar15;
    if ((iVar29 < *(int *)((long)plVar11 + 0xc)) ||
       (lVar12 = FUN_10072d730(plVar11,iVar30), lVar12 != 0)) {
      if (*(int *)((long)param_1 + 0xc) <= iVar29) {
        lVar12 = FUN_10072d730(param_1,iVar30);
        uVar26 = 0;
        if (lVar12 == 0) goto LAB_10073a674;
      }
      *(uint *)(plVar11 + 2) = param_3[0xc] ^ *(uint *)(param_2 + 0x10);
      uVar26 = *(undefined8 *)(param_3 + 8);
      plVar17 = (long *)*plVar11;
      iVar4 = (int)plVar11[1];
      if (iVar4 < iVar30) {
        ___bzero(plVar17 + iVar4,(ulong)(uint)(iVar29 - iVar4) * 8 + 8);
      }
      *(int *)(plVar11 + 1) = iVar30;
      if (0 < iVar28) {
        lVar12 = *(long *)(param_3 + 0x14);
        puVar14 = (ulong *)(plVar17 + (long)iVar28 + 3);
        iVar30 = 0;
        puVar18 = (ulong *)(plVar17 + iVar28);
        do {
          uVar13 = FUN_100739c90(plVar17,uVar26,iVar28,*plVar17 * lVar12);
          puVar1 = puVar18 + 1;
          uVar20 = *puVar18;
          *puVar18 = uVar13 + *puVar18;
          if ((CARRY8(uVar13,uVar20)) && (*puVar1 = *puVar1 + 1, *puVar1 == 0)) {
            puVar18 = puVar18 + 2;
            *puVar18 = *puVar18 + 1;
            uVar20 = *puVar18;
            puVar18 = puVar14;
            while (uVar20 == 0) {
              *puVar18 = *puVar18 + 1;
              uVar20 = *puVar18;
              puVar18 = puVar18 + 1;
            }
          }
          plVar17 = plVar17 + 1;
          puVar14 = puVar14 + 1;
          bVar31 = iVar30 != iVar28 + -1;
          iVar30 = iVar30 + 1;
          puVar18 = puVar1;
        } while (bVar31);
        iVar30 = (int)plVar11[1];
      }
      if (0 < iVar30) {
        plVar17 = (long *)((long)(iVar30 + -1) * 8 + *plVar11);
        iVar28 = iVar30;
        do {
          iVar30 = iVar28;
          if (*plVar17 != 0) break;
          plVar17 = plVar17 + -1;
          iVar30 = iVar28 + -1;
          *(int *)(plVar11 + 1) = iVar30;
          bVar31 = 1 < iVar28;
          iVar28 = iVar30;
        } while (bVar31);
      }
      *(int *)(param_1 + 2) = (int)plVar11[2];
      lVar12 = *param_1;
      lVar25 = *plVar11;
      iVar28 = iVar30 - iVar15;
      if (iVar30 < iVar15) {
        iVar28 = 0;
      }
      *(int *)(param_1 + 1) = iVar28;
      uVar10 = 0;
      if (4 < iVar28) {
        iVar29 = iVar15;
        if (iVar15 <= iVar30) {
          iVar29 = iVar30;
        }
        iVar29 = (iVar29 + -4) - iVar15;
        lVar27 = lVar25 + 0x10 + (long)iVar15 * 8;
        lVar23 = 0;
        do {
          puVar3 = (undefined4 *)(lVar27 + -0x10 + lVar23 * 8);
          uVar6 = puVar3[1];
          uVar7 = puVar3[2];
          uVar8 = puVar3[3];
          puVar22 = (undefined8 *)(lVar27 + lVar23 * 8);
          uVar26 = *puVar22;
          uVar9 = puVar22[1];
          puVar2 = (undefined4 *)(lVar12 + lVar23 * 8);
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          puVar22 = (undefined8 *)(lVar12 + 0x10 + lVar23 * 8);
          *puVar22 = uVar26;
          puVar22[1] = uVar9;
          lVar23 = lVar23 + 4;
        } while (lVar23 < iVar28 + -4);
        uVar10 = 4;
        if (4 < iVar29) {
          uVar10 = iVar29 + 3U & 0xfffffffc;
        }
      }
      if ((int)uVar10 < iVar28) {
        lVar27 = (long)(int)uVar10;
        iVar29 = iVar15;
        if (iVar15 <= iVar30) {
          iVar29 = iVar30;
        }
        lVar23 = lVar27;
        if (((long)(iVar29 - iVar15) + -1) - lVar27 != -1) {
          uVar20 = (iVar29 - iVar15) - lVar27;
          iVar29 = iVar15;
          if (iVar15 <= iVar30) {
            iVar29 = iVar30;
          }
          if ((uVar20 & 0xfffffffffffffffc) != 0) {
            lVar21 = iVar15 + lVar27;
            if (((ulong)(lVar25 + -8 + ((long)iVar15 + (long)(iVar29 - iVar15)) * 8) <
                 (ulong)(lVar12 + lVar27 * 8)) ||
               ((ulong)(lVar12 + -8 + (long)(iVar29 - iVar15) * 8) < (ulong)(lVar25 + lVar21 * 8)))
            {
              lVar23 = (uVar20 & 0xfffffffffffffffc) + lVar27;
              puVar22 = (undefined8 *)(lVar25 + 0x10 + lVar21 * 8);
              puVar24 = (undefined8 *)(lVar12 + 0x10 + lVar27 * 8);
              iVar29 = iVar15;
              if (iVar15 <= iVar30) {
                iVar29 = iVar30;
              }
              uVar13 = (iVar29 - iVar15) - lVar27 & 0xfffffffffffffffc;
              do {
                uVar6 = *(undefined4 *)((long)puVar22 + -0xc);
                uVar7 = *(undefined4 *)(puVar22 + -1);
                uVar8 = *(undefined4 *)((long)puVar22 + -4);
                uVar26 = *puVar22;
                uVar9 = puVar22[1];
                *(undefined4 *)(puVar24 + -2) = *(undefined4 *)(puVar22 + -2);
                *(undefined4 *)((long)puVar24 + -0xc) = uVar6;
                *(undefined4 *)(puVar24 + -1) = uVar7;
                *(undefined4 *)((long)puVar24 + -4) = uVar8;
                *puVar24 = uVar26;
                puVar24[1] = uVar9;
                puVar22 = puVar22 + 4;
                puVar24 = puVar24 + 4;
                uVar13 = uVar13 - 4;
              } while (uVar13 != 0);
            }
          }
          if (uVar20 + lVar27 == lVar23) goto LAB_10073a610;
        }
        do {
          *(undefined8 *)(lVar12 + lVar23 * 8) =
               *(undefined8 *)(lVar25 + (long)iVar15 * 8 + lVar23 * 8);
          lVar23 = lVar23 + 1;
        } while (lVar23 < iVar28);
      }
LAB_10073a610:
      if (iVar28 == param_3[10]) {
        lVar25 = (long)iVar28;
        if (iVar30 < iVar15) {
          iVar30 = iVar15;
        }
        lVar27 = (long)((iVar30 + -1) - iVar15);
        puVar14 = (ulong *)(lVar27 * 8 + *(long *)(param_3 + 8));
        puVar18 = (ulong *)(lVar12 + lVar27 * 8);
        do {
          if (lVar25 < 1) goto LAB_10073a65e;
          uVar20 = *puVar14;
          lVar25 = lVar25 + -1;
          puVar14 = puVar14 + -1;
          uVar13 = *puVar18;
          puVar18 = puVar18 + -1;
        } while (uVar13 == uVar20);
        if (uVar20 <= uVar13) {
LAB_10073a65e:
          iVar30 = FUN_100737410(param_1,param_1);
          uVar26 = 0;
          if (iVar30 == 0) goto LAB_10073a674;
        }
      }
      else if (param_3[10] <= iVar28) goto LAB_10073a65e;
      uVar26 = 1;
      goto LAB_10073a674;
    }
  }
  uVar26 = 0;
LAB_10073a674:
  if (*(int *)(param_4 + 0x34) == 0) {
    uVar10 = *(int *)(param_4 + 0x28) - 1;
    *(uint *)(param_4 + 0x28) = uVar10;
    uVar10 = *(uint *)(*(long *)(param_4 + 0x20) + (ulong)uVar10 * 4);
    uVar5 = *(uint *)(param_4 + 0x30);
    if (uVar10 <= uVar5 && uVar5 - uVar10 != 0) {
      iVar30 = *(int *)(param_4 + 0x18);
      uVar16 = uVar5 - uVar10;
      *(uint *)(param_4 + 0x18) = iVar30 - (uVar5 - uVar10);
      if (uVar16 != 0) {
        uVar19 = iVar30 + 0xfU & 0xf;
        if ((uVar16 & 1) != 0) {
          if (uVar19 == 0) {
            *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x180);
            uVar19 = 0xf;
          }
          else {
            uVar19 = uVar19 - 1;
          }
          uVar16 = uVar16 - 1;
        }
        if (uVar5 - 1 != uVar10) {
          do {
            if (uVar19 == 0) {
              *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x180);
              iVar30 = 0xf;
            }
            else {
              iVar30 = uVar19 - 1;
            }
            uVar16 = uVar16 - 2;
            if (iVar30 == 0) {
              *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x180);
              uVar19 = 0xf;
            }
            else {
              uVar19 = iVar30 - 1;
            }
          } while (uVar16 != 0);
        }
      }
    }
    *(uint *)(param_4 + 0x30) = uVar10;
    *(undefined4 *)(param_4 + 0x38) = 0;
  }
  else {
    *(int *)(param_4 + 0x34) = *(int *)(param_4 + 0x34) + -1;
  }
  return uVar26;
}

