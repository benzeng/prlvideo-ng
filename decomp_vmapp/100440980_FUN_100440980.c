
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100440980(int *param_1,long *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  int iVar13;
  byte bVar14;
  undefined2 *puVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  void *pvVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  size_t sVar25;
  undefined2 local_c70;
  undefined1 local_c6e;
  undefined2 local_c68;
  undefined1 local_c66;
  undefined2 local_c60;
  undefined1 local_c5e;
  undefined2 local_c58;
  undefined1 local_c56;
  undefined2 local_c50;
  undefined1 local_c4e;
  undefined2 local_c48;
  undefined1 local_c46;
  undefined2 local_c40;
  undefined1 local_c3e;
  undefined1 local_c38 [768];
  undefined2 local_938;
  undefined1 local_936;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_c4e = 0;
  local_c50 = 0;
  local_c56 = 0;
  local_c58 = 0;
  ___bzero(&local_938,0x900);
  iVar23 = param_1[3];
  iVar19 = iVar23 + 1;
  if (param_1[1] < iVar19) {
    iVar8 = param_1[2];
    bVar4 = false;
    bVar5 = false;
    iVar17 = param_1[1];
    do {
      iVar18 = iVar17 + 0x10;
      iVar13 = iVar8 + 1;
      if (*param_1 < iVar13) {
        if (iVar18 < iVar19) {
          iVar19 = iVar18;
        }
        iVar19 = iVar19 - iVar17;
        iVar23 = *param_1;
        do {
          iVar6 = iVar23 + 0x10;
          if (iVar6 < iVar13) {
            iVar13 = iVar6;
          }
          iVar13 = iVar13 - iVar23;
          uVar20 = iVar13 * 3;
          uVar7 = uVar20 * iVar19;
          if (uVar7 != 0) {
            pvVar21 = (void *)((ulong)(iVar23 * 3 + iVar17 * param_4) + param_3);
            puVar15 = &local_938;
            do {
              _memcpy(puVar15,pvVar21,(long)(int)uVar20);
              puVar15 = (undefined2 *)((long)puVar15 + (ulong)uVar20);
              pvVar21 = (void *)((long)pvVar21 + (ulong)param_4);
            } while (puVar15 < (undefined2 *)((long)&local_938 + (ulong)uVar7));
          }
          local_c5e = 0;
          local_c60 = 0;
          local_c66 = 0;
          local_c68 = 0;
          local_c3e = local_936;
          local_c40 = local_938;
          local_c46 = 0;
          local_c48 = 0;
          iVar8 = iVar13 * iVar19;
          bVar14 = 0;
          if (iVar8 < 1) {
LAB_100440cad:
            local_c66 = local_c46;
            local_c68 = local_c48;
            local_c5e = local_c3e;
            local_c60 = local_c40;
          }
          else {
            bVar14 = 0;
            puVar15 = &local_938;
            iVar24 = 0;
            iVar10 = 0;
            do {
              iVar9 = _memcmp(puVar15,&local_c40,3);
              if (iVar9 == 0) {
                iVar10 = iVar10 + 1;
              }
              else {
                if (iVar24 == 0) {
                  bVar14 = 8;
                  local_c46 = *(undefined1 *)(puVar15 + 1);
                  local_c48 = *puVar15;
                }
                iVar9 = _memcmp(&local_938,&local_c48,3);
                if (iVar9 != 0) {
                  bVar14 = bVar14 | 0x10;
                  break;
                }
                iVar24 = iVar24 + 1;
              }
              puVar15 = (undefined2 *)((long)puVar15 + 3);
            } while (puVar15 < (undefined2 *)((long)&local_938 + (long)iVar8 * 3));
            if (iVar24 <= iVar10) goto LAB_100440cad;
            local_c66 = local_c3e;
            local_c68 = local_c40;
            local_c5e = local_c46;
            local_c60 = local_c48;
          }
          if ((!bVar4) || (iVar10 = _memcmp(&local_c50,&local_c60,3), iVar10 != 0)) {
            bVar14 = bVar14 | 2;
            local_c4e = local_c5e;
            local_c50 = local_c60;
            bVar4 = true;
          }
          sVar25 = 0;
          if ((bVar14 & 8) == 0) {
LAB_100440de5:
            uVar20 = *(uint *)((long)param_2 + 0xc);
            if (*(uint *)(param_2 + 2) < uVar20 + 1) {
              uVar16 = (ulong)((double)(uVar20 + 1) * _DAT_100b42cf8);
              pvVar12 = operator_new__(uVar16 & 0xffffffff);
              pvVar21 = (void *)*param_2;
              _memcpy(pvVar12,pvVar21,(ulong)*(uint *)(param_2 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar20 = *(uint *)((long)param_2 + 0xc);
              }
              *param_2 = (long)pvVar12;
              *(int *)(param_2 + 2) = (int)uVar16;
              *(undefined1 *)((long)param_2 + 0x14) = 1;
            }
            uVar3 = local_c5e;
            uVar2 = local_c60;
            if (*(uint *)(param_2 + 1) < uVar20 + 1) {
              *(uint *)(param_2 + 1) = uVar20 + 1;
            }
            *(byte *)(*param_2 + (ulong)uVar20) = bVar14;
            iVar23 = *(int *)((long)param_2 + 0xc);
            uVar20 = iVar23 + 1;
            *(uint *)((long)param_2 + 0xc) = uVar20;
            if ((bVar14 & 2) != 0) {
              uVar7 = iVar23 + 4;
              if (*(uint *)(param_2 + 2) < uVar7) {
                uVar16 = (ulong)((double)uVar7 * _DAT_100b42cf8);
                pvVar12 = operator_new__(uVar16 & 0xffffffff);
                pvVar21 = (void *)*param_2;
                _memcpy(pvVar12,pvVar21,(ulong)*(uint *)(param_2 + 1));
                if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                  operator_delete__(pvVar21);
                  uVar20 = *(uint *)((long)param_2 + 0xc);
                }
                *param_2 = (long)pvVar12;
                *(int *)(param_2 + 2) = (int)uVar16;
                *(undefined1 *)((long)param_2 + 0x14) = 1;
              }
              if (*(uint *)(param_2 + 1) < uVar20 + 3) {
                *(uint *)(param_2 + 1) = uVar20 + 3;
              }
              lVar1 = *param_2;
              *(undefined1 *)(lVar1 + 2 + (ulong)uVar20) = uVar3;
              *(undefined2 *)(lVar1 + (ulong)uVar20) = uVar2;
              uVar20 = *(int *)((long)param_2 + 0xc) + 3;
              *(uint *)((long)param_2 + 0xc) = uVar20;
            }
            uVar3 = local_c66;
            uVar2 = local_c68;
            if ((bVar14 & 4) != 0) {
              if (*(uint *)(param_2 + 2) < uVar20 + 3) {
                uVar16 = (ulong)((double)(uVar20 + 3) * _DAT_100b42cf8);
                pvVar12 = operator_new__(uVar16 & 0xffffffff);
                pvVar21 = (void *)*param_2;
                _memcpy(pvVar12,pvVar21,(ulong)*(uint *)(param_2 + 1));
                if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                  operator_delete__(pvVar21);
                  uVar20 = *(uint *)((long)param_2 + 0xc);
                }
                *param_2 = (long)pvVar12;
                *(int *)(param_2 + 2) = (int)uVar16;
                *(undefined1 *)((long)param_2 + 0x14) = 1;
              }
              if (*(uint *)(param_2 + 1) < uVar20 + 3) {
                *(uint *)(param_2 + 1) = uVar20 + 3;
              }
              lVar1 = *param_2;
              *(undefined1 *)(lVar1 + 2 + (ulong)uVar20) = uVar3;
              *(undefined2 *)(lVar1 + (ulong)uVar20) = uVar2;
              uVar20 = *(int *)((long)param_2 + 0xc) + 3;
              *(uint *)((long)param_2 + 0xc) = uVar20;
            }
            uVar16 = (ulong)uVar20;
            if ((bVar14 & 8) != 0) {
              iVar23 = (int)sVar25;
              if (*(uint *)(param_2 + 2) < uVar20 + iVar23) {
                uVar22 = (ulong)((double)(uVar20 + iVar23) * _DAT_100b42cf8);
                pvVar12 = operator_new__(uVar22 & 0xffffffff);
                pvVar21 = (void *)*param_2;
                _memcpy(pvVar12,pvVar21,(ulong)*(uint *)(param_2 + 1));
                if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                  operator_delete__(pvVar21);
                  uVar16 = (ulong)*(uint *)((long)param_2 + 0xc);
                }
                *param_2 = (long)pvVar12;
                *(int *)(param_2 + 2) = (int)uVar22;
                *(undefined1 *)((long)param_2 + 0x14) = 1;
              }
              uVar20 = (int)uVar16 + iVar23;
              if (*(uint *)(param_2 + 1) < uVar20) {
                *(uint *)(param_2 + 1) = uVar20;
              }
              _memcpy((void *)(uVar16 + *param_2),local_c38,sVar25);
              *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + iVar23;
            }
          }
          else {
            if ((bVar14 & 0x10) == 0) {
              if ((!bVar5) || (iVar10 = _memcmp(&local_c58,&local_c68,3), iVar10 != 0)) {
                bVar14 = bVar14 | 4;
                local_c56 = local_c66;
                local_c58 = local_c68;
                bVar5 = true;
              }
            }
            else {
              bVar5 = false;
            }
            local_c6e = local_c5e;
            local_c70 = local_c60;
            uVar11 = FUN_100444c40(&local_938,iVar13,iVar19,bVar14,local_c38,&local_c70);
            sVar25 = (size_t)uVar11;
            if (-1 < (int)uVar11) goto LAB_100440de5;
            if (uVar7 != 0) {
              pvVar21 = (void *)((ulong)(iVar23 * 3 + iVar17 * param_4) + param_3);
              puVar15 = &local_938;
              do {
                _memcpy(puVar15,pvVar21,(long)(int)uVar20);
                puVar15 = (undefined2 *)((long)puVar15 + (ulong)uVar20);
                pvVar21 = (void *)((long)pvVar21 + (ulong)param_4);
              } while (puVar15 < (undefined2 *)((long)&local_938 + (ulong)uVar7));
            }
            uVar20 = *(uint *)((long)param_2 + 0xc);
            if (*(uint *)(param_2 + 2) < uVar20 + 1) {
              uVar16 = (ulong)((double)(uVar20 + 1) * _DAT_100b42cf8);
              pvVar12 = operator_new__(uVar16 & 0xffffffff);
              pvVar21 = (void *)*param_2;
              _memcpy(pvVar12,pvVar21,(ulong)*(uint *)(param_2 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar20 = *(uint *)((long)param_2 + 0xc);
              }
              *param_2 = (long)pvVar12;
              *(int *)(param_2 + 2) = (int)uVar16;
              *(undefined1 *)((long)param_2 + 0x14) = 1;
            }
            if (*(uint *)(param_2 + 1) < uVar20 + 1) {
              *(uint *)(param_2 + 1) = uVar20 + 1;
            }
            *(undefined1 *)(*param_2 + (ulong)uVar20) = 1;
            iVar23 = *(int *)((long)param_2 + 0xc);
            uVar20 = iVar23 + 1;
            uVar16 = (ulong)uVar20;
            *(uint *)((long)param_2 + 0xc) = uVar20;
            uVar20 = iVar8 * 3;
            uVar7 = iVar23 + 1 + uVar20;
            if (*(uint *)(param_2 + 2) < uVar7) {
              uVar22 = (ulong)((double)uVar7 * _DAT_100b42cf8);
              pvVar12 = operator_new__(uVar22 & 0xffffffff);
              pvVar21 = (void *)*param_2;
              _memcpy(pvVar12,pvVar21,(ulong)*(uint *)(param_2 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_2 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar16 = (ulong)*(uint *)((long)param_2 + 0xc);
              }
              *param_2 = (long)pvVar12;
              *(int *)(param_2 + 2) = (int)uVar22;
              *(undefined1 *)((long)param_2 + 0x14) = 1;
            }
            uVar7 = (int)uVar16 + uVar20;
            if (*(uint *)(param_2 + 1) < uVar7) {
              *(uint *)(param_2 + 1) = uVar7;
            }
            _memcpy((void *)(uVar16 + *param_2),&local_938,(ulong)uVar20);
            *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + uVar20;
            bVar5 = false;
            bVar4 = false;
          }
          iVar8 = param_1[2];
          iVar13 = iVar8 + 1;
          iVar23 = iVar6;
        } while (iVar6 < iVar13);
        iVar23 = param_1[3];
      }
      iVar19 = iVar23 + 1;
      iVar17 = iVar18;
    } while (iVar18 < iVar19);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

