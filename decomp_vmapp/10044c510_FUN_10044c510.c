
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044c510(byte *param_1,int param_2,int param_3,long *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  bool bVar22;
  ulong local_21d0;
  byte local_21c0 [127];
  byte local_2141 [4223];
  byte abStack_10c2 [4226];
  int local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  _memset(local_2141,0xff,0x107f);
  local_40 = 0;
  uVar20 = param_3 * param_2;
  pbVar2 = param_1 + (int)uVar20;
  param_1[(int)uVar20] = ~param_1[(long)(int)uVar20 + -1];
  if ((int)uVar20 < 1) {
    iVar17 = 0;
    bVar22 = 0 < (int)uVar20;
    uVar6 = uVar20;
    if (0 < (int)uVar20) {
      uVar6 = 0;
    }
    iVar18 = 0;
    iVar19 = 0;
LAB_10044c74e:
    uVar10 = iVar19 + iVar18 * 2 + iVar17;
    bVar8 = (int)uVar10 < (int)uVar6;
    bVar5 = true;
    if ((int)uVar6 <= (int)uVar10) {
      bVar5 = bVar22;
    }
    bVar22 = bVar5;
    if (iVar17 < 0x11) {
      if ((int)uVar10 <= (int)uVar6) {
        uVar6 = uVar10;
      }
      iVar18 = *(int *)((long)&PTR___mh_execute_header_100b42d70 + (long)(iVar17 + -1) * 4) * uVar20
      ;
      iVar18 = ((int)(((uint)(iVar18 >> 0x1f) >> 0x1d) + iVar18) >> 3) + iVar17;
      bVar8 = iVar18 < (int)uVar6 || bVar8;
      bVar22 = false;
      if ((int)uVar6 <= iVar18) {
        bVar22 = bVar5;
      }
    }
    bVar5 = true;
    if (!bVar8) goto LAB_10044c7bc;
  }
  else {
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    pbVar16 = param_1;
    do {
      bVar3 = *pbVar16;
      uVar15 = (ulong)bVar3;
      pbVar13 = pbVar16 + 1;
      uVar6 = (uint)bVar3;
      if (pbVar16[1] == uVar6) {
        do {
          pbVar1 = pbVar16 + 2;
          pbVar12 = pbVar16 + 2;
          pbVar16 = pbVar13;
          pbVar13 = pbVar12;
        } while (*pbVar1 == bVar3);
        iVar18 = iVar18 + 1;
      }
      else {
        iVar19 = iVar19 + 1;
      }
      if (iVar17 < 0x7f) {
        if (local_2141[uVar15] == 0xff) {
          pbVar16 = local_2141 + uVar15;
        }
        else {
          lVar21 = (ulong)(bVar3 + 1) + 0x7e;
          do {
            lVar11 = lVar21;
            if (abStack_10c2[uVar15] == bVar3) goto LAB_10044c688;
            uVar6 = uVar6 + 1;
            uVar15 = (ulong)(int)uVar6;
            lVar21 = lVar11 + 1;
          } while (local_21c0[lVar11 + 1] != 0xff);
          pbVar16 = local_21c0 + lVar11 + 1;
          uVar15 = lVar11 - 0x7e;
        }
        *pbVar16 = (byte)iVar17;
        abStack_10c2[uVar15] = bVar3;
        local_21c0[local_40] = bVar3;
        iVar17 = local_40;
      }
      local_40 = iVar17 + 1;
      iVar17 = local_40;
LAB_10044c688:
      pbVar16 = pbVar13;
    } while (pbVar13 < pbVar2);
    if (iVar17 == 1) {
      uVar20 = *(uint *)((long)param_4 + 0xc);
      if (*(uint *)(param_4 + 2) < uVar20 + 1) {
        uVar15 = (ulong)((double)(uVar20 + 1) * _DAT_100b42cf8);
        pvVar7 = operator_new__(uVar15 & 0xffffffff);
        pvVar4 = (void *)*param_4;
        _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar4);
          uVar20 = *(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar7;
        *(int *)(param_4 + 2) = (int)uVar15;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      if (*(uint *)(param_4 + 1) < uVar20 + 1) {
        *(uint *)(param_4 + 1) = uVar20 + 1;
        uVar20 = *(uint *)((long)param_4 + 0xc);
      }
      *(undefined1 *)(*param_4 + (ulong)uVar20) = 1;
      iVar17 = *(int *)((long)param_4 + 0xc);
      uVar20 = iVar17 + 1;
      uVar15 = (ulong)uVar20;
      *(uint *)((long)param_4 + 0xc) = uVar20;
      uVar20 = iVar17 + 2;
      if (*(uint *)(param_4 + 2) < uVar20) {
        uVar14 = (ulong)((double)uVar20 * _DAT_100b42cf8);
        pvVar7 = operator_new__(uVar14 & 0xffffffff);
        pvVar4 = (void *)*param_4;
        _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar4);
          uVar15 = (ulong)*(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar7;
        *(int *)(param_4 + 2) = (int)uVar14;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      uVar20 = (int)uVar15 + 1;
      if (*(uint *)(param_4 + 1) < uVar20) {
        *(uint *)(param_4 + 1) = uVar20;
        uVar15 = (ulong)*(uint *)((long)param_4 + 0xc);
      }
      *(byte *)(*param_4 + uVar15) = local_21c0[0];
      *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + 1;
      goto LAB_10044d436;
    }
    uVar6 = (iVar18 + iVar19) * 2;
    bVar22 = (int)uVar6 < (int)uVar20;
    if ((int)uVar20 < (int)uVar6) {
      uVar6 = uVar20;
    }
    if (iVar17 < 0x80) goto LAB_10044c74e;
LAB_10044c7bc:
    local_40 = 0;
    iVar17 = 0;
    bVar5 = false;
  }
  uVar6 = *(uint *)((long)param_4 + 0xc);
  if (*(uint *)(param_4 + 2) < uVar6 + 1) {
    uVar15 = (ulong)((double)(uVar6 + 1) * _DAT_100b42cf8);
    pvVar7 = operator_new__(uVar15 & 0xffffffff);
    pvVar4 = (void *)*param_4;
    _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
    if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
      operator_delete__(pvVar4);
      uVar6 = *(uint *)((long)param_4 + 0xc);
    }
    *param_4 = (long)pvVar7;
    *(int *)(param_4 + 2) = (int)uVar15;
    *(undefined1 *)((long)param_4 + 0x14) = 1;
  }
  if (*(uint *)(param_4 + 1) < uVar6 + 1) {
    *(uint *)(param_4 + 1) = uVar6 + 1;
    uVar6 = *(uint *)((long)param_4 + 0xc);
  }
  *(byte *)(*param_4 + (ulong)uVar6) = bVar22 << 7 | (byte)iVar17;
  uVar6 = *(int *)((long)param_4 + 0xc) + 1;
  local_21d0 = (ulong)uVar6;
  *(uint *)((long)param_4 + 0xc) = uVar6;
  if (0 < iVar17) {
    lVar21 = 0;
    do {
      bVar3 = local_21c0[lVar21];
      uVar6 = (uint)local_21d0;
      if (*(uint *)(param_4 + 2) < uVar6 + 1) {
        uVar15 = (ulong)((double)(uVar6 + 1) * _DAT_100b42cf8);
        pvVar7 = operator_new__(uVar15 & 0xffffffff);
        pvVar4 = (void *)*param_4;
        _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
        if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
          operator_delete__(pvVar4);
          uVar6 = *(uint *)((long)param_4 + 0xc);
        }
        *param_4 = (long)pvVar7;
        *(int *)(param_4 + 2) = (int)uVar15;
        *(undefined1 *)((long)param_4 + 0x14) = 1;
      }
      if (*(uint *)(param_4 + 1) < uVar6 + 1) {
        *(uint *)(param_4 + 1) = uVar6 + 1;
      }
      *(byte *)(*param_4 + (ulong)uVar6) = bVar3;
      uVar6 = *(int *)((long)param_4 + 0xc) + 1;
      local_21d0 = (ulong)uVar6;
      *(uint *)((long)param_4 + 0xc) = uVar6;
      lVar21 = lVar21 + 1;
    } while (lVar21 < iVar17);
  }
  if (bVar22) {
    if (0 < (int)uVar20) {
      do {
        bVar3 = *param_1;
        uVar15 = (ulong)bVar3;
        pbVar16 = param_1;
        do {
          pbVar16 = pbVar16 + 1;
          if (*pbVar16 != bVar3) break;
        } while (pbVar16 < pbVar2);
        iVar18 = (int)pbVar16 - (int)param_1;
        iVar17 = (int)local_21d0;
        if (iVar18 < 3 && bVar5) {
          bVar9 = local_2141[uVar15];
          if (bVar9 == 0xff) {
            bVar9 = 0xff;
          }
          else {
            pbVar13 = local_2141 + (bVar3 + 1);
            uVar14 = uVar15;
            do {
              if (abStack_10c2[uVar15] == bVar3) goto LAB_10044ce48;
              uVar20 = (int)uVar14 + 1;
              uVar14 = (ulong)uVar20;
              uVar15 = (ulong)(int)uVar20;
              bVar9 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar9 != 0xff);
            bVar9 = 0xff;
          }
LAB_10044ce48:
          if (iVar18 == 2) {
            if (*(uint *)(param_4 + 2) < iVar17 + 1U) {
              uVar15 = (ulong)((double)(iVar17 + 1U) * _DAT_100b42cf8);
              pvVar7 = operator_new__(uVar15 & 0xffffffff);
              pvVar4 = (void *)*param_4;
              _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar4);
                local_21d0 = (ulong)*(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar7;
              *(int *)(param_4 + 2) = (int)uVar15;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            uVar20 = (int)local_21d0 + 1;
            if (*(uint *)(param_4 + 1) < uVar20) {
              *(uint *)(param_4 + 1) = uVar20;
            }
            *(byte *)(*param_4 + local_21d0) = bVar9;
            uVar20 = *(int *)((long)param_4 + 0xc) + 1;
            local_21d0 = (ulong)uVar20;
            *(uint *)((long)param_4 + 0xc) = uVar20;
          }
          uVar20 = (int)local_21d0 + 1;
          if (*(uint *)(param_4 + 2) < uVar20) {
            uVar15 = (ulong)((double)uVar20 * _DAT_100b42cf8);
            pvVar7 = operator_new__(uVar15 & 0xffffffff);
            pvVar4 = (void *)*param_4;
            _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
            if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
              operator_delete__(pvVar4);
              local_21d0 = (ulong)*(uint *)((long)param_4 + 0xc);
            }
            *param_4 = (long)pvVar7;
            *(int *)(param_4 + 2) = (int)uVar15;
            *(undefined1 *)((long)param_4 + 0x14) = 1;
          }
          uVar20 = (int)local_21d0 + 1;
          if (*(uint *)(param_4 + 1) < uVar20) {
            *(uint *)(param_4 + 1) = uVar20;
          }
          *(byte *)(*param_4 + local_21d0) = bVar9;
        }
        else {
          if (bVar5) {
            bVar9 = local_2141[uVar15];
            if (bVar9 == 0xff) {
              bVar9 = 0xff;
            }
            else {
              pbVar13 = local_2141 + (bVar3 + 1);
              uVar14 = uVar15;
              do {
                if (abStack_10c2[uVar15] == bVar3) goto LAB_10044ced3;
                uVar20 = (int)uVar14 + 1;
                uVar14 = (ulong)uVar20;
                uVar15 = (ulong)(int)uVar20;
                bVar9 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar9 != 0xff);
              bVar9 = 0xff;
            }
LAB_10044ced3:
            if (*(uint *)(param_4 + 2) < iVar17 + 1U) {
              uVar15 = (ulong)((double)(iVar17 + 1U) * _DAT_100b42cf8);
              pvVar7 = operator_new__(uVar15 & 0xffffffff);
              pvVar4 = (void *)*param_4;
              _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar4);
                local_21d0 = (ulong)*(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar7;
              *(int *)(param_4 + 2) = (int)uVar15;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            uVar20 = (int)local_21d0 + 1;
            if (*(uint *)(param_4 + 1) < uVar20) {
              *(uint *)(param_4 + 1) = uVar20;
            }
            *(byte *)(*param_4 + local_21d0) = bVar9 | 0x80;
          }
          else {
            if (*(uint *)(param_4 + 2) < iVar17 + 1U) {
              uVar15 = (ulong)((double)(iVar17 + 1U) * _DAT_100b42cf8);
              pvVar7 = operator_new__(uVar15 & 0xffffffff);
              pvVar4 = (void *)*param_4;
              _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar4);
                local_21d0 = (ulong)*(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar7;
              *(int *)(param_4 + 2) = (int)uVar15;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            uVar20 = (int)local_21d0 + 1;
            if (*(uint *)(param_4 + 1) < uVar20) {
              *(uint *)(param_4 + 1) = uVar20;
            }
            *(byte *)(*param_4 + local_21d0) = bVar3;
          }
          uVar20 = *(int *)((long)param_4 + 0xc) + 1;
          *(uint *)((long)param_4 + 0xc) = uVar20;
          uVar10 = iVar18 - 1;
          uVar6 = uVar10;
          if (0xfe < (int)uVar10) {
            uVar6 = (iVar18 - 0x100U) % 0xff;
            do {
              if (*(uint *)(param_4 + 2) < uVar20 + 1) {
                uVar15 = (ulong)((double)(uVar20 + 1) * _DAT_100b42cf8);
                pvVar7 = operator_new__(uVar15 & 0xffffffff);
                pvVar4 = (void *)*param_4;
                _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
                if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                  operator_delete__(pvVar4);
                  uVar20 = *(uint *)((long)param_4 + 0xc);
                }
                *param_4 = (long)pvVar7;
                *(int *)(param_4 + 2) = (int)uVar15;
                *(undefined1 *)((long)param_4 + 0x14) = 1;
              }
              if (*(uint *)(param_4 + 1) < uVar20 + 1) {
                *(uint *)(param_4 + 1) = uVar20 + 1;
              }
              *(undefined1 *)(*param_4 + (ulong)uVar20) = 0xff;
              uVar20 = *(int *)((long)param_4 + 0xc) + 1;
              *(uint *)((long)param_4 + 0xc) = uVar20;
              uVar10 = uVar10 - 0xff;
            } while (0xfe < (int)uVar10);
          }
          if (*(uint *)(param_4 + 2) < uVar20 + 1) {
            uVar15 = (ulong)((double)(uVar20 + 1) * _DAT_100b42cf8);
            pvVar7 = operator_new__(uVar15 & 0xffffffff);
            pvVar4 = (void *)*param_4;
            _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
            if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
              operator_delete__(pvVar4);
              uVar20 = *(uint *)((long)param_4 + 0xc);
            }
            *param_4 = (long)pvVar7;
            *(int *)(param_4 + 2) = (int)uVar15;
            *(undefined1 *)((long)param_4 + 0x14) = 1;
          }
          if (*(uint *)(param_4 + 1) < uVar20 + 1) {
            *(uint *)(param_4 + 1) = uVar20 + 1;
          }
          *(char *)(*param_4 + (ulong)uVar20) = (char)uVar6;
        }
        uVar20 = *(int *)((long)param_4 + 0xc) + 1;
        local_21d0 = (ulong)uVar20;
        *(uint *)((long)param_4 + 0xc) = uVar20;
        param_1 = pbVar16;
      } while (pbVar16 < pbVar2);
    }
  }
  else if (bVar5) {
    if (0 < param_3) {
      iVar17 = *(int *)((long)&PTR___mh_execute_header_100b42d70 + (long)(iVar17 + -1) * 4);
      iVar18 = 0;
      do {
        if (0 < param_2) {
          uVar6 = 0;
          uVar20 = 0;
          pbVar2 = param_1 + param_2;
          do {
            bVar3 = *param_1;
            uVar15 = (ulong)bVar3;
            bVar9 = local_2141[uVar15];
            if (bVar9 == 0xff) {
              bVar9 = 0xff;
            }
            else {
              pbVar16 = local_2141 + (bVar3 + 1);
              uVar10 = (uint)bVar3;
              do {
                if ((uint)abStack_10c2[uVar15] == (uint)bVar3) goto LAB_10044caa2;
                uVar10 = uVar10 + 1;
                uVar15 = (ulong)(int)uVar10;
                bVar9 = *pbVar16;
                pbVar16 = pbVar16 + 1;
              } while (bVar9 != 0xff);
              bVar9 = 0xff;
            }
LAB_10044caa2:
            param_1 = param_1 + 1;
            uVar10 = (uVar6 & 0xff) << ((byte)iVar17 & 0x1f);
            uVar6 = uVar10 | bVar9;
            uVar20 = (uVar20 & 0xff) + iVar17;
            if (7 < (uVar20 & 0xf8)) {
              uVar20 = (int)local_21d0 + 1;
              if (*(uint *)(param_4 + 2) < uVar20) {
                uVar15 = (ulong)((double)uVar20 * _DAT_100b42cf8);
                pvVar7 = operator_new__(uVar15 & 0xffffffff);
                pvVar4 = (void *)*param_4;
                _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
                if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                  operator_delete__(pvVar4);
                  local_21d0 = (ulong)*(uint *)((long)param_4 + 0xc);
                }
                *param_4 = (long)pvVar7;
                *(int *)(param_4 + 2) = (int)uVar15;
                *(undefined1 *)((long)param_4 + 0x14) = 1;
              }
              uVar20 = (int)local_21d0 + 1;
              if (*(uint *)(param_4 + 1) < uVar20) {
                *(uint *)(param_4 + 1) = uVar20;
              }
              *(char *)(*param_4 + local_21d0) = (char)uVar6;
              uVar20 = *(int *)((long)param_4 + 0xc) + 1;
              local_21d0 = (ulong)uVar20;
              *(uint *)((long)param_4 + 0xc) = uVar20;
              uVar20 = 0;
            }
          } while (param_1 < pbVar2);
          if ((char)uVar20 != '\0') {
            uVar6 = (int)local_21d0 + 1;
            if (*(uint *)(param_4 + 2) < uVar6) {
              uVar15 = (ulong)((double)uVar6 * _DAT_100b42cf8);
              pvVar7 = operator_new__(uVar15 & 0xffffffff);
              pvVar4 = (void *)*param_4;
              _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
              if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
                operator_delete__(pvVar4);
                local_21d0 = (ulong)*(uint *)((long)param_4 + 0xc);
              }
              *param_4 = (long)pvVar7;
              *(int *)(param_4 + 2) = (int)uVar15;
              *(undefined1 *)((long)param_4 + 0x14) = 1;
            }
            uVar6 = (int)local_21d0 + 1;
            if (*(uint *)(param_4 + 1) < uVar6) {
              *(uint *)(param_4 + 1) = uVar6;
            }
            *(char *)(*param_4 + local_21d0) =
                 (char)((uVar10 & 0xff | (uint)bVar9) << (8U - (char)uVar20 & 0x1f));
            uVar20 = *(int *)((long)param_4 + 0xc) + 1;
            local_21d0 = (ulong)uVar20;
            *(uint *)((long)param_4 + 0xc) = uVar20;
          }
        }
        bVar22 = iVar18 != param_3 + -1;
        iVar18 = iVar18 + 1;
      } while (bVar22);
    }
  }
  else {
    uVar6 = (int)local_21d0 + uVar20;
    if (*(uint *)(param_4 + 2) < uVar6) {
      uVar15 = (ulong)((double)uVar6 * _DAT_100b42cf8);
      pvVar7 = operator_new__(uVar15 & 0xffffffff);
      pvVar4 = (void *)*param_4;
      _memcpy(pvVar7,pvVar4,(ulong)*(uint *)(param_4 + 1));
      if ((pvVar4 != (void *)0x0) && (*(char *)((long)param_4 + 0x14) != '\0')) {
        operator_delete__(pvVar4);
        local_21d0 = (ulong)*(uint *)((long)param_4 + 0xc);
      }
      *param_4 = (long)pvVar7;
      *(int *)(param_4 + 2) = (int)uVar15;
      *(undefined1 *)((long)param_4 + 0x14) = 1;
    }
    uVar6 = (int)local_21d0 + uVar20;
    if (*(uint *)(param_4 + 1) < uVar6) {
      *(uint *)(param_4 + 1) = uVar6;
      local_21d0 = (ulong)*(uint *)((long)param_4 + 0xc);
    }
    _memcpy((void *)(local_21d0 + *param_4),param_1,(ulong)uVar20);
    *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + uVar20;
  }
LAB_10044d436:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

