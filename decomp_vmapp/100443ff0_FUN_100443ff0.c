
void FUN_100443ff0(int *param_1,long *param_2,long param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  bool bVar27;
  uint local_1a4;
  uint local_14c;
  byte local_139;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  iVar5 = param_1[1];
  iVar19 = param_1[3] + 1;
  if (iVar5 < iVar19) {
    uVar8 = (ulong)param_4;
    iVar10 = param_1[2];
    uVar15 = iVar5 * param_4;
    local_1a4 = 0;
    local_14c = 0;
    do {
      iVar6 = iVar5 + 0x10;
      if (iVar6 < iVar19) {
        iVar19 = iVar6;
      }
      iVar18 = iVar10 + 1;
      if (*param_1 < iVar18) {
        uVar12 = (iVar19 - iVar5) * param_4;
        lVar1 = param_3 + (ulong)uVar15;
        iVar3 = *param_1;
        do {
          while( true ) {
            iVar7 = iVar3 + 0x10;
            if (iVar7 < iVar18) {
              iVar18 = iVar7;
            }
            uVar13 = *(uint *)(param_2 + 1);
            uVar16 = *(uint *)((long)param_2 + 0xc);
            uVar20 = uVar16 + 1;
            if ((uVar13 < uVar20) && (uVar13 - uVar16 != 1)) {
              bVar11 = 0;
              uVar20 = uVar16;
            }
            else {
              bVar11 = *(byte *)(*param_2 + (ulong)uVar16);
              *(uint *)((long)param_2 + 0xc) = uVar20;
            }
            uVar16 = 0;
            if ((iVar5 <= iVar19 + -1) && (iVar3 <= iVar18 + -1)) {
              uVar16 = (iVar18 - iVar3) * (iVar19 - iVar5);
            }
            if ((bVar11 & 1) == 0) break;
            if (uVar13 < uVar20 + uVar16) {
              uVar16 = uVar13 - uVar20;
            }
            if (uVar16 != 0) {
              _memcpy(&local_138,(void *)((ulong)uVar20 + *param_2),(ulong)uVar16);
              *(uint *)((long)param_2 + 0xc) = uVar20 + uVar16;
            }
            uVar26 = (ulong)(iVar3 + iVar5 * param_4);
            if (uVar12 != 0) {
              pvVar17 = (void *)(uVar26 + param_3);
              puVar21 = &local_138;
              do {
                _memcpy(pvVar17,puVar21,(long)(iVar18 - iVar3));
                pvVar17 = (void *)((long)pvVar17 + uVar8);
                puVar21 = (undefined8 *)((long)puVar21 + (ulong)(uint)(iVar18 - iVar3));
              } while (pvVar17 < (void *)(uVar26 + uVar12 + param_3));
              iVar10 = param_1[2];
            }
            iVar18 = iVar10 + 1;
            iVar3 = iVar7;
            if (iVar18 <= iVar7) goto LAB_10044471e;
          }
          if ((bVar11 & 2) != 0) {
            uVar16 = uVar13 - uVar20;
            if (uVar20 + 1 <= uVar13) {
              uVar16 = 1;
            }
            local_1a4 = 1;
            if (uVar16 != 0) {
              _memcpy(&local_139,(void *)((ulong)uVar20 + *param_2),(ulong)uVar16);
              *(uint *)((long)param_2 + 0xc) = uVar16 + uVar20;
              local_1a4 = (uint)local_139;
            }
          }
          if (uVar12 != 0) {
            lVar22 = (long)iVar3;
            lVar25 = lVar22 + (ulong)(iVar5 * param_4);
            pvVar17 = (void *)(lVar25 + param_3);
            uVar24 = (iVar18 - iVar3) + lVar22 + lVar1;
            uVar26 = param_3 + 1 + (ulong)uVar15 + lVar22;
            lVar22 = -(lVar22 + lVar1);
            do {
              uVar23 = uVar26;
              if (uVar26 < uVar24) {
                uVar23 = uVar24;
              }
              if (0 < iVar18 - iVar3) {
                _memset(pvVar17,local_1a4,uVar23 + lVar22);
              }
              pvVar17 = (void *)((long)pvVar17 + uVar8);
              uVar24 = uVar24 + uVar8;
              uVar26 = uVar26 + uVar8;
              lVar22 = lVar22 - uVar8;
            } while (pvVar17 < (void *)(lVar25 + (ulong)uVar12 + param_3));
          }
          if ((bVar11 & 4) != 0) {
            uVar13 = *(uint *)((long)param_2 + 0xc);
            uVar16 = *(uint *)(param_2 + 1) - uVar13;
            local_14c = 1;
            if (uVar13 + 1 <= *(uint *)(param_2 + 1)) {
              uVar16 = 1;
            }
            if (uVar16 != 0) {
              _memcpy(&local_139,(void *)((ulong)uVar13 + *param_2),(ulong)uVar16);
              *(uint *)((long)param_2 + 0xc) = uVar13 + uVar16;
              local_14c = (uint)local_139;
            }
          }
          if ((bVar11 & 8) != 0) {
            uVar13 = *(uint *)((long)param_2 + 0xc);
            if ((uVar13 + 1 <= *(uint *)(param_2 + 1)) || (*(uint *)(param_2 + 1) - uVar13 == 1)) {
              bVar2 = *(byte *)(*param_2 + (ulong)uVar13);
              *(uint *)((long)param_2 + 0xc) = uVar13 + 1;
              if (bVar2 != 0) {
                iVar10 = 0;
                do {
                  if ((bVar11 & 0x10) == 0) {
                    uVar13 = *(uint *)(param_2 + 1);
                    uVar16 = *(uint *)((long)param_2 + 0xc);
                  }
                  else {
                    uVar13 = *(uint *)(param_2 + 1);
                    uVar16 = *(uint *)((long)param_2 + 0xc);
                    uVar20 = uVar13 - uVar16;
                    local_14c = 1;
                    if (uVar16 + 1 <= uVar13) {
                      uVar20 = 1;
                    }
                    if (uVar20 != 0) {
                      _memcpy(&local_139,(void *)(*param_2 + (ulong)uVar16),(ulong)uVar20);
                      uVar16 = uVar16 + uVar20;
                      *(uint *)((long)param_2 + 0xc) = uVar16;
                      local_14c = (uint)local_139;
                    }
                  }
                  uVar20 = uVar16 + 1;
                  if ((uVar13 < uVar20) && (uVar13 - uVar16 != 1)) {
                    bVar4 = 0;
                    uVar20 = uVar16;
                  }
                  else {
                    bVar4 = *(byte *)(*param_2 + (ulong)uVar16);
                    *(uint *)((long)param_2 + 0xc) = uVar20;
                  }
                  if ((uVar13 < uVar20 + 1) && (uVar13 - uVar20 != 1)) {
                    bVar9 = 0;
                  }
                  else {
                    bVar9 = *(byte *)(*param_2 + (ulong)uVar20);
                    *(uint *)((long)param_2 + 0xc) = uVar20 + 1;
                  }
                  uVar26 = (ulong)(((bVar4 & 0xf) + iVar5) * param_4);
                  uVar13 = ((bVar9 & 0xf) + 1) * param_4;
                  if (uVar13 != 0) {
                    lVar25 = (long)(int)((uint)(bVar4 >> 4) + iVar3);
                    pvVar17 = (void *)(uVar26 + lVar25 + param_3);
                    uVar24 = (ulong)((bVar9 >> 4) + 1) + lVar25 + uVar26 + param_3;
                    uVar23 = lVar25 + uVar26 + param_3 + 1;
                    lVar22 = -(lVar25 + param_3 + uVar26);
                    do {
                      uVar14 = uVar23;
                      if (uVar23 < uVar24) {
                        uVar14 = uVar24;
                      }
                      _memset(pvVar17,local_14c,uVar14 + lVar22);
                      pvVar17 = (void *)((long)pvVar17 + uVar8);
                      uVar24 = uVar24 + uVar8;
                      uVar23 = uVar23 + uVar8;
                      lVar22 = lVar22 - uVar8;
                    } while (pvVar17 < (void *)((ulong)uVar13 + uVar26 + lVar25 + param_3));
                  }
                  bVar27 = iVar10 != bVar2 - 1;
                  iVar10 = iVar10 + 1;
                } while (bVar27);
              }
            }
          }
          iVar10 = param_1[2];
          iVar18 = iVar10 + 1;
          iVar3 = iVar7;
        } while (iVar7 < iVar18);
      }
LAB_10044471e:
      iVar19 = param_1[3] + 1;
      uVar15 = uVar15 + param_4 * 0x10;
      iVar5 = iVar6;
    } while (iVar6 < iVar19);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

