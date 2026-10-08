
uint FUN_100bb2b10(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  uint uVar20;
  bool bVar21;
  
  pcVar4 = *(code **)(*param_1 + 0xc0);
  if (((pcVar4 != (code *)0x0) && (*param_1 == *param_2)) &&
     (iVar6 = (*pcVar4)(param_1,param_2), iVar6 != 0)) {
    pcVar4 = *(code **)(*param_1 + 0xc0);
    bVar21 = true;
    if ((pcVar4 != (code *)0x0) && (*param_1 == *param_3)) {
      iVar6 = (*pcVar4)(param_1,param_3);
      bVar21 = iVar6 == 0;
    }
    return (uint)bVar21;
  }
  if (((int)param_2[10] != 0) && ((int)param_3[10] != 0)) {
    if ((int)param_2[3] == (int)param_3[3]) {
      iVar6 = (int)param_2[2];
      lVar8 = (long)iVar6;
      if (iVar6 == (int)param_3[2]) {
        lVar16 = (long)(iVar6 + -1) << 3;
        do {
          if (lVar8 < 1) {
            iVar6 = (int)param_2[6];
            uVar7 = ~-(uint)(iVar6 == 0) | 1;
            uVar20 = uVar7;
            if (iVar6 != (int)param_3[6]) goto LAB_100bb3030;
            iVar3 = (int)param_2[5];
            lVar8 = (long)iVar3;
            if (((int)param_3[5] < iVar3) ||
               (uVar14 = -(uint)(iVar6 == 0) | 1, uVar20 = uVar14, iVar3 < (int)param_3[5]))
            goto LAB_100bb3030;
            lVar16 = (long)(iVar3 + -1) << 3;
            goto LAB_100bb2fac;
          }
          puVar1 = (ulong *)(param_2[1] + lVar16);
          puVar2 = (ulong *)(param_3[1] + lVar16);
          if (*puVar2 < *puVar1) {
            bVar21 = false;
            goto LAB_100bb3035;
          }
          lVar8 = lVar8 + -1;
          lVar16 = lVar16 + -8;
        } while (*puVar2 <= *puVar1);
        bVar21 = false;
      }
      else {
        bVar21 = false;
      }
    }
    else {
      bVar21 = false;
    }
    goto LAB_100bb3035;
  }
  pcVar4 = *(code **)(*param_1 + 0x100);
  pcVar5 = *(code **)(*param_1 + 0x108);
  puVar9 = (undefined8 *)0x0;
  if (param_4 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)FUN_100bf3540(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar9 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    *(undefined4 *)(puVar9 + 7) = 0;
    puVar9[6] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    param_4 = puVar9;
  }
  FUN_100bb4190(param_4);
  plVar10 = (long *)FUN_100bb4250(param_4);
  plVar11 = (long *)FUN_100bb4250(param_4);
  uVar12 = FUN_100bb4250(param_4);
  lVar8 = FUN_100bb4250(param_4);
  if (lVar8 == 0) {
    uVar20 = 0xffffffff;
    goto LAB_100bb304e;
  }
  if ((int)param_3[10] == 0) {
    iVar6 = (*pcVar5)(param_1,lVar8,param_3 + 7,param_4);
    if (iVar6 == 0) {
      uVar20 = 0xffffffff;
      goto LAB_100bb304e;
    }
    iVar6 = (*pcVar4)(param_1,plVar10,param_2 + 1,lVar8,param_4);
    plVar13 = plVar10;
    if (iVar6 == 0) {
      uVar20 = 0xffffffff;
      goto LAB_100bb304e;
    }
  }
  else {
    plVar13 = param_2 + 1;
  }
  if ((int)param_2[10] == 0) {
    iVar6 = (*pcVar5)(param_1,uVar12,param_2 + 7,param_4);
    if (iVar6 == 0) {
      uVar20 = 0xffffffff;
      goto LAB_100bb304e;
    }
    iVar6 = (*pcVar4)(param_1,plVar11,param_3 + 1,uVar12,param_4);
    plVar19 = plVar11;
    if (iVar6 == 0) {
      uVar20 = 0xffffffff;
      goto LAB_100bb304e;
    }
  }
  else {
    plVar19 = param_3 + 1;
  }
  if ((plVar13 == (long *)0x0) || (plVar19 == (long *)0x0)) {
    uVar20 = 1;
    if (plVar13 == (long *)0x0 && plVar19 == (long *)0x0) {
LAB_100bb2e03:
      if ((int)param_3[10] == 0) {
        iVar6 = (*pcVar4)(param_1,lVar8,lVar8,param_3 + 7,param_4);
        if (iVar6 == 0) {
          uVar20 = 0xffffffff;
          goto LAB_100bb304e;
        }
        iVar6 = (*pcVar4)(param_1,plVar10,param_2 + 4,lVar8,param_4);
        if (iVar6 == 0) {
          uVar20 = 0xffffffff;
          goto LAB_100bb304e;
        }
      }
      else {
        plVar13 = param_2 + 4;
      }
      if ((int)param_2[10] == 0) {
        iVar6 = (*pcVar4)(param_1,uVar12,uVar12,param_2 + 7,param_4);
        if (iVar6 == 0) {
          uVar20 = 0xffffffff;
          goto LAB_100bb304e;
        }
        iVar6 = (*pcVar4)(param_1,plVar11,param_3 + 4,uVar12,param_4);
        uVar20 = 0xffffffff;
        if (iVar6 == 0) goto LAB_100bb304e;
      }
      else {
        plVar19 = param_3 + 4;
      }
      if ((plVar13 == (long *)0x0) || (plVar19 == (long *)0x0)) {
        uVar20 = 0xffffffff;
        if (plVar13 == (long *)0x0) {
          uVar20 = (uint)(plVar19 != (long *)0x0);
        }
      }
      else {
        iVar6 = (int)plVar13[2];
        uVar7 = ~-(uint)(iVar6 == 0) | 1;
        uVar20 = uVar7;
        if (iVar6 == (int)plVar19[2]) {
          iVar3 = (int)plVar13[1];
          lVar8 = (long)iVar3;
          if ((iVar3 <= (int)plVar19[1]) &&
             (uVar14 = -(uint)(iVar6 == 0) | 1, uVar20 = uVar14, (int)plVar19[1] <= iVar3)) {
            lVar16 = (long)(iVar3 + -1) << 3;
            do {
              uVar20 = 0;
              if (lVar8 < 1) break;
              puVar1 = (ulong *)(*plVar13 + lVar16);
              puVar2 = (ulong *)(*plVar19 + lVar16);
              uVar20 = uVar7;
              if (*puVar2 < *puVar1) break;
              lVar8 = lVar8 + -1;
              lVar16 = lVar16 + -8;
              uVar20 = uVar14;
            } while (*puVar2 <= *puVar1);
          }
        }
      }
      uVar20 = (uint)(uVar20 != 0);
    }
  }
  else {
    uVar20 = 1;
    if ((int)plVar13[2] == (int)plVar19[2]) {
      iVar6 = (int)plVar13[1];
      lVar16 = (long)iVar6;
      if (iVar6 == (int)plVar19[1]) {
        lVar17 = (long)(iVar6 + -1) << 3;
        do {
          if (lVar16 < 1) goto LAB_100bb2e03;
          puVar1 = (ulong *)(*plVar13 + lVar17);
          puVar2 = (ulong *)(*plVar19 + lVar17);
          if (*puVar2 < *puVar1) break;
          lVar16 = lVar16 + -1;
          lVar17 = lVar17 + -8;
        } while (*puVar2 <= *puVar1);
      }
    }
  }
LAB_100bb304e:
  if (*(int *)((long)param_4 + 0x34) == 0) {
    iVar6 = *(int *)(param_4 + 5);
    *(uint *)(param_4 + 5) = iVar6 - 1U;
    uVar7 = *(uint *)(param_4[4] + (ulong)(iVar6 - 1U) * 4);
    uVar14 = *(uint *)(param_4 + 6);
    if (uVar7 <= uVar14 && uVar14 - uVar7 != 0) {
      iVar6 = *(int *)(param_4 + 3);
      uVar15 = uVar14 - uVar7;
      *(uint *)(param_4 + 3) = iVar6 - (uVar14 - uVar7);
      if (uVar15 != 0) {
        uVar18 = iVar6 + 0xfU & 0xf;
        if ((uVar15 & 1) != 0) {
          if (uVar18 == 0) {
            param_4[1] = *(undefined8 *)(param_4[1] + 0x180);
            uVar18 = 0xf;
          }
          else {
            uVar18 = uVar18 - 1;
          }
          uVar15 = uVar15 - 1;
        }
        if (uVar14 - 1 != uVar7) {
          do {
            if (uVar18 == 0) {
              param_4[1] = *(undefined8 *)(param_4[1] + 0x180);
              iVar6 = 0xf;
            }
            else {
              iVar6 = uVar18 - 1;
            }
            uVar15 = uVar15 - 2;
            if (iVar6 == 0) {
              param_4[1] = *(undefined8 *)(param_4[1] + 0x180);
              uVar18 = 0xf;
            }
            else {
              uVar18 = iVar6 - 1;
            }
          } while (uVar15 != 0);
        }
      }
    }
    *(uint *)(param_4 + 6) = uVar7;
    *(undefined4 *)(param_4 + 7) = 0;
  }
  else {
    *(int *)((long)param_4 + 0x34) = *(int *)((long)param_4 + 0x34) + -1;
  }
  if (puVar9 == (undefined8 *)0x0) {
    return uVar20;
  }
  FUN_100ba8db0();
  return uVar20;
  while( true ) {
    puVar1 = (ulong *)(param_2[4] + lVar16);
    puVar2 = (ulong *)(param_3[4] + lVar16);
    uVar20 = uVar7;
    if (*puVar2 < *puVar1) break;
    lVar8 = lVar8 + -1;
    lVar16 = lVar16 + -8;
    uVar20 = uVar14;
    if (*puVar1 < *puVar2) break;
LAB_100bb2fac:
    uVar20 = 0;
    if (lVar8 < 1) break;
  }
LAB_100bb3030:
  bVar21 = uVar20 == 0;
LAB_100bb3035:
  return bVar21 ^ 1;
}

