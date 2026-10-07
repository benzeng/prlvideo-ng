
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004491e0(uint *param_1,int param_2,int param_3,long *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  void *pvVar11;
  uint *puVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  byte bVar24;
  int iVar25;
  bool bVar26;
  undefined4 local_54b8;
  byte local_52bc [4224];
  uint auStack_423c [4223];
  int local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  _memset(local_52bc,0xff,0x107f);
  local_40 = 0;
  iVar7 = param_3 * param_2;
  puVar3 = param_1 + iVar7;
  param_1[iVar7] = ~param_1[(long)iVar7 + -1];
  iVar25 = 0;
  if (iVar7 < 1) {
    iVar22 = 0;
    iVar21 = 0;
  }
  else {
    iVar21 = 0;
    iVar22 = 0;
    puVar12 = param_1;
    do {
      uVar9 = *puVar12;
      puVar16 = puVar12 + 1;
      if (puVar12[1] == uVar9) {
        do {
          puVar1 = puVar12 + 2;
          puVar2 = puVar12 + 2;
          puVar12 = puVar16;
          puVar16 = puVar2;
        } while (*puVar1 == uVar9);
        iVar21 = iVar21 + 1;
      }
      else {
        iVar22 = iVar22 + 1;
      }
      if (iVar25 < 0x7f) {
        uVar8 = uVar9 >> 0x11 ^ uVar9;
        uVar18 = (ulong)(uVar8 & 0xfff);
        if (local_52bc[uVar18] == 0xff) {
          pbVar17 = local_52bc + uVar18;
        }
        else {
          lVar19 = (ulong)((uVar8 & 0xfff) + 1) + 0x1fb;
          uVar20 = uVar18;
          do {
            lVar10 = lVar19;
            if (auStack_423c[uVar20] == uVar9) goto LAB_100449364;
            uVar8 = (int)uVar18 + 1;
            uVar18 = (ulong)uVar8;
            uVar20 = (ulong)(int)uVar8;
            lVar19 = lVar10 + 1;
          } while (*(char *)((long)&local_54b8 + lVar10 + 1) != -1);
          pbVar17 = (byte *)((long)&local_54b8 + lVar10 + 1);
          uVar18 = lVar10 - 0x1fb;
        }
        *pbVar17 = (byte)iVar25;
        auStack_423c[uVar18] = uVar9;
        (&local_54b8)[local_40] = uVar9;
        iVar25 = local_40;
      }
      local_40 = iVar25 + 1;
      iVar25 = local_40;
LAB_100449364:
      puVar12 = puVar16;
    } while (puVar16 < puVar3);
    if (iVar25 == 1) {
      uVar9 = *(uint *)((long)param_4 + 0xc);
      if (*(uint *)(param_4 + 2) < uVar9 + 1) {
        uVar18 = (ulong)((double)(uVar9 + 1) * _DAT_100b42cf8);
        pvVar11 = operator_new__(uVar18 & 0xffffffff);
        pvVar5 = (void *)*param_4;
        _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar5);
          uVar9 = *(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar11;
        *(int *)(param_4 + 2) = (int)uVar18;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      if (*(uint *)(param_4 + 1) < uVar9 + 1) {
        *(uint *)(param_4 + 1) = uVar9 + 1;
        uVar9 = *(uint *)((long)param_4 + 0xc);
      }
      *(undefined1 *)(*param_4 + (ulong)uVar9) = 1;
      iVar25 = *(int *)((long)param_4 + 0xc);
      uVar9 = iVar25 + 1;
      uVar18 = (ulong)uVar9;
      *(uint *)((long)param_4 + 0xc) = uVar9;
      uVar9 = iVar25 + 5;
      if (*(uint *)(param_4 + 2) < uVar9) {
        uVar20 = (ulong)((double)uVar9 * _DAT_100b42cf8);
        pvVar11 = operator_new__(uVar20 & 0xffffffff);
        pvVar5 = (void *)*param_4;
        _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar5);
          uVar18 = (ulong)*(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar11;
        *(int *)(param_4 + 2) = (int)uVar20;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      uVar9 = (int)uVar18 + 4;
      if (*(uint *)(param_4 + 1) < uVar9) {
        *(uint *)(param_4 + 1) = uVar9;
        uVar18 = (ulong)*(uint *)((long)param_4 + 0xc);
      }
      *(undefined4 *)(*param_4 + uVar18) = local_54b8;
      *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + 4;
      goto LAB_10044a221;
    }
  }
  uVar8 = iVar7 * 4;
  uVar9 = (iVar21 + iVar22) * 5;
  bVar26 = (int)uVar9 < (int)uVar8;
  if ((int)uVar8 < (int)uVar9) {
    uVar9 = uVar8;
  }
  if (iVar25 < 0x80) {
    uVar14 = iVar22 + iVar21 * 2 + iVar25 * 4;
    bVar13 = (int)uVar14 < (int)uVar9;
    bVar26 = (int)uVar14 < (int)uVar9 || bVar26;
    if (iVar25 < 0x11) {
      if ((int)uVar14 <= (int)uVar9) {
        uVar9 = uVar14;
      }
      iVar21 = *(int *)((long)&PTR___mh_execute_header_100b42d70 + (long)(iVar25 + -1) * 4) * iVar7;
      iVar21 = ((int)(((uint)(iVar21 >> 0x1f) >> 0x1d) + iVar21) >> 3) + iVar25 * 4;
      bVar13 = iVar21 < (int)uVar9 || bVar13;
      bVar26 = (int)uVar9 <= iVar21 && bVar26;
    }
    bVar6 = true;
    if (!bVar13) goto LAB_1004494a4;
  }
  else {
LAB_1004494a4:
    local_40 = 0;
    iVar25 = 0;
    bVar6 = false;
  }
  uVar18 = (ulong)*(uint *)((long)param_4 + 0xc);
  uVar9 = *(uint *)((long)param_4 + 0xc) + 1;
  if (*(uint *)(param_4 + 2) < uVar9) {
    uVar20 = (ulong)((double)uVar9 * _DAT_100b42cf8);
    pvVar11 = operator_new__(uVar20 & 0xffffffff);
    pvVar5 = (void *)*param_4;
    _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
    if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
      operator_delete__(pvVar5);
      uVar18 = (ulong)*(uint *)((long)param_4 + 0xc);
    }
    *param_4 = (long)pvVar11;
    *(int *)(param_4 + 2) = (int)uVar20;
    *(undefined1 *)((long)param_4 + 0x14) = 1;
  }
  uVar9 = (int)uVar18 + 1;
  if (*(uint *)(param_4 + 1) < uVar9) {
    *(uint *)(param_4 + 1) = uVar9;
    uVar18 = (ulong)*(uint *)((long)param_4 + 0xc);
  }
  *(byte *)(*param_4 + uVar18) = bVar26 << 7 | (byte)iVar25;
  uVar9 = *(int *)((long)param_4 + 0xc) + 1;
  *(uint *)((long)param_4 + 0xc) = uVar9;
  if (0 < iVar25) {
    lVar19 = 0;
    do {
      uVar4 = (&local_54b8)[lVar19];
      if (*(uint *)(param_4 + 2) < uVar9 + 4) {
        uVar18 = (ulong)((double)(uVar9 + 4) * _DAT_100b42cf8);
        pvVar11 = operator_new__(uVar18 & 0xffffffff);
        pvVar5 = (void *)*param_4;
        _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar5);
          uVar9 = *(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar11;
        *(int *)(param_4 + 2) = (int)uVar18;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      if (*(uint *)(param_4 + 1) < uVar9 + 4) {
        *(uint *)(param_4 + 1) = uVar9 + 4;
      }
      *(undefined4 *)(*param_4 + (ulong)uVar9) = uVar4;
      uVar9 = *(int *)((long)param_4 + 0xc) + 4;
      *(uint *)((long)param_4 + 0xc) = uVar9;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar25);
  }
  if (bVar26) {
    if (0 < iVar7) {
      do {
        uVar8 = *param_1;
        puVar12 = param_1;
        do {
          puVar12 = puVar12 + 1;
          if (*puVar12 != uVar8) break;
        } while (puVar12 < puVar3);
        iVar25 = (int)((ulong)((long)puVar12 - (long)param_1) >> 2);
        if (iVar25 < 3 && bVar6) {
          uVar14 = uVar8 >> 0x11 ^ uVar8;
          uVar23 = uVar14 & 0xfff;
          uVar18 = (ulong)uVar23;
          bVar24 = local_52bc[uVar18];
          if (bVar24 == 0xff) {
            bVar24 = 0xff;
          }
          else {
            pbVar17 = local_52bc + ((uVar14 & 0xfff) + 1);
            do {
              if (auStack_423c[uVar18] == uVar8) goto LAB_100449bfd;
              uVar23 = uVar23 + 1;
              uVar18 = (ulong)(int)uVar23;
              bVar24 = *pbVar17;
              pbVar17 = pbVar17 + 1;
            } while (bVar24 != 0xff);
            bVar24 = 0xff;
          }
LAB_100449bfd:
          if (iVar25 == 2) {
            if (*(uint *)(param_4 + 2) < uVar9 + 1) {
              uVar18 = (ulong)((double)(uVar9 + 1) * _DAT_100b42cf8);
              pvVar11 = operator_new__(uVar18 & 0xffffffff);
              pvVar5 = (void *)*param_4;
              _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar5);
                uVar9 = *(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar11;
              *(int *)(param_4 + 2) = (int)uVar18;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            if (*(uint *)(param_4 + 1) < uVar9 + 1) {
              *(uint *)(param_4 + 1) = uVar9 + 1;
            }
            *(byte *)(*param_4 + (ulong)uVar9) = bVar24;
            uVar9 = *(int *)((long)param_4 + 0xc) + 1;
            *(uint *)((long)param_4 + 0xc) = uVar9;
          }
          if (*(uint *)(param_4 + 2) < uVar9 + 1) {
            uVar18 = (ulong)((double)(uVar9 + 1) * _DAT_100b42cf8);
            pvVar11 = operator_new__(uVar18 & 0xffffffff);
            pvVar5 = (void *)*param_4;
            _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
            if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
              operator_delete__(pvVar5);
              uVar9 = *(uint *)((long)param_4 + 0xc);
            }
            *param_4 = (long)pvVar11;
            *(int *)(param_4 + 2) = (int)uVar18;
            *(undefined1 *)((long)param_4 + 0x14) = 1;
          }
          if (*(uint *)(param_4 + 1) < uVar9 + 1) {
            *(uint *)(param_4 + 1) = uVar9 + 1;
          }
          *(byte *)(*param_4 + (ulong)uVar9) = bVar24;
        }
        else {
          if (bVar6) {
            uVar14 = uVar8 >> 0x11 ^ uVar8;
            uVar23 = uVar14 & 0xfff;
            uVar18 = (ulong)uVar23;
            bVar24 = local_52bc[uVar18];
            if (bVar24 == 0xff) {
              bVar24 = 0xff;
            }
            else {
              pbVar17 = local_52bc + ((uVar14 & 0xfff) + 1);
              do {
                if (auStack_423c[uVar18] == uVar8) goto LAB_100449c8b;
                uVar23 = uVar23 + 1;
                uVar18 = (ulong)(int)uVar23;
                bVar24 = *pbVar17;
                pbVar17 = pbVar17 + 1;
              } while (bVar24 != 0xff);
              bVar24 = 0xff;
            }
LAB_100449c8b:
            if (*(uint *)(param_4 + 2) < uVar9 + 1) {
              uVar18 = (ulong)((double)(uVar9 + 1) * _DAT_100b42cf8);
              pvVar11 = operator_new__(uVar18 & 0xffffffff);
              pvVar5 = (void *)*param_4;
              _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar5);
                uVar9 = *(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar11;
              *(int *)(param_4 + 2) = (int)uVar18;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            if (*(uint *)(param_4 + 1) < uVar9 + 1) {
              *(uint *)(param_4 + 1) = uVar9 + 1;
            }
            *(byte *)(*param_4 + (ulong)uVar9) = bVar24 | 0x80;
            uVar9 = *(int *)((long)param_4 + 0xc) + 1;
          }
          else {
            if (*(uint *)(param_4 + 2) < uVar9 + 4) {
              uVar18 = (ulong)((double)(uVar9 + 4) * _DAT_100b42cf8);
              pvVar11 = operator_new__(uVar18 & 0xffffffff);
              pvVar5 = (void *)*param_4;
              _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar5);
                uVar9 = *(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar11;
              *(int *)(param_4 + 2) = (int)uVar18;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            if (*(uint *)(param_4 + 1) < uVar9 + 4) {
              *(uint *)(param_4 + 1) = uVar9 + 4;
            }
            *(uint *)(*param_4 + (ulong)uVar9) = uVar8;
            uVar9 = *(int *)((long)param_4 + 0xc) + 4;
          }
          *(uint *)((long)param_4 + 0xc) = uVar9;
          uVar14 = iVar25 - 1;
          uVar8 = uVar14;
          if (0xfe < (int)uVar14) {
            uVar8 = (iVar25 - 0x100U) % 0xff;
            do {
              if (*(uint *)(param_4 + 2) < uVar9 + 1) {
                uVar18 = (ulong)((double)(uVar9 + 1) * _DAT_100b42cf8);
                pvVar11 = operator_new__(uVar18 & 0xffffffff);
                pvVar5 = (void *)*param_4;
                _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
                if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                  operator_delete__(pvVar5);
                  uVar9 = *(uint *)((long)param_4 + 0xc);
                }
                *param_4 = (long)pvVar11;
                *(int *)(param_4 + 2) = (int)uVar18;
                *(undefined1 *)((long)param_4 + 0x14) = 1;
              }
              if (*(uint *)(param_4 + 1) < uVar9 + 1) {
                *(uint *)(param_4 + 1) = uVar9 + 1;
              }
              *(undefined1 *)(*param_4 + (ulong)uVar9) = 0xff;
              uVar9 = *(int *)((long)param_4 + 0xc) + 1;
              *(uint *)((long)param_4 + 0xc) = uVar9;
              uVar14 = uVar14 - 0xff;
            } while (0xfe < (int)uVar14);
          }
          if (*(uint *)(param_4 + 2) < uVar9 + 1) {
            uVar18 = (ulong)((double)(uVar9 + 1) * _DAT_100b42cf8);
            pvVar11 = operator_new__(uVar18 & 0xffffffff);
            pvVar5 = (void *)*param_4;
            _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
            if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
              operator_delete__(pvVar5);
              uVar9 = *(uint *)((long)param_4 + 0xc);
            }
            *param_4 = (long)pvVar11;
            *(int *)(param_4 + 2) = (int)uVar18;
            *(undefined1 *)((long)param_4 + 0x14) = 1;
          }
          if (*(uint *)(param_4 + 1) < uVar9 + 1) {
            *(uint *)(param_4 + 1) = uVar9 + 1;
          }
          *(char *)(*param_4 + (ulong)uVar9) = (char)uVar8;
        }
        uVar9 = *(int *)((long)param_4 + 0xc) + 1;
        *(uint *)((long)param_4 + 0xc) = uVar9;
        param_1 = puVar12;
      } while (puVar12 < puVar3);
    }
  }
  else if (bVar6) {
    if (0 < param_3) {
      iVar25 = *(int *)((long)&PTR___mh_execute_header_100b42d70 + (long)(iVar25 + -1) * 4);
      iVar7 = 0;
      do {
        if (0 < param_2) {
          puVar3 = param_1 + param_2;
          puVar12 = param_1 + 1;
          if (param_1 + 1 < puVar3) {
            puVar12 = puVar3;
          }
          uVar14 = 0;
          uVar8 = 0;
          puVar16 = param_1;
          do {
            uVar23 = *puVar16;
            uVar15 = uVar23 >> 0x11 ^ uVar23;
            uVar18 = (ulong)(uVar15 & 0xfff);
            bVar24 = local_52bc[uVar18];
            if (bVar24 == 0xff) {
              uVar15 = 0xff;
            }
            else {
              pbVar17 = local_52bc + ((uVar15 & 0xfff) + 1);
              uVar20 = uVar18;
              do {
                uVar15 = (uint)bVar24;
                if (auStack_423c[uVar20] == uVar23) goto LAB_1004497f3;
                uVar15 = (int)uVar18 + 1;
                uVar18 = (ulong)uVar15;
                uVar20 = (ulong)(int)uVar15;
                bVar24 = *pbVar17;
                pbVar17 = pbVar17 + 1;
              } while (bVar24 != 0xff);
              uVar15 = 0xff;
            }
LAB_1004497f3:
            puVar16 = puVar16 + 1;
            uVar23 = (uVar14 & 0xff) << ((byte)iVar25 & 0x1f);
            uVar14 = uVar23 | uVar15;
            uVar8 = (uVar8 & 0xff) + iVar25;
            if (7 < (uVar8 & 0xf8)) {
              if (*(uint *)(param_4 + 2) < uVar9 + 1) {
                uVar18 = (ulong)((double)(uVar9 + 1) * _DAT_100b42cf8);
                pvVar11 = operator_new__(uVar18 & 0xffffffff);
                pvVar5 = (void *)*param_4;
                _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
                if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                  operator_delete__(pvVar5);
                  uVar9 = *(uint *)((long)param_4 + 0xc);
                }
                *param_4 = (long)pvVar11;
                *(int *)(param_4 + 2) = (int)uVar18;
                *(undefined1 *)((long)param_4 + 0x14) = 1;
              }
              if (*(uint *)(param_4 + 1) < uVar9 + 1) {
                *(uint *)(param_4 + 1) = uVar9 + 1;
              }
              *(char *)(*param_4 + (ulong)uVar9) = (char)uVar14;
              uVar9 = *(int *)((long)param_4 + 0xc) + 1;
              *(uint *)((long)param_4 + 0xc) = uVar9;
              uVar8 = 0;
            }
          } while (puVar16 < puVar3);
          param_1 = (uint *)((long)param_1 +
                            (~(ulong)param_1 + (long)puVar12 & 0xfffffffffffffffc) + 4);
          if ((char)uVar8 != '\0') {
            if (*(uint *)(param_4 + 2) < uVar9 + 1) {
              uVar18 = (ulong)((double)(uVar9 + 1) * _DAT_100b42cf8);
              pvVar11 = operator_new__(uVar18 & 0xffffffff);
              pvVar5 = (void *)*param_4;
              _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar5);
                uVar9 = *(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar11;
              *(int *)(param_4 + 2) = (int)uVar18;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            if (*(uint *)(param_4 + 1) < uVar9 + 1) {
              *(uint *)(param_4 + 1) = uVar9 + 1;
            }
            *(char *)(*param_4 + (ulong)uVar9) =
                 (char)((uVar23 & 0xff | uVar15) << (8U - (char)uVar8 & 0x1f));
            uVar9 = *(int *)((long)param_4 + 0xc) + 1;
            *(uint *)((long)param_4 + 0xc) = uVar9;
          }
        }
        bVar26 = iVar7 != param_3 + -1;
        iVar7 = iVar7 + 1;
      } while (bVar26);
    }
  }
  else {
    if (*(uint *)(param_4 + 2) < uVar9 + uVar8) {
      uVar18 = (ulong)((double)(uVar9 + uVar8) * _DAT_100b42cf8);
      pvVar11 = operator_new__(uVar18 & 0xffffffff);
      pvVar5 = (void *)*param_4;
      _memcpy(pvVar11,pvVar5,(ulong)*(uint *)(param_4 + 1));
      if ((pvVar5 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
        operator_delete__(pvVar5);
        uVar9 = *(uint *)((long)param_4 + 0xc);
      }
      *param_4 = (long)pvVar11;
      *(int *)(param_4 + 2) = (int)uVar18;
      *(undefined1 *)((long)param_4 + 0x14) = 1;
    }
    if (*(uint *)(param_4 + 1) < uVar9 + uVar8) {
      *(uint *)(param_4 + 1) = uVar9 + uVar8;
      uVar9 = *(uint *)((long)param_4 + 0xc);
    }
    _memcpy((void *)((ulong)uVar9 + *param_4),param_1,(ulong)uVar8);
    *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + uVar8;
  }
LAB_10044a221:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

