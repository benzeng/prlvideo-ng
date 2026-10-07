
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004401a0(int *param_1,long *param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  int iVar19;
  void *pvVar20;
  int iVar21;
  int local_14b4;
  int local_1448;
  undefined1 local_1438 [1024];
  int local_1038 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_1038,0x1000);
  iVar19 = param_1[3];
  iVar12 = iVar19 + 1;
  if (param_1[1] < iVar12) {
    iVar21 = param_1[2];
    local_1448 = 0;
    local_14b4 = 0;
    bVar2 = 0;
    bVar1 = 0;
    iVar14 = param_1[1];
    do {
      iVar15 = iVar14 + 0x10;
      iVar10 = iVar21 + 1;
      if (*param_1 < iVar10) {
        if (iVar15 < iVar12) {
          iVar12 = iVar15;
        }
        iVar12 = iVar12 - iVar14;
        iVar19 = *param_1;
        do {
          iVar3 = iVar19 + 0x10;
          if (iVar3 < iVar10) {
            iVar10 = iVar3;
          }
          iVar10 = iVar10 - iVar19;
          uVar4 = iVar10 * 4;
          uVar5 = uVar4 * iVar12;
          if (uVar5 != 0) {
            pvVar20 = (void *)((ulong)(iVar14 * param_4 + iVar19 * 4) + param_3);
            piVar13 = local_1038;
            do {
              _memcpy(piVar13,pvVar20,(long)(int)uVar4);
              piVar13 = (int *)((long)piVar13 + (ulong)uVar4);
              pvVar20 = (void *)((long)pvVar20 + (ulong)param_4);
            } while (piVar13 < (int *)((long)local_1038 + (ulong)uVar5));
          }
          iVar21 = iVar10 * iVar12;
          bVar18 = 0;
          if (0 < iVar21) {
            piVar13 = local_1038;
            iVar16 = 0;
            iVar17 = 0;
            iVar11 = 0;
            iVar9 = local_1038[0];
            do {
              piVar13 = piVar13 + 1;
              if (iVar9 == local_1038[0]) {
                iVar17 = iVar17 + 1;
              }
              else {
                if (iVar11 == 0) {
                  bVar18 = 8;
                  iVar16 = iVar9;
                }
                if (local_1038[0] != iVar16) {
                  bVar18 = bVar18 | 0x10;
                  goto LAB_1004403c3;
                }
                iVar11 = iVar11 + 1;
                iVar16 = local_1038[0];
              }
              if (local_1038 + iVar21 <= piVar13) goto LAB_1004403c3;
              iVar9 = *piVar13;
            } while( true );
          }
          iVar17 = 0;
          iVar11 = 0;
          iVar16 = 0;
LAB_1004403c3:
          iVar9 = local_1038[0];
          if (iVar17 < iVar11) {
            iVar9 = iVar16;
            iVar16 = local_1038[0];
          }
          if (!(bool)(local_1448 == iVar9 & bVar1)) {
            bVar1 = 1;
            local_1448 = iVar9;
            bVar18 = bVar18 | 2;
          }
          uVar6 = 0;
          if ((bVar18 & 8) == 0) {
LAB_100440492:
            uVar4 = *(uint *)((long)param_2 + 0xc);
            if (*(uint *)(param_2 + 2) < uVar4 + 1) {
              uVar7 = (ulong)((double)(uVar4 + 1) * _DAT_100b42cf8);
              pvVar8 = operator_new__(uVar7 & 0xffffffff);
              pvVar20 = (void *)*param_2;
              _memcpy(pvVar8,pvVar20,(ulong)*(uint *)(param_2 + 1));
              if ((pvVar20 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                operator_delete__(pvVar20);
                uVar4 = *(uint *)((long)param_2 + 0xc);
              }
              *param_2 = (long)pvVar8;
              *(int *)(param_2 + 2) = (int)uVar7;
              *(undefined1 *)((long)param_2 + 0x14) = 1;
            }
            if (*(uint *)(param_2 + 1) < uVar4 + 1) {
              *(uint *)(param_2 + 1) = uVar4 + 1;
            }
            *(byte *)(*param_2 + (ulong)uVar4) = bVar18;
            iVar19 = *(int *)((long)param_2 + 0xc);
            uVar4 = iVar19 + 1;
            *(uint *)((long)param_2 + 0xc) = uVar4;
            if ((bVar18 & 2) != 0) {
              uVar5 = iVar19 + 5;
              if (*(uint *)(param_2 + 2) < uVar5) {
                uVar7 = (ulong)((double)uVar5 * _DAT_100b42cf8);
                pvVar8 = operator_new__(uVar7 & 0xffffffff);
                pvVar20 = (void *)*param_2;
                _memcpy(pvVar8,pvVar20,(ulong)*(uint *)(param_2 + 1));
                if ((pvVar20 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                  operator_delete__(pvVar20);
                  uVar4 = *(uint *)((long)param_2 + 0xc);
                }
                *param_2 = (long)pvVar8;
                *(int *)(param_2 + 2) = (int)uVar7;
                *(undefined1 *)((long)param_2 + 0x14) = 1;
              }
              if (*(uint *)(param_2 + 1) < uVar4 + 4) {
                *(uint *)(param_2 + 1) = uVar4 + 4;
              }
              *(int *)(*param_2 + (ulong)uVar4) = iVar9;
              uVar4 = *(int *)((long)param_2 + 0xc) + 4;
              *(uint *)((long)param_2 + 0xc) = uVar4;
            }
            if ((bVar18 & 4) != 0) {
              if (*(uint *)(param_2 + 2) < uVar4 + 4) {
                uVar7 = (ulong)((double)(uVar4 + 4) * _DAT_100b42cf8);
                pvVar8 = operator_new__(uVar7 & 0xffffffff);
                pvVar20 = (void *)*param_2;
                _memcpy(pvVar8,pvVar20,(ulong)*(uint *)(param_2 + 1));
                if ((pvVar20 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                  operator_delete__(pvVar20);
                  uVar4 = *(uint *)((long)param_2 + 0xc);
                }
                *param_2 = (long)pvVar8;
                *(int *)(param_2 + 2) = (int)uVar7;
                *(undefined1 *)((long)param_2 + 0x14) = 1;
              }
              if (*(uint *)(param_2 + 1) < uVar4 + 4) {
                *(uint *)(param_2 + 1) = uVar4 + 4;
              }
              *(int *)(*param_2 + (ulong)uVar4) = iVar16;
              uVar4 = *(int *)((long)param_2 + 0xc) + 4;
              *(uint *)((long)param_2 + 0xc) = uVar4;
            }
            if ((bVar18 & 8) != 0) {
              if (*(uint *)(param_2 + 2) < uVar4 + uVar6) {
                uVar7 = (ulong)((double)(uVar4 + uVar6) * _DAT_100b42cf8);
                pvVar8 = operator_new__(uVar7 & 0xffffffff);
                pvVar20 = (void *)*param_2;
                _memcpy(pvVar8,pvVar20,(ulong)*(uint *)(param_2 + 1));
                if ((pvVar20 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                  operator_delete__(pvVar20);
                  uVar4 = *(uint *)((long)param_2 + 0xc);
                }
                *param_2 = (long)pvVar8;
                *(int *)(param_2 + 2) = (int)uVar7;
                *(undefined1 *)((long)param_2 + 0x14) = 1;
              }
              if (*(uint *)(param_2 + 1) < uVar4 + uVar6) {
                *(uint *)(param_2 + 1) = uVar4 + uVar6;
              }
              _memcpy((void *)((ulong)uVar4 + *param_2),local_1438,(ulong)uVar6);
              *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + uVar6;
            }
          }
          else {
            if ((bVar18 & 0x10) == 0) {
              if (!(bool)(local_14b4 == iVar16 & bVar2)) {
                bVar2 = 1;
                local_14b4 = iVar16;
                bVar18 = bVar18 | 4;
              }
            }
            else {
              bVar2 = 0;
            }
            uVar6 = FUN_100444830(local_1038,iVar10,iVar12,bVar18,local_1438,iVar9);
            if (-1 < (int)uVar6) goto LAB_100440492;
            if (uVar5 != 0) {
              pvVar20 = (void *)((ulong)(iVar14 * param_4 + iVar19 * 4) + param_3);
              piVar13 = local_1038;
              do {
                _memcpy(piVar13,pvVar20,(long)(int)uVar4);
                piVar13 = (int *)((long)piVar13 + (ulong)uVar4);
                pvVar20 = (void *)((long)pvVar20 + (ulong)param_4);
              } while (piVar13 < (int *)((long)local_1038 + (ulong)uVar5));
            }
            uVar4 = *(uint *)((long)param_2 + 0xc);
            if (*(uint *)(param_2 + 2) < uVar4 + 1) {
              uVar7 = (ulong)((double)(uVar4 + 1) * _DAT_100b42cf8);
              pvVar8 = operator_new__(uVar7 & 0xffffffff);
              pvVar20 = (void *)*param_2;
              _memcpy(pvVar8,pvVar20,(ulong)*(uint *)(param_2 + 1));
              if ((pvVar20 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                operator_delete__(pvVar20);
                uVar4 = *(uint *)((long)param_2 + 0xc);
              }
              *param_2 = (long)pvVar8;
              *(int *)(param_2 + 2) = (int)uVar7;
              *(undefined1 *)((long)param_2 + 0x14) = 1;
            }
            if (*(uint *)(param_2 + 1) < uVar4 + 1) {
              *(uint *)(param_2 + 1) = uVar4 + 1;
            }
            *(undefined1 *)(*param_2 + (ulong)uVar4) = 1;
            iVar19 = *(int *)((long)param_2 + 0xc);
            uVar4 = iVar19 + 1;
            *(uint *)((long)param_2 + 0xc) = uVar4;
            uVar6 = iVar21 * 4;
            uVar5 = iVar19 + 1 + iVar21 * 4;
            if (*(uint *)(param_2 + 2) < uVar5) {
              uVar7 = (ulong)((double)uVar5 * _DAT_100b42cf8);
              pvVar8 = operator_new__(uVar7 & 0xffffffff);
              pvVar20 = (void *)*param_2;
              _memcpy(pvVar8,pvVar20,(ulong)*(uint *)(param_2 + 1));
              if ((pvVar20 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                operator_delete__(pvVar20);
                uVar4 = *(uint *)((long)param_2 + 0xc);
              }
              *param_2 = (long)pvVar8;
              *(int *)(param_2 + 2) = (int)uVar7;
              *(undefined1 *)((long)param_2 + 0x14) = 1;
            }
            if (*(uint *)(param_2 + 1) < uVar4 + uVar6) {
              *(uint *)(param_2 + 1) = uVar4 + uVar6;
            }
            _memcpy((void *)((ulong)uVar4 + *param_2),local_1038,(ulong)uVar6);
            *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + uVar6;
            bVar1 = 0;
            bVar2 = 0;
          }
          iVar21 = param_1[2];
          iVar10 = iVar21 + 1;
          iVar19 = iVar3;
        } while (iVar3 < iVar10);
        iVar19 = param_1[3];
      }
      iVar12 = iVar19 + 1;
      iVar14 = iVar15;
    } while (iVar15 < iVar12);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

