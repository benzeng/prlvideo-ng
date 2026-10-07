
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044b4c0(ushort *param_1,int param_2,int param_3,long *param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  ushort *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  ushort *puVar15;
  ushort *puVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  bool bVar26;
  undefined2 local_32b8;
  byte local_31ba [4224];
  ushort auStack_213a [4223];
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  _memset(local_31ba,0xff,0x107f);
  local_3c = 0;
  iVar7 = param_3 * param_2;
  puVar2 = param_1 + iVar7;
  param_1[iVar7] = ~param_1[(long)iVar7 + -1];
  iVar23 = 0;
  if (iVar7 < 1) {
    iVar13 = 0;
    iVar22 = 0;
  }
  else {
    iVar22 = 0;
    iVar13 = 0;
    puVar10 = param_1;
    do {
      uVar3 = *puVar10;
      puVar15 = puVar10 + 1;
      if (puVar10[1] == uVar3) {
        do {
          puVar1 = puVar10 + 2;
          puVar16 = puVar10 + 2;
          puVar10 = puVar15;
          puVar15 = puVar16;
        } while (*puVar1 == uVar3);
        iVar22 = iVar22 + 1;
      }
      else {
        iVar13 = iVar13 + 1;
      }
      if (iVar23 < 0x7f) {
        uVar18 = uVar3 & 0xfff;
        uVar19 = (ulong)uVar18;
        if (local_31ba[uVar19] == 0xff) {
          pbVar14 = local_31ba + uVar19;
        }
        else {
          lVar20 = (ulong)((uVar3 & 0xfff) + 1) + 0xfd;
          do {
            lVar8 = lVar20;
            if (auStack_213a[uVar19] == uVar3) goto LAB_10044b649;
            uVar18 = uVar18 + 1;
            uVar19 = (ulong)(int)uVar18;
            lVar20 = lVar8 + 1;
          } while (*(char *)((long)&local_32b8 + lVar8 + 1) != -1);
          pbVar14 = (byte *)((long)&local_32b8 + lVar8 + 1);
          uVar19 = lVar8 - 0xfd;
        }
        *pbVar14 = (byte)iVar23;
        auStack_213a[uVar19] = uVar3;
        (&local_32b8)[local_3c] = uVar3;
        iVar23 = local_3c;
      }
      local_3c = iVar23 + 1;
      iVar23 = local_3c;
LAB_10044b649:
      puVar10 = puVar15;
    } while (puVar15 < puVar2);
    if (iVar23 == 1) {
      uVar18 = *(uint *)((long)param_4 + 0xc);
      if (*(uint *)(param_4 + 2) < uVar18 + 1) {
        uVar19 = (ulong)((double)(uVar18 + 1) * _DAT_100b42cf8);
        pvVar9 = operator_new__(uVar19 & 0xffffffff);
        pvVar5 = (void *)*param_4;
        _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar5);
          uVar18 = *(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar9;
        *(int *)(param_4 + 2) = (int)uVar19;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      if (*(uint *)(param_4 + 1) < uVar18 + 1) {
        *(uint *)(param_4 + 1) = uVar18 + 1;
        uVar18 = *(uint *)((long)param_4 + 0xc);
      }
      *(undefined1 *)(*param_4 + (ulong)uVar18) = 1;
      iVar23 = *(int *)((long)param_4 + 0xc);
      uVar18 = iVar23 + 1;
      uVar19 = (ulong)uVar18;
      *(uint *)((long)param_4 + 0xc) = uVar18;
      uVar18 = iVar23 + 3;
      if (*(uint *)(param_4 + 2) < uVar18) {
        uVar25 = (ulong)((double)uVar18 * _DAT_100b42cf8);
        pvVar9 = operator_new__(uVar25 & 0xffffffff);
        pvVar5 = (void *)*param_4;
        _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar5);
          uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar9;
        *(int *)(param_4 + 2) = (int)uVar25;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      uVar18 = (int)uVar19 + 2;
      if (*(uint *)(param_4 + 1) < uVar18) {
        *(uint *)(param_4 + 1) = uVar18;
        uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
      }
      *(undefined2 *)(*param_4 + uVar19) = local_32b8;
      *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + 2;
      goto LAB_10044c4df;
    }
  }
  uVar24 = iVar7 * 2;
  uVar18 = (iVar22 + iVar13) * 3;
  bVar26 = (int)uVar18 < (int)uVar24;
  if ((int)uVar24 < (int)uVar18) {
    uVar18 = uVar24;
  }
  if (iVar23 < 0x80) {
    uVar12 = iVar13 + (iVar22 + iVar23) * 2;
    bVar11 = (int)uVar12 < (int)uVar18;
    bVar26 = (int)uVar12 < (int)uVar18 || bVar26;
    if (iVar23 < 0x11) {
      if ((int)uVar12 <= (int)uVar18) {
        uVar18 = uVar12;
      }
      iVar13 = *(int *)((long)&PTR___mh_execute_header_100b42d70 + (long)(iVar23 + -1) * 4) * iVar7;
      iVar13 = ((int)(((uint)(iVar13 >> 0x1f) >> 0x1d) + iVar13) >> 3) + iVar23 * 2;
      bVar11 = iVar13 < (int)uVar18 || bVar11;
      bVar26 = (int)uVar18 <= iVar13 && bVar26;
    }
    bVar6 = true;
    if (!bVar11) goto LAB_10044b773;
  }
  else {
LAB_10044b773:
    local_3c = 0;
    iVar23 = 0;
    bVar6 = false;
  }
  uVar18 = *(uint *)((long)param_4 + 0xc);
  if (*(uint *)(param_4 + 2) < uVar18 + 1) {
    uVar19 = (ulong)((double)(uVar18 + 1) * _DAT_100b42cf8);
    pvVar9 = operator_new__(uVar19 & 0xffffffff);
    pvVar5 = (void *)*param_4;
    _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
    if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
      operator_delete__(pvVar5);
      uVar18 = *(uint *)((long)param_4 + 0xc);
    }
    *param_4 = (long)pvVar9;
    *(int *)(param_4 + 2) = (int)uVar19;
    *(undefined1 *)((long)param_4 + 0x14) = 1;
  }
  if (*(uint *)(param_4 + 1) < uVar18 + 1) {
    *(uint *)(param_4 + 1) = uVar18 + 1;
    uVar18 = *(uint *)((long)param_4 + 0xc);
  }
  *(byte *)(*param_4 + (ulong)uVar18) = bVar26 << 7 | (byte)iVar23;
  uVar18 = *(int *)((long)param_4 + 0xc) + 1;
  uVar19 = (ulong)uVar18;
  *(uint *)((long)param_4 + 0xc) = uVar18;
  if (0 < iVar23) {
    lVar20 = 0;
    do {
      uVar4 = (&local_32b8)[lVar20];
      uVar18 = (int)uVar19 + 2;
      if (*(uint *)(param_4 + 2) < uVar18) {
        uVar25 = (ulong)((double)uVar18 * _DAT_100b42cf8);
        pvVar9 = operator_new__(uVar25 & 0xffffffff);
        pvVar5 = (void *)*param_4;
        _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar5);
          uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar9;
        *(int *)(param_4 + 2) = (int)uVar25;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      uVar18 = (int)uVar19 + 2;
      if (*(uint *)(param_4 + 1) < uVar18) {
        *(uint *)(param_4 + 1) = uVar18;
      }
      *(undefined2 *)(*param_4 + uVar19) = uVar4;
      uVar18 = *(int *)((long)param_4 + 0xc) + 2;
      uVar19 = (ulong)uVar18;
      *(uint *)((long)param_4 + 0xc) = uVar18;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar23);
  }
  if (bVar26) {
    if (0 < iVar7) {
      do {
        uVar3 = *param_1;
        uVar18 = (uint)uVar3;
        puVar10 = param_1;
        do {
          puVar10 = puVar10 + 1;
          if (*puVar10 != uVar18) break;
        } while (puVar10 < puVar2);
        iVar7 = (int)((ulong)((long)puVar10 - (long)param_1) >> 1);
        iVar23 = (int)uVar19;
        if (iVar7 < 3 && bVar6) {
          uVar24 = uVar18 & 0xfff;
          uVar25 = (ulong)uVar24;
          bVar17 = local_31ba[uVar25];
          if (bVar17 == 0xff) {
            bVar17 = 0xff;
          }
          else {
            pbVar14 = local_31ba + ((uVar18 & 0xfff) + 1);
            do {
              if (auStack_213a[uVar25] == uVar18) goto LAB_10044bea9;
              uVar24 = uVar24 + 1;
              uVar25 = (ulong)(int)uVar24;
              bVar17 = *pbVar14;
              pbVar14 = pbVar14 + 1;
            } while (bVar17 != 0xff);
            bVar17 = 0xff;
          }
LAB_10044bea9:
          if (iVar7 == 2) {
            if (*(uint *)(param_4 + 2) < iVar23 + 1U) {
              uVar25 = (ulong)((double)(iVar23 + 1U) * _DAT_100b42cf8);
              pvVar9 = operator_new__(uVar25 & 0xffffffff);
              pvVar5 = (void *)*param_4;
              _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar5);
                uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar9;
              *(int *)(param_4 + 2) = (int)uVar25;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            uVar18 = (int)uVar19 + 1;
            if (*(uint *)(param_4 + 1) < uVar18) {
              *(uint *)(param_4 + 1) = uVar18;
            }
            *(byte *)(*param_4 + uVar19) = bVar17;
            uVar18 = *(int *)((long)param_4 + 0xc) + 1;
            uVar19 = (ulong)uVar18;
            *(uint *)((long)param_4 + 0xc) = uVar18;
          }
          uVar18 = (int)uVar19 + 1;
          if (*(uint *)(param_4 + 2) < uVar18) {
            uVar25 = (ulong)((double)uVar18 * _DAT_100b42cf8);
            pvVar9 = operator_new__(uVar25 & 0xffffffff);
            pvVar5 = (void *)*param_4;
            _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
            if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
              operator_delete__(pvVar5);
              uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
            }
            *param_4 = (long)pvVar9;
            *(int *)(param_4 + 2) = (int)uVar25;
            *(undefined1 *)((long)param_4 + 0x14) = 1;
          }
          uVar18 = (int)uVar19 + 1;
          if (*(uint *)(param_4 + 1) < uVar18) {
            *(uint *)(param_4 + 1) = uVar18;
          }
          *(byte *)(*param_4 + uVar19) = bVar17;
        }
        else {
          if (bVar6) {
            uVar24 = uVar18 & 0xfff;
            uVar25 = (ulong)uVar24;
            bVar17 = local_31ba[uVar25];
            if (bVar17 == 0xff) {
              bVar17 = 0xff;
            }
            else {
              pbVar14 = local_31ba + ((uVar18 & 0xfff) + 1);
              do {
                if (auStack_213a[uVar25] == uVar18) goto LAB_10044bf3e;
                uVar24 = uVar24 + 1;
                uVar25 = (ulong)(int)uVar24;
                bVar17 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while (bVar17 != 0xff);
              bVar17 = 0xff;
            }
LAB_10044bf3e:
            if (*(uint *)(param_4 + 2) < iVar23 + 1U) {
              uVar25 = (ulong)((double)(iVar23 + 1U) * _DAT_100b42cf8);
              pvVar9 = operator_new__(uVar25 & 0xffffffff);
              pvVar5 = (void *)*param_4;
              _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar5);
                uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar9;
              *(int *)(param_4 + 2) = (int)uVar25;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            uVar18 = (int)uVar19 + 1;
            if (*(uint *)(param_4 + 1) < uVar18) {
              *(uint *)(param_4 + 1) = uVar18;
            }
            *(byte *)(*param_4 + uVar19) = bVar17 | 0x80;
            uVar18 = *(int *)((long)param_4 + 0xc) + 1;
          }
          else {
            if (*(uint *)(param_4 + 2) < iVar23 + 2U) {
              uVar25 = (ulong)((double)(iVar23 + 2U) * _DAT_100b42cf8);
              pvVar9 = operator_new__(uVar25 & 0xffffffff);
              pvVar5 = (void *)*param_4;
              _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar5);
                uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar9;
              *(int *)(param_4 + 2) = (int)uVar25;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            uVar18 = (int)uVar19 + 2;
            if (*(uint *)(param_4 + 1) < uVar18) {
              *(uint *)(param_4 + 1) = uVar18;
            }
            *(ushort *)(*param_4 + uVar19) = uVar3;
            uVar18 = *(int *)((long)param_4 + 0xc) + 2;
          }
          *(uint *)((long)param_4 + 0xc) = uVar18;
          uVar12 = iVar7 - 1;
          uVar24 = uVar12;
          if (0xfe < (int)uVar12) {
            uVar24 = (iVar7 - 0x100U) % 0xff;
            do {
              if (*(uint *)(param_4 + 2) < uVar18 + 1) {
                uVar19 = (ulong)((double)(uVar18 + 1) * _DAT_100b42cf8);
                pvVar9 = operator_new__(uVar19 & 0xffffffff);
                pvVar5 = (void *)*param_4;
                _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
                if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                  operator_delete__(pvVar5);
                  uVar18 = *(uint *)((long)param_4 + 0xc);
                }
                *param_4 = (long)pvVar9;
                *(int *)(param_4 + 2) = (int)uVar19;
                *(undefined1 *)((long)param_4 + 0x14) = 1;
              }
              if (*(uint *)(param_4 + 1) < uVar18 + 1) {
                *(uint *)(param_4 + 1) = uVar18 + 1;
              }
              *(undefined1 *)(*param_4 + (ulong)uVar18) = 0xff;
              uVar18 = *(int *)((long)param_4 + 0xc) + 1;
              *(uint *)((long)param_4 + 0xc) = uVar18;
              uVar12 = uVar12 - 0xff;
            } while (0xfe < (int)uVar12);
          }
          if (*(uint *)(param_4 + 2) < uVar18 + 1) {
            uVar19 = (ulong)((double)(uVar18 + 1) * _DAT_100b42cf8);
            pvVar9 = operator_new__(uVar19 & 0xffffffff);
            pvVar5 = (void *)*param_4;
            _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
            if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
              operator_delete__(pvVar5);
              uVar18 = *(uint *)((long)param_4 + 0xc);
            }
            *param_4 = (long)pvVar9;
            *(int *)(param_4 + 2) = (int)uVar19;
            *(undefined1 *)((long)param_4 + 0x14) = 1;
          }
          if (*(uint *)(param_4 + 1) < uVar18 + 1) {
            *(uint *)(param_4 + 1) = uVar18 + 1;
          }
          *(char *)(*param_4 + (ulong)uVar18) = (char)uVar24;
        }
        uVar18 = *(int *)((long)param_4 + 0xc) + 1;
        uVar19 = (ulong)uVar18;
        *(uint *)((long)param_4 + 0xc) = uVar18;
        param_1 = puVar10;
      } while (puVar10 < puVar2);
    }
  }
  else if (bVar6) {
    if (0 < param_3) {
      iVar23 = *(int *)((long)&PTR___mh_execute_header_100b42d70 + (long)(iVar23 + -1) * 4);
      iVar7 = 0;
      do {
        if (0 < param_2) {
          puVar2 = param_1 + param_2;
          puVar10 = param_1 + 1;
          if (param_1 + 1 < puVar2) {
            puVar10 = puVar2;
          }
          uVar24 = 0;
          uVar18 = 0;
          puVar15 = param_1;
          do {
            uVar3 = *puVar15;
            uVar25 = (ulong)uVar3 & 0xfff;
            bVar17 = local_31ba[uVar25];
            if (bVar17 == 0xff) {
              uVar12 = 0xff;
            }
            else {
              uVar21 = uVar3 & 0xfff;
              pbVar14 = local_31ba + ((uVar3 & 0xfff) + 1);
              do {
                uVar12 = (uint)bVar17;
                if (auStack_213a[uVar25] == uVar3) goto LAB_10044bac2;
                uVar21 = uVar21 + 1;
                uVar25 = (ulong)(int)uVar21;
                bVar17 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while (bVar17 != 0xff);
              uVar12 = 0xff;
            }
LAB_10044bac2:
            puVar15 = puVar15 + 1;
            uVar21 = (uVar24 & 0xff) << ((byte)iVar23 & 0x1f);
            uVar24 = uVar21 | uVar12;
            uVar18 = (uVar18 & 0xff) + iVar23;
            if (7 < (uVar18 & 0xf8)) {
              uVar18 = (int)uVar19 + 1;
              if (*(uint *)(param_4 + 2) < uVar18) {
                uVar25 = (ulong)((double)uVar18 * _DAT_100b42cf8);
                pvVar9 = operator_new__(uVar25 & 0xffffffff);
                pvVar5 = (void *)*param_4;
                _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
                if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                  operator_delete__(pvVar5);
                  uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
                }
                *param_4 = (long)pvVar9;
                *(int *)(param_4 + 2) = (int)uVar25;
                *(undefined1 *)((long)param_4 + 0x14) = 1;
              }
              uVar18 = (int)uVar19 + 1;
              if (*(uint *)(param_4 + 1) < uVar18) {
                *(uint *)(param_4 + 1) = uVar18;
              }
              *(char *)(*param_4 + uVar19) = (char)uVar24;
              uVar18 = *(int *)((long)param_4 + 0xc) + 1;
              uVar19 = (ulong)uVar18;
              *(uint *)((long)param_4 + 0xc) = uVar18;
              uVar18 = 0;
            }
          } while (puVar15 < puVar2);
          param_1 = (ushort *)
                    ((long)param_1 + (~(ulong)param_1 + (long)puVar10 & 0xfffffffffffffffe) + 2);
          if ((char)uVar18 != '\0') {
            uVar24 = (int)uVar19 + 1;
            if (*(uint *)(param_4 + 2) < uVar24) {
              uVar25 = (ulong)((double)uVar24 * _DAT_100b42cf8);
              pvVar9 = operator_new__(uVar25 & 0xffffffff);
              pvVar5 = (void *)*param_4;
              _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar5);
                uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar9;
              *(int *)(param_4 + 2) = (int)uVar25;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            uVar24 = (int)uVar19 + 1;
            if (*(uint *)(param_4 + 1) < uVar24) {
              *(uint *)(param_4 + 1) = uVar24;
            }
            *(char *)(*param_4 + uVar19) =
                 (char)((uVar21 & 0xff | uVar12) << (8U - (char)uVar18 & 0x1f));
            uVar18 = *(int *)((long)param_4 + 0xc) + 1;
            uVar19 = (ulong)uVar18;
            *(uint *)((long)param_4 + 0xc) = uVar18;
          }
        }
        bVar26 = iVar7 != param_3 + -1;
        iVar7 = iVar7 + 1;
      } while (bVar26);
    }
  }
  else {
    uVar18 = (int)uVar19 + uVar24;
    if (*(uint *)(param_4 + 2) < uVar18) {
      uVar25 = (ulong)((double)uVar18 * _DAT_100b42cf8);
      pvVar9 = operator_new__(uVar25 & 0xffffffff);
      pvVar5 = (void *)*param_4;
      _memcpy(pvVar9,pvVar5,(ulong)*(uint *)(param_4 + 1));
      if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
        operator_delete__(pvVar5);
        uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
      }
      *param_4 = (long)pvVar9;
      *(int *)(param_4 + 2) = (int)uVar25;
      *(undefined1 *)((long)param_4 + 0x14) = 1;
    }
    uVar18 = (int)uVar19 + uVar24;
    if (*(uint *)(param_4 + 1) < uVar18) {
      *(uint *)(param_4 + 1) = uVar18;
      uVar19 = (ulong)*(uint *)((long)param_4 + 0xc);
    }
    _memcpy((void *)(uVar19 + *param_4),param_1,(ulong)uVar24);
    *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + uVar24;
  }
LAB_10044c4df:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

