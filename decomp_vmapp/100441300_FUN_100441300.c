
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100441300(int *param_1,long *param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  short sVar20;
  void *pvVar21;
  size_t sVar22;
  byte bVar23;
  int iVar24;
  undefined1 local_638 [512];
  short local_438 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_438,0x400);
  iVar24 = param_1[3];
  iVar10 = iVar24 + 1;
  if (param_1[1] < iVar10) {
    iVar18 = param_1[2];
    sVar15 = 0;
    sVar3 = 0;
    bVar2 = 0;
    bVar1 = 0;
    iVar13 = param_1[1];
    do {
      iVar14 = iVar13 + 0x10;
      iVar9 = iVar18 + 1;
      if (*param_1 < iVar9) {
        if (iVar14 < iVar10) {
          iVar10 = iVar14;
        }
        iVar10 = iVar10 - iVar13;
        iVar24 = *param_1;
        do {
          iVar4 = iVar24 + 0x10;
          if (iVar4 < iVar9) {
            iVar9 = iVar4;
          }
          iVar9 = iVar9 - iVar24;
          uVar19 = iVar9 * 2;
          uVar5 = uVar19 * iVar10;
          if (uVar5 != 0) {
            pvVar21 = (void *)((ulong)(iVar13 * param_4 + iVar24 * 2) + param_3);
            psVar11 = local_438;
            do {
              _memcpy(psVar11,pvVar21,(long)(int)uVar19);
              psVar11 = (short *)((long)psVar11 + (ulong)uVar19);
              pvVar21 = (void *)((long)pvVar21 + (ulong)param_4);
            } while (psVar11 < (short *)((long)local_438 + (ulong)uVar5));
          }
          iVar18 = iVar9 * iVar10;
          bVar23 = 0;
          if (0 < iVar18) {
            psVar11 = local_438;
            sVar12 = 0;
            iVar16 = 0;
            iVar17 = 0;
            sVar20 = local_438[0];
            bVar23 = 0;
            do {
              psVar11 = psVar11 + 1;
              if (sVar20 == local_438[0]) {
                iVar16 = iVar16 + 1;
              }
              else {
                if (iVar17 == 0) {
                  sVar12 = sVar20;
                  bVar23 = 8;
                }
                if (local_438[0] != sVar12) {
                  bVar23 = bVar23 | 0x10;
                  goto LAB_100441553;
                }
                iVar17 = iVar17 + 1;
                sVar12 = local_438[0];
              }
              if (local_438 + iVar18 <= psVar11) goto LAB_100441553;
              sVar20 = *psVar11;
            } while( true );
          }
          iVar16 = 0;
          iVar17 = 0;
          sVar12 = 0;
LAB_100441553:
          sVar20 = local_438[0];
          if (iVar16 < iVar17) {
            sVar20 = sVar12;
            sVar12 = local_438[0];
          }
          if (!(bool)(sVar15 == sVar20 & bVar1)) {
            bVar1 = 1;
            sVar15 = sVar20;
            bVar23 = bVar23 | 2;
          }
          sVar22 = 0;
          if ((bVar23 & 8) == 0) {
LAB_100441657:
            uVar19 = *(uint *)((long)param_2 + 0xc);
            if (*(uint *)(param_2 + 2) < uVar19 + 1) {
              uVar7 = (ulong)((double)(uVar19 + 1) * _DAT_100b42cf8);
              pvVar8 = operator_new__(uVar7 & 0xffffffff);
              pvVar21 = (void *)*param_2;
              _memcpy(pvVar8,pvVar21,(ulong)*(uint *)(param_2 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar19 = *(uint *)((long)param_2 + 0xc);
              }
              *param_2 = (long)pvVar8;
              *(int *)(param_2 + 2) = (int)uVar7;
              *(undefined1 *)((long)param_2 + 0x14) = 1;
            }
            if (*(uint *)(param_2 + 1) < uVar19 + 1) {
              *(uint *)(param_2 + 1) = uVar19 + 1;
            }
            *(byte *)(*param_2 + (ulong)uVar19) = bVar23;
            iVar24 = *(int *)((long)param_2 + 0xc);
            uVar19 = iVar24 + 1;
            *(uint *)((long)param_2 + 0xc) = uVar19;
            if ((bVar23 & 2) != 0) {
              uVar5 = iVar24 + 3;
              if (*(uint *)(param_2 + 2) < uVar5) {
                uVar7 = (ulong)((double)uVar5 * _DAT_100b42cf8);
                pvVar8 = operator_new__(uVar7 & 0xffffffff);
                pvVar21 = (void *)*param_2;
                _memcpy(pvVar8,pvVar21,(ulong)*(uint *)(param_2 + 1));
                if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                  operator_delete__(pvVar21);
                  uVar19 = *(uint *)((long)param_2 + 0xc);
                }
                *param_2 = (long)pvVar8;
                *(int *)(param_2 + 2) = (int)uVar7;
                *(undefined1 *)((long)param_2 + 0x14) = 1;
              }
              if (*(uint *)(param_2 + 1) < uVar19 + 2) {
                *(uint *)(param_2 + 1) = uVar19 + 2;
              }
              *(short *)(*param_2 + (ulong)uVar19) = sVar20;
              uVar19 = *(int *)((long)param_2 + 0xc) + 2;
              *(uint *)((long)param_2 + 0xc) = uVar19;
            }
            if ((bVar23 & 4) != 0) {
              if (*(uint *)(param_2 + 2) < uVar19 + 2) {
                uVar7 = (ulong)((double)(uVar19 + 2) * _DAT_100b42cf8);
                pvVar8 = operator_new__(uVar7 & 0xffffffff);
                pvVar21 = (void *)*param_2;
                _memcpy(pvVar8,pvVar21,(ulong)*(uint *)(param_2 + 1));
                if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                  operator_delete__(pvVar21);
                  uVar19 = *(uint *)((long)param_2 + 0xc);
                }
                *param_2 = (long)pvVar8;
                *(int *)(param_2 + 2) = (int)uVar7;
                *(undefined1 *)((long)param_2 + 0x14) = 1;
              }
              if (*(uint *)(param_2 + 1) < uVar19 + 2) {
                *(uint *)(param_2 + 1) = uVar19 + 2;
              }
              *(short *)(*param_2 + (ulong)uVar19) = sVar12;
              uVar19 = *(int *)((long)param_2 + 0xc) + 2;
              *(uint *)((long)param_2 + 0xc) = uVar19;
            }
            if ((bVar23 & 8) != 0) {
              iVar24 = (int)sVar22;
              if (*(uint *)(param_2 + 2) < uVar19 + iVar24) {
                uVar7 = (ulong)((double)(uVar19 + iVar24) * _DAT_100b42cf8);
                pvVar8 = operator_new__(uVar7 & 0xffffffff);
                pvVar21 = (void *)*param_2;
                _memcpy(pvVar8,pvVar21,(ulong)*(uint *)(param_2 + 1));
                if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                  operator_delete__(pvVar21);
                  uVar19 = *(uint *)((long)param_2 + 0xc);
                }
                *param_2 = (long)pvVar8;
                *(int *)(param_2 + 2) = (int)uVar7;
                *(undefined1 *)((long)param_2 + 0x14) = 1;
              }
              if (*(uint *)(param_2 + 1) < uVar19 + iVar24) {
                *(uint *)(param_2 + 1) = uVar19 + iVar24;
              }
              _memcpy((void *)((ulong)uVar19 + *param_2),local_638,sVar22);
              *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + iVar24;
            }
          }
          else {
            if ((bVar23 & 0x10) == 0) {
              if (!(bool)(sVar3 == sVar12 & bVar2)) {
                bVar2 = 1;
                sVar3 = sVar12;
                bVar23 = bVar23 | 4;
              }
            }
            else {
              bVar2 = 0;
            }
            uVar6 = FUN_100445170(local_438,iVar9,iVar10,bVar23);
            sVar22 = (size_t)uVar6;
            if (-1 < (int)uVar6) goto LAB_100441657;
            if (uVar5 != 0) {
              pvVar21 = (void *)((ulong)(iVar13 * param_4 + iVar24 * 2) + param_3);
              psVar11 = local_438;
              do {
                _memcpy(psVar11,pvVar21,(long)(int)uVar19);
                psVar11 = (short *)((long)psVar11 + (ulong)uVar19);
                pvVar21 = (void *)((long)pvVar21 + (ulong)param_4);
              } while (psVar11 < (short *)((long)local_438 + (ulong)uVar5));
            }
            uVar19 = *(uint *)((long)param_2 + 0xc);
            if (*(uint *)(param_2 + 2) < uVar19 + 1) {
              uVar7 = (ulong)((double)(uVar19 + 1) * _DAT_100b42cf8);
              pvVar8 = operator_new__(uVar7 & 0xffffffff);
              pvVar21 = (void *)*param_2;
              _memcpy(pvVar8,pvVar21,(ulong)*(uint *)(param_2 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar19 = *(uint *)((long)param_2 + 0xc);
              }
              *param_2 = (long)pvVar8;
              *(int *)(param_2 + 2) = (int)uVar7;
              *(undefined1 *)((long)param_2 + 0x14) = 1;
            }
            if (*(uint *)(param_2 + 1) < uVar19 + 1) {
              *(uint *)(param_2 + 1) = uVar19 + 1;
            }
            *(undefined1 *)(*param_2 + (ulong)uVar19) = 1;
            iVar24 = *(int *)((long)param_2 + 0xc);
            uVar19 = iVar24 + 1;
            *(uint *)((long)param_2 + 0xc) = uVar19;
            uVar5 = iVar18 * 2;
            uVar6 = iVar24 + 1 + iVar18 * 2;
            if (*(uint *)(param_2 + 2) < uVar6) {
              uVar7 = (ulong)((double)uVar6 * _DAT_100b42cf8);
              pvVar8 = operator_new__(uVar7 & 0xffffffff);
              pvVar21 = (void *)*param_2;
              _memcpy(pvVar8,pvVar21,(ulong)*(uint *)(param_2 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar19 = *(uint *)((long)param_2 + 0xc);
              }
              *param_2 = (long)pvVar8;
              *(int *)(param_2 + 2) = (int)uVar7;
              *(undefined1 *)((long)param_2 + 0x14) = 1;
            }
            if (*(uint *)(param_2 + 1) < uVar19 + uVar5) {
              *(uint *)(param_2 + 1) = uVar19 + uVar5;
            }
            _memcpy((void *)((ulong)uVar19 + *param_2),local_438,(ulong)uVar5);
            *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + uVar5;
            bVar1 = 0;
            bVar2 = 0;
          }
          iVar18 = param_1[2];
          iVar9 = iVar18 + 1;
          iVar24 = iVar4;
        } while (iVar4 < iVar9);
        iVar24 = param_1[3];
      }
      iVar10 = iVar24 + 1;
      iVar13 = iVar14;
    } while (iVar14 < iVar10);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

