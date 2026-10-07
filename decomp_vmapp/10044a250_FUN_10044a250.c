
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044a250(uint3 *param_1,int param_2,int param_3,long *param_4)

{
  uint3 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  void *pvVar13;
  uint3 *puVar14;
  void *pvVar15;
  uint uVar16;
  undefined2 *puVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint3 *puVar21;
  uint3 *puVar22;
  byte bVar23;
  ulong uVar24;
  byte *pbVar25;
  bool bVar26;
  uint3 local_43f0;
  undefined2 local_43ec;
  byte local_43ea;
  undefined1 local_43e8 [8];
  undefined1 local_43e0 [8];
  undefined2 local_43d8;
  byte local_43d6;
  undefined2 local_43d0;
  undefined1 local_43ce;
  undefined2 local_43cc;
  undefined1 local_43ca;
  undefined1 local_43c8 [8];
  undefined2 local_43c0;
  byte local_43be;
  undefined2 local_43b8;
  undefined1 local_43b6 [379];
  byte local_423b [4223];
  undefined2 local_31bc;
  undefined1 auStack_31ba [12670];
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(&local_43b8,0x17d);
  ___bzero(&local_31bc,0x317d);
  _memset(local_423b,0xff,0x107f);
  local_3c = 0;
  iVar4 = param_3 * param_2;
  lVar18 = (long)iVar4 * 3;
  puVar1 = (uint3 *)((long)param_1 + lVar18);
  *(ushort *)((long)param_1 + lVar18) =
       *(byte *)((long)param_1 + lVar18 + -3) ^ 0xff |
       (ushort)(byte)~*(byte *)((long)param_1 + lVar18 + -2) << 8;
  *(byte *)((long)param_1 + lVar18 + 2) = ~*(byte *)((long)param_1 + lVar18 + -1);
  iVar6 = 0;
  iVar10 = 0;
  iVar9 = 0;
  if (0 < iVar4) {
    iVar9 = 0;
    iVar10 = 0;
    iVar6 = 0;
    puVar22 = param_1;
    do {
      local_43be = *(byte *)((long)puVar22 + 2);
      local_43c0 = (undefined2)*puVar22;
      puVar14 = (uint3 *)((long)puVar22 + 3);
      iVar5 = _memcmp(puVar14,&local_43c0,3);
      if (iVar5 == 0) {
        do {
          puVar21 = (uint3 *)((long)puVar22 + 6);
          iVar5 = _memcmp(puVar21,&local_43c0,3);
          puVar22 = puVar14;
          puVar14 = puVar21;
        } while (iVar5 == 0);
        iVar10 = iVar10 + 1;
      }
      else {
        iVar6 = iVar6 + 1;
        puVar21 = puVar14;
      }
      local_43c8[2] = local_43be;
      local_43c8._0_2_ = local_43c0;
      if (iVar9 < 0x7f) {
        uVar24 = (ulong)((uint3)local_43c8._0_3_ & 0xfff ^ (uint)(local_43be >> 1));
        if (local_423b[uVar24] == 0xff) {
          pbVar25 = local_423b + uVar24;
        }
        else {
          pvVar15 = (void *)((long)&local_31bc + uVar24 * 3);
          lVar18 = uVar24 + 0x17d;
          do {
            lVar12 = lVar18;
            iVar5 = _memcmp(pvVar15,local_43c8,3);
            if (iVar5 == 0) goto LAB_10044a52a;
            pvVar15 = (void *)((long)pvVar15 + 3);
            lVar18 = lVar12 + 1;
          } while (local_43b6[lVar12 + -1] != -1);
          pbVar25 = local_43b6 + lVar12 + -1;
          uVar24 = lVar12 - 0x17c;
        }
        *pbVar25 = (byte)iVar9;
        auStack_31ba[uVar24 * 3] = local_43c8[2];
        *(undefined2 *)((long)&local_31bc + uVar24 * 3) = local_43c8._0_2_;
        local_43b6[(long)local_3c * 3] = local_43c8[2];
        *(undefined2 *)(local_43b6 + (long)local_3c * 3 + -2) = local_43c8._0_2_;
        iVar9 = local_3c;
      }
      local_3c = iVar9 + 1;
      iVar9 = local_3c;
LAB_10044a52a:
      puVar22 = puVar21;
    } while (puVar21 < puVar1);
    if (iVar9 == 1) {
      uVar11 = *(uint *)((long)param_4 + 0xc);
      if (*(uint *)(param_4 + 2) < uVar11 + 1) {
        uVar24 = (ulong)((double)(uVar11 + 1) * _DAT_100b42cf8);
        pvVar13 = operator_new__(uVar24 & 0xffffffff);
        pvVar15 = (void *)*param_4;
        _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar15);
          uVar11 = *(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar13;
        *(int *)(param_4 + 2) = (int)uVar24;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      if (*(uint *)(param_4 + 1) < uVar11 + 1) {
        *(uint *)(param_4 + 1) = uVar11 + 1;
        uVar11 = *(uint *)((long)param_4 + 0xc);
      }
      *(undefined1 *)(*param_4 + (ulong)uVar11) = 1;
      iVar6 = *(int *)((long)param_4 + 0xc);
      uVar11 = iVar6 + 1;
      uVar24 = (ulong)uVar11;
      *(uint *)((long)param_4 + 0xc) = uVar11;
      local_43ca = local_43b6[0];
      local_43cc = local_43b8;
      uVar11 = iVar6 + 4;
      if (*(uint *)(param_4 + 2) < uVar11) {
        uVar19 = (ulong)((double)uVar11 * _DAT_100b42cf8);
        pvVar13 = operator_new__(uVar19 & 0xffffffff);
        pvVar15 = (void *)*param_4;
        _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar15);
          uVar24 = (ulong)*(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar13;
        *(int *)(param_4 + 2) = (int)uVar19;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      uVar11 = (int)uVar24 + 3;
      if (*(uint *)(param_4 + 1) < uVar11) {
        *(uint *)(param_4 + 1) = uVar11;
        uVar24 = (ulong)*(uint *)((long)param_4 + 0xc);
      }
      lVar18 = *param_4;
      *(undefined1 *)(lVar18 + 2 + uVar24) = local_43ca;
      *(undefined2 *)(lVar18 + uVar24) = local_43cc;
      *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + 3;
      goto LAB_10044b48f;
    }
  }
  uVar11 = iVar4 * 3;
  uVar7 = (iVar10 + iVar6) * 4;
  bVar26 = (int)uVar7 < (int)uVar11;
  if ((int)uVar11 < (int)uVar7) {
    uVar7 = uVar11;
  }
  if (iVar9 < 0x80) {
    uVar16 = iVar6 + iVar10 * 2 + iVar9 * 3;
    bVar2 = (int)uVar16 < (int)uVar7;
    bVar26 = (int)uVar16 < (int)uVar7 || bVar26;
    if (iVar9 < 0x11) {
      if ((int)uVar16 <= (int)uVar7) {
        uVar7 = uVar16;
      }
      iVar6 = *(int *)((long)&PTR___mh_execute_header_100b42d70 + (long)(iVar9 + -1) * 4) * iVar4;
      iVar6 = ((int)(((uint)(iVar6 >> 0x1f) >> 0x1d) + iVar6) >> 3) + iVar9 * 3;
      bVar2 = iVar6 < (int)uVar7 || bVar2;
      bVar26 = (int)uVar7 <= iVar6 && bVar26;
    }
    bVar3 = true;
    if (!bVar2) goto LAB_10044a67c;
  }
  else {
LAB_10044a67c:
    local_3c = 0;
    iVar9 = 0;
    bVar3 = false;
  }
  uVar7 = *(uint *)((long)param_4 + 0xc);
  if (*(uint *)(param_4 + 2) < uVar7 + 1) {
    uVar24 = (ulong)((double)(uVar7 + 1) * _DAT_100b42cf8);
    pvVar13 = operator_new__(uVar24 & 0xffffffff);
    pvVar15 = (void *)*param_4;
    _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
    if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
      operator_delete__(pvVar15);
      uVar7 = *(uint *)((long)param_4 + 0xc);
    }
    *param_4 = (long)pvVar13;
    *(int *)(param_4 + 2) = (int)uVar24;
    *(undefined1 *)((long)param_4 + 0x14) = 1;
  }
  if (*(uint *)(param_4 + 1) < uVar7 + 1) {
    *(uint *)(param_4 + 1) = uVar7 + 1;
    uVar7 = *(uint *)((long)param_4 + 0xc);
  }
  *(byte *)(*param_4 + (ulong)uVar7) = bVar26 << 7 | (byte)iVar9;
  uVar7 = *(int *)((long)param_4 + 0xc) + 1;
  *(uint *)((long)param_4 + 0xc) = uVar7;
  if (0 < iVar9) {
    lVar18 = 0;
    puVar17 = &local_43b8;
    do {
      local_43ce = *(undefined1 *)(puVar17 + 1);
      local_43d0 = *puVar17;
      if (*(uint *)(param_4 + 2) < uVar7 + 3) {
        uVar24 = (ulong)((double)(uVar7 + 3) * _DAT_100b42cf8);
        pvVar13 = operator_new__(uVar24 & 0xffffffff);
        pvVar15 = (void *)*param_4;
        _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar15);
          uVar7 = *(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar13;
        *(int *)(param_4 + 2) = (int)uVar24;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      if (*(uint *)(param_4 + 1) < uVar7 + 3) {
        *(uint *)(param_4 + 1) = uVar7 + 3;
      }
      lVar12 = *param_4;
      *(undefined1 *)(lVar12 + 2 + (ulong)uVar7) = local_43ce;
      *(undefined2 *)(lVar12 + (ulong)uVar7) = local_43d0;
      uVar7 = *(int *)((long)param_4 + 0xc) + 3;
      *(uint *)((long)param_4 + 0xc) = uVar7;
      lVar18 = lVar18 + 1;
      puVar17 = (undefined2 *)((long)puVar17 + 3);
    } while (lVar18 < iVar9);
  }
  if (bVar26) {
    local_43d6 = 0;
    local_43d8 = 0;
    if (0 < iVar4) {
      do {
        local_43d6 = *(byte *)((long)param_1 + 2);
        local_43d8 = (undefined2)*param_1;
        puVar22 = param_1;
        do {
          puVar22 = (uint3 *)((long)puVar22 + 3);
          iVar6 = _memcmp(puVar22,&local_43d8,3);
          if (iVar6 != 0) break;
        } while (puVar22 < puVar1);
        iVar6 = ((int)puVar22 - (int)param_1) * -0x55555555;
        if (iVar6 < 3 && bVar3) {
          local_43e0[2] = local_43d6;
          local_43e0._0_2_ = local_43d8;
          uVar11 = (uint3)local_43e0._0_3_ & 0xfff ^ (uint)(local_43d6 >> 1);
          bVar23 = local_423b[uVar11];
          if (bVar23 == 0xff) {
            bVar23 = 0xff;
          }
          else {
            pvVar15 = (void *)((long)&local_31bc + (ulong)uVar11 * 3);
            pbVar25 = local_423b + (ulong)uVar11 + 1;
            do {
              iVar10 = _memcmp(pvVar15,local_43e0,3);
              if (iVar10 == 0) goto LAB_10044aed6;
              bVar23 = *pbVar25;
              pvVar15 = (void *)((long)pvVar15 + 3);
              pbVar25 = pbVar25 + 1;
            } while (bVar23 != 0xff);
            bVar23 = 0xff;
          }
LAB_10044aed6:
          if (iVar6 == 2) {
            if (*(uint *)(param_4 + 2) < uVar7 + 1) {
              uVar24 = (ulong)((double)(uVar7 + 1) * _DAT_100b42cf8);
              pvVar13 = operator_new__(uVar24 & 0xffffffff);
              pvVar15 = (void *)*param_4;
              _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar15);
                uVar7 = *(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar13;
              *(int *)(param_4 + 2) = (int)uVar24;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            if (*(uint *)(param_4 + 1) < uVar7 + 1) {
              *(uint *)(param_4 + 1) = uVar7 + 1;
            }
            *(byte *)(*param_4 + (ulong)uVar7) = bVar23;
            uVar7 = *(int *)((long)param_4 + 0xc) + 1;
            *(uint *)((long)param_4 + 0xc) = uVar7;
          }
          if (*(uint *)(param_4 + 2) < uVar7 + 1) {
            uVar24 = (ulong)((double)(uVar7 + 1) * _DAT_100b42cf8);
            pvVar13 = operator_new__(uVar24 & 0xffffffff);
            pvVar15 = (void *)*param_4;
            _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
            if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
              operator_delete__(pvVar15);
              uVar7 = *(uint *)((long)param_4 + 0xc);
            }
            *param_4 = (long)pvVar13;
            *(int *)(param_4 + 2) = (int)uVar24;
            *(undefined1 *)((long)param_4 + 0x14) = 1;
          }
          if (*(uint *)(param_4 + 1) < uVar7 + 1) {
            *(uint *)(param_4 + 1) = uVar7 + 1;
          }
          *(byte *)(*param_4 + (ulong)uVar7) = bVar23;
        }
        else {
          if (bVar3) {
            local_43e8[2] = local_43d6;
            local_43e8._0_2_ = local_43d8;
            uVar11 = (uint3)local_43e8._0_3_ & 0xfff ^ (uint)(local_43d6 >> 1);
            bVar23 = local_423b[uVar11];
            if (bVar23 == 0xff) {
              bVar23 = 0xff;
            }
            else {
              pvVar15 = (void *)((long)&local_31bc + (ulong)uVar11 * 3);
              pbVar25 = local_423b + (ulong)uVar11 + 1;
              do {
                iVar10 = _memcmp(pvVar15,local_43e8,3);
                if (iVar10 == 0) goto LAB_10044af6b;
                bVar23 = *pbVar25;
                pvVar15 = (void *)((long)pvVar15 + 3);
                pbVar25 = pbVar25 + 1;
              } while (bVar23 != 0xff);
              bVar23 = 0xff;
            }
LAB_10044af6b:
            if (*(uint *)(param_4 + 2) < uVar7 + 1) {
              uVar24 = (ulong)((double)(uVar7 + 1) * _DAT_100b42cf8);
              pvVar13 = operator_new__(uVar24 & 0xffffffff);
              pvVar15 = (void *)*param_4;
              _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar15);
                uVar7 = *(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar13;
              *(int *)(param_4 + 2) = (int)uVar24;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            if (*(uint *)(param_4 + 1) < uVar7 + 1) {
              *(uint *)(param_4 + 1) = uVar7 + 1;
            }
            *(byte *)(*param_4 + (ulong)uVar7) = bVar23 | 0x80;
            uVar11 = *(int *)((long)param_4 + 0xc) + 1;
          }
          else {
            local_43ea = local_43d6;
            local_43ec = local_43d8;
            if (*(uint *)(param_4 + 2) < uVar7 + 3) {
              uVar24 = (ulong)((double)(uVar7 + 3) * _DAT_100b42cf8);
              pvVar13 = operator_new__(uVar24 & 0xffffffff);
              pvVar15 = (void *)*param_4;
              _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar15);
                uVar7 = *(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar13;
              *(int *)(param_4 + 2) = (int)uVar24;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            if (*(uint *)(param_4 + 1) < uVar7 + 3) {
              *(uint *)(param_4 + 1) = uVar7 + 3;
            }
            lVar18 = *param_4;
            *(byte *)(lVar18 + 2 + (ulong)uVar7) = local_43ea;
            *(undefined2 *)(lVar18 + (ulong)uVar7) = local_43ec;
            uVar11 = *(int *)((long)param_4 + 0xc) + 3;
          }
          *(uint *)((long)param_4 + 0xc) = uVar11;
          uVar16 = iVar6 - 1;
          uVar7 = uVar16;
          if (0xfe < (int)uVar16) {
            uVar7 = (iVar6 - 0x100U) % 0xff;
            do {
              if (*(uint *)(param_4 + 2) < uVar11 + 1) {
                uVar24 = (ulong)((double)(uVar11 + 1) * _DAT_100b42cf8);
                pvVar13 = operator_new__(uVar24 & 0xffffffff);
                pvVar15 = (void *)*param_4;
                _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
                if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                  operator_delete__(pvVar15);
                  uVar11 = *(uint *)((long)param_4 + 0xc);
                }
                *param_4 = (long)pvVar13;
                *(int *)(param_4 + 2) = (int)uVar24;
                *(undefined1 *)((long)param_4 + 0x14) = 1;
              }
              if (*(uint *)(param_4 + 1) < uVar11 + 1) {
                *(uint *)(param_4 + 1) = uVar11 + 1;
              }
              *(undefined1 *)(*param_4 + (ulong)uVar11) = 0xff;
              uVar11 = *(int *)((long)param_4 + 0xc) + 1;
              *(uint *)((long)param_4 + 0xc) = uVar11;
              uVar16 = uVar16 - 0xff;
            } while (0xfe < (int)uVar16);
          }
          if (*(uint *)(param_4 + 2) < uVar11 + 1) {
            uVar24 = (ulong)((double)(uVar11 + 1) * _DAT_100b42cf8);
            pvVar13 = operator_new__(uVar24 & 0xffffffff);
            pvVar15 = (void *)*param_4;
            _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
            if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
              operator_delete__(pvVar15);
              uVar11 = *(uint *)((long)param_4 + 0xc);
            }
            *param_4 = (long)pvVar13;
            *(int *)(param_4 + 2) = (int)uVar24;
            *(undefined1 *)((long)param_4 + 0x14) = 1;
          }
          if (*(uint *)(param_4 + 1) < uVar11 + 1) {
            *(uint *)(param_4 + 1) = uVar11 + 1;
          }
          *(char *)(*param_4 + (ulong)uVar11) = (char)uVar7;
        }
        uVar7 = *(int *)((long)param_4 + 0xc) + 1;
        *(uint *)((long)param_4 + 0xc) = uVar7;
        param_1 = puVar22;
      } while (puVar22 < puVar1);
    }
  }
  else if (bVar3) {
    if (0 < param_3) {
      iVar6 = *(int *)((long)&PTR___mh_execute_header_100b42d70 + (long)(iVar9 + -1) * 4);
      iVar10 = 0;
      do {
        if (0 < param_2) {
          puVar1 = (uint3 *)((long)param_1 + (long)param_2 * 3);
          puVar22 = (uint3 *)((long)param_1 + 3U);
          if ((uint3 *)((long)param_1 + 3U) < puVar1) {
            puVar22 = puVar1;
          }
          uVar11 = 0;
          uVar16 = 0;
          puVar14 = param_1;
          do {
            local_43f0 = *puVar14;
            uVar8 = local_43f0 & 0xfff ^ (uint)(local_43f0 >> 0x11);
            bVar23 = local_423b[uVar8];
            if (bVar23 == 0xff) {
              uVar8 = 0xff;
            }
            else {
              pvVar15 = (void *)((long)&local_31bc + (ulong)uVar8 * 3);
              pbVar25 = local_423b + (ulong)uVar8 + 1;
              do {
                uVar8 = (uint)bVar23;
                iVar9 = _memcmp(pvVar15,&local_43f0,3);
                if (iVar9 == 0) goto LAB_10044aa1a;
                bVar23 = *pbVar25;
                pvVar15 = (void *)((long)pvVar15 + 3);
                pbVar25 = pbVar25 + 1;
              } while (bVar23 != 0xff);
              uVar8 = 0xff;
            }
LAB_10044aa1a:
            puVar14 = (uint3 *)((long)puVar14 + 3);
            uVar20 = (uVar11 & 0xff) << ((byte)iVar6 & 0x1f);
            uVar11 = uVar20 | uVar8;
            uVar16 = (uVar16 & 0xff) + iVar6;
            if (7 < (uVar16 & 0xf8)) {
              if (*(uint *)(param_4 + 2) < uVar7 + 1) {
                uVar24 = (ulong)((double)(uVar7 + 1) * _DAT_100b42cf8);
                pvVar13 = operator_new__(uVar24 & 0xffffffff);
                pvVar15 = (void *)*param_4;
                _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
                if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                  operator_delete__(pvVar15);
                  uVar7 = *(uint *)((long)param_4 + 0xc);
                }
                *param_4 = (long)pvVar13;
                *(int *)(param_4 + 2) = (int)uVar24;
                *(undefined1 *)((long)param_4 + 0x14) = 1;
              }
              if (*(uint *)(param_4 + 1) < uVar7 + 1) {
                *(uint *)(param_4 + 1) = uVar7 + 1;
              }
              *(char *)(*param_4 + (ulong)uVar7) = (char)uVar11;
              uVar7 = *(int *)((long)param_4 + 0xc) + 1;
              *(uint *)((long)param_4 + 0xc) = uVar7;
              uVar16 = 0;
            }
          } while (puVar14 < puVar1);
          param_1 = (uint3 *)((long)param_1 + ((~(ulong)param_1 + (long)puVar22) / 3) * 3 + 3);
          if ((char)uVar16 != '\0') {
            if (*(uint *)(param_4 + 2) < uVar7 + 1) {
              uVar24 = (ulong)((double)(uVar7 + 1) * _DAT_100b42cf8);
              pvVar13 = operator_new__(uVar24 & 0xffffffff);
              pvVar15 = (void *)*param_4;
              _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar15);
                uVar7 = *(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar13;
              *(int *)(param_4 + 2) = (int)uVar24;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            if (*(uint *)(param_4 + 1) < uVar7 + 1) {
              *(uint *)(param_4 + 1) = uVar7 + 1;
            }
            *(char *)(*param_4 + (ulong)uVar7) =
                 (char)((uVar20 & 0xff | uVar8) << (8U - (char)uVar16 & 0x1f));
            uVar7 = *(int *)((long)param_4 + 0xc) + 1;
            *(uint *)((long)param_4 + 0xc) = uVar7;
          }
        }
        bVar26 = iVar10 != param_3 + -1;
        iVar10 = iVar10 + 1;
      } while (bVar26);
    }
  }
  else {
    if (*(uint *)(param_4 + 2) < uVar7 + uVar11) {
      uVar24 = (ulong)((double)(uVar7 + uVar11) * _DAT_100b42cf8);
      pvVar13 = operator_new__(uVar24 & 0xffffffff);
      pvVar15 = (void *)*param_4;
      _memcpy(pvVar13,pvVar15,(ulong)*(uint *)(param_4 + 1));
      if ((pvVar15 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
        operator_delete__(pvVar15);
        uVar7 = *(uint *)((long)param_4 + 0xc);
      }
      *param_4 = (long)pvVar13;
      *(int *)(param_4 + 2) = (int)uVar24;
      *(undefined1 *)((long)param_4 + 0x14) = 1;
    }
    if (*(uint *)(param_4 + 1) < uVar7 + uVar11) {
      *(uint *)(param_4 + 1) = uVar7 + uVar11;
      uVar7 = *(uint *)((long)param_4 + 0xc);
    }
    _memcpy((void *)((ulong)uVar7 + *param_4),param_1,(ulong)uVar11);
    *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + uVar11;
  }
LAB_10044b48f:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

