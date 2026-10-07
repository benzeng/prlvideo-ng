
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10043df60(int *param_1,uint param_2,int param_3,int param_4,long *param_5,int param_6)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  int iVar24;
  ulong uVar25;
  int *piVar26;
  bool bVar27;
  
  uVar12 = *(uint *)((long)param_5 + 0xc);
  if (*(uint *)(param_5 + 2) < uVar12 + 4) {
    uVar25 = (ulong)((double)(uVar12 + 4) * _DAT_100b42cf8);
    pvVar5 = operator_new__(uVar25 & 0xffffffff);
    pvVar1 = (void *)*param_5;
    _memcpy(pvVar5,pvVar1,(ulong)*(uint *)(param_5 + 1));
    if ((pvVar1 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
      operator_delete__(pvVar1);
      uVar12 = *(uint *)((long)param_5 + 0xc);
    }
    *param_5 = (long)pvVar5;
    *(int *)(param_5 + 2) = (int)uVar25;
    *(undefined1 *)((long)param_5 + 0x14) = 1;
  }
  if (*(uint *)(param_5 + 1) < uVar12 + 4) {
    *(uint *)(param_5 + 1) = uVar12 + 4;
    uVar12 = *(uint *)((long)param_5 + 0xc);
  }
  *(int *)(*param_5 + (ulong)uVar12) = param_6;
  uVar12 = *(int *)((long)param_5 + 0xc) + 4;
  *(uint *)((long)param_5 + 0xc) = uVar12;
  iVar20 = 0;
  if (0 < param_4) {
    uVar25 = (ulong)param_2;
    iVar4 = 0;
    iVar20 = 0;
    do {
      if (0 < param_3) {
        iVar21 = param_4 - iVar4;
        iVar2 = 0;
        piVar23 = param_1;
        do {
          while (iVar24 = *piVar23, iVar24 == param_6) {
            piVar23 = piVar23 + 1;
            iVar2 = iVar2 + 1;
            if (param_3 <= iVar2) goto LAB_10043e810;
          }
          lVar9 = (long)param_3 - (long)iVar2;
          piVar15 = piVar23 + 1;
          piVar6 = piVar15;
          if (1 < lVar9) {
            piVar18 = piVar23;
            do {
              piVar26 = piVar6;
              piVar6 = piVar26;
              if (*piVar26 != iVar24) break;
              piVar6 = piVar18 + 2;
              piVar18 = piVar26;
            } while (piVar6 < piVar23 + lVar9);
          }
          iVar16 = 1;
          iVar13 = (int)((ulong)((long)piVar6 - (long)piVar23) >> 2);
          if (1 < iVar21) {
            piVar6 = (int *)((long)piVar23 + uVar25);
            iVar16 = 1;
            do {
              piVar18 = piVar6 + iVar13;
              while (piVar6 < piVar18) {
                iVar8 = *piVar6;
                piVar6 = piVar6 + 1;
                if (iVar8 != iVar24) goto LAB_10043e195;
              }
              piVar6 = (int *)((long)piVar6 + (long)iVar13 * -4 + uVar25);
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar21);
          }
LAB_10043e195:
          if (iVar16 < iVar21) {
            uVar17 = param_2 * iVar16;
            iVar8 = iVar16;
            do {
              if (*(int *)((long)piVar23 + (ulong)uVar17) != iVar24) break;
              iVar8 = iVar8 + 1;
              uVar17 = uVar17 + param_2;
            } while (iVar8 < iVar21);
            if (iVar8 != iVar16) {
              iVar19 = 1;
              if (1 < iVar13) {
                iVar19 = 1;
                piVar6 = piVar23;
                do {
                  if (0 < iVar8) {
                    iVar3 = 0;
                    uVar17 = 0;
                    do {
                      if (*(int *)((long)piVar15 + (ulong)uVar17) != iVar24) goto LAB_10043e22c;
                      uVar17 = uVar17 + param_2;
                      iVar3 = iVar3 + 1;
                    } while (iVar3 < iVar8);
                  }
                  piVar18 = piVar6 + 2;
                  iVar19 = iVar19 + 1;
                  piVar6 = piVar15;
                  piVar15 = piVar18;
                } while (iVar19 < iVar13);
              }
LAB_10043e22c:
              if (iVar16 * iVar13 < iVar19 * iVar8) {
                iVar16 = iVar8;
                iVar13 = iVar19;
              }
            }
          }
          if (param_3 < iVar16 * param_3) {
            piVar15 = piVar23 + param_3;
            do {
              if (0 < iVar13) {
                piVar18 = piVar15 + iVar13;
                piVar6 = piVar15 + 1;
                piVar26 = piVar6;
                if (piVar6 < piVar18) {
                  piVar26 = piVar18;
                }
                if (piVar6 < piVar18) {
                  piVar6 = piVar18;
                }
                uVar10 = ((long)piVar6 + ~(ulong)piVar15 >> 2) + 1;
                uVar22 = uVar10 & 0x7ffffffffffffff8;
                piVar6 = piVar15;
                uVar7 = 0;
                if (uVar22 != 0) {
                  piVar6 = piVar15 + uVar22;
                  piVar14 = piVar15 + 4;
                  uVar11 = uVar10 & 0xfffffffffffffff8;
                  do {
                    piVar14[-4] = param_6;
                    piVar14[-3] = param_6;
                    piVar14[-2] = param_6;
                    piVar14[-1] = param_6;
                    *piVar14 = param_6;
                    piVar14[1] = param_6;
                    piVar14[2] = param_6;
                    piVar14[3] = param_6;
                    piVar14 = piVar14 + 8;
                    uVar11 = uVar11 - 8;
                    uVar7 = uVar22;
                  } while (uVar11 != 0);
                }
                if (uVar10 != uVar7) {
                  do {
                    *piVar6 = param_6;
                    piVar6 = piVar6 + 1;
                  } while (piVar6 < piVar18);
                }
                piVar15 = (int *)((long)piVar15 +
                                 ((long)piVar26 + ~(ulong)piVar15 & 0xfffffffffffffffc) + 4);
              }
              piVar15 = piVar15 + (param_3 - iVar13);
            } while (piVar15 < piVar23 + iVar16 * param_3);
            iVar24 = *piVar23;
            uVar12 = *(uint *)((long)param_5 + 0xc);
          }
          if (*(uint *)(param_5 + 2) < uVar12 + 4) {
            uVar7 = (ulong)((double)(uVar12 + 4) * _DAT_100b42cf8);
            pvVar5 = operator_new__(uVar7 & 0xffffffff);
            pvVar1 = (void *)*param_5;
            _memcpy(pvVar5,pvVar1,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar1 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar1);
              uVar12 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar5;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar12 + 4) {
            *(uint *)(param_5 + 1) = uVar12 + 4;
          }
          *(int *)(*param_5 + (ulong)uVar12) = iVar24;
          iVar24 = *(int *)((long)param_5 + 0xc);
          uVar12 = iVar24 + 4;
          *(uint *)((long)param_5 + 0xc) = uVar12;
          uVar17 = iVar24 + 6;
          if (*(uint *)(param_5 + 2) < uVar17) {
            uVar7 = (ulong)((double)uVar17 * _DAT_100b42cf8);
            pvVar5 = operator_new__(uVar7 & 0xffffffff);
            pvVar1 = (void *)*param_5;
            _memcpy(pvVar5,pvVar1,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar1 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar1);
              uVar12 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar5;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar12 + 2) {
            *(uint *)(param_5 + 1) = uVar12 + 2;
          }
          *(char *)(*param_5 + (ulong)uVar12) = (char)((uint)iVar2 >> 8);
          *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar2;
          iVar24 = *(int *)((long)param_5 + 0xc);
          uVar12 = iVar24 + 2;
          *(uint *)((long)param_5 + 0xc) = uVar12;
          uVar17 = iVar24 + 4;
          if (*(uint *)(param_5 + 2) < uVar17) {
            uVar7 = (ulong)((double)uVar17 * _DAT_100b42cf8);
            pvVar5 = operator_new__(uVar7 & 0xffffffff);
            pvVar1 = (void *)*param_5;
            _memcpy(pvVar5,pvVar1,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar1 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar1);
              uVar12 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar5;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar12 + 2) {
            *(uint *)(param_5 + 1) = uVar12 + 2;
          }
          *(char *)(*param_5 + (ulong)uVar12) = (char)((uint)iVar4 >> 8);
          *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar4;
          iVar24 = *(int *)((long)param_5 + 0xc);
          uVar12 = iVar24 + 2;
          *(uint *)((long)param_5 + 0xc) = uVar12;
          uVar17 = iVar24 + 4;
          if (*(uint *)(param_5 + 2) < uVar17) {
            uVar7 = (ulong)((double)uVar17 * _DAT_100b42cf8);
            pvVar5 = operator_new__(uVar7 & 0xffffffff);
            pvVar1 = (void *)*param_5;
            _memcpy(pvVar5,pvVar1,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar1 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar1);
              uVar12 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar5;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar12 + 2) {
            *(uint *)(param_5 + 1) = uVar12 + 2;
          }
          *(char *)(*param_5 + (ulong)uVar12) = (char)((uint)iVar13 >> 8);
          *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar13;
          iVar24 = *(int *)((long)param_5 + 0xc);
          uVar12 = iVar24 + 2;
          *(uint *)((long)param_5 + 0xc) = uVar12;
          uVar17 = iVar24 + 4;
          if (*(uint *)(param_5 + 2) < uVar17) {
            uVar7 = (ulong)((double)uVar17 * _DAT_100b42cf8);
            pvVar5 = operator_new__(uVar7 & 0xffffffff);
            pvVar1 = (void *)*param_5;
            _memcpy(pvVar5,pvVar1,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar1 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar1);
              uVar12 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar5;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar12 + 2) {
            *(uint *)(param_5 + 1) = uVar12 + 2;
          }
          *(char *)(*param_5 + (ulong)uVar12) = (char)((uint)iVar16 >> 8);
          *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar16;
          iVar2 = iVar2 + iVar13;
          uVar12 = *(int *)((long)param_5 + 0xc) + 2;
          *(uint *)((long)param_5 + 0xc) = uVar12;
          iVar20 = iVar20 + 1;
          piVar23 = piVar23 + iVar13;
        } while (iVar2 < param_3);
      }
LAB_10043e810:
      param_1 = (int *)((long)param_1 + uVar25);
      bVar27 = iVar4 != param_4 + -1;
      iVar4 = iVar4 + 1;
    } while (bVar27);
  }
  return iVar20;
}

