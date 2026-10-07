
void FUN_1004488b0(uint *param_1,long *param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  sbyte sVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  size_t sVar26;
  byte *pbVar27;
  long lVar28;
  long lVar29;
  void *pvVar30;
  uint uVar31;
  ulong uVar32;
  bool bVar33;
  uint local_1138;
  uint local_1134;
  ulong local_1130;
  long local_1128;
  long local_1120;
  byte local_10c9;
  byte local_10c8 [128];
  byte local_1048 [4112];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_1048,0x1004);
  uVar2 = param_1[1];
  uVar20 = param_1[3];
  uVar13 = uVar20 + 1;
  if ((int)uVar2 < (int)uVar13) {
    uVar11 = (ulong)param_4;
    iVar23 = -2 - uVar2;
    uVar24 = -uVar2 - 0x41;
    uVar14 = param_1[2];
    uVar25 = uVar2 * param_4;
    do {
      uVar21 = uVar2 + 0x40;
      uVar15 = uVar21;
      if ((int)uVar13 <= (int)uVar21) {
        uVar15 = uVar13;
      }
      uVar3 = *param_1;
      uVar16 = uVar14 + 1;
      if ((int)uVar3 < (int)uVar16) {
        iVar6 = uVar15 - uVar2;
        uVar7 = iVar6 * param_4;
        uVar20 = ~uVar13;
        if ((int)~uVar13 <= (int)uVar24) {
          uVar20 = uVar24;
        }
        local_1128 = (long)(int)uVar3 + (ulong)uVar25;
        local_1130 = param_3 + 1 + local_1128;
        local_1128 = local_1128 + param_3;
        local_1134 = ~uVar3;
        local_1138 = -uVar3 - 0x41;
        local_1120 = -((int)uVar3 + param_3 + (ulong)uVar25);
        do {
          uVar8 = uVar3 + 0x40;
          uVar13 = uVar8;
          if ((int)uVar16 <= (int)uVar8) {
            uVar13 = uVar16;
          }
          sVar26 = 0;
          if (((int)uVar2 <= (int)(uVar15 - 1)) && ((int)uVar3 <= (int)(uVar13 - 1))) {
            sVar26 = (size_t)((uVar13 - uVar3) * iVar6);
          }
          uVar14 = *(uint *)(param_2 + 1);
          uVar9 = *(uint *)((long)param_2 + 0xc);
          uVar31 = uVar9 + 1;
          if ((uVar14 < uVar31) && (uVar14 - uVar9 != 1)) {
            bVar12 = 0;
            uVar31 = uVar9;
          }
          else {
            bVar12 = *(byte *)(*param_2 + (ulong)uVar9);
            *(uint *)((long)param_2 + 0xc) = uVar31;
          }
          uVar32 = (ulong)uVar31;
          uVar9 = bVar12 & 0x7f;
          if ((bVar12 & 0x7f) == 0) {
LAB_100448ca0:
            iVar10 = (int)sVar26;
            if ((bVar12 & 0x80) == 0) {
              if ((bVar12 & 0x7f) == 0) {
                iVar4 = (int)uVar32;
                if (uVar14 < (uint)(iVar4 + iVar10)) {
                  sVar26 = (size_t)(uVar14 - iVar4);
                }
                if ((int)sVar26 != 0) {
                  _memcpy(local_1048,(void *)(uVar32 + *param_2),sVar26);
                  *(int *)((long)param_2 + 0xc) = iVar4 + (int)sVar26;
                }
              }
              else {
                sVar22 = 8;
                if ((uVar9 < 0x11) && (sVar22 = 4, uVar9 < 5)) {
                  sVar22 = (2 < uVar9) + 1;
                }
                if (0 < iVar6) {
                  iVar10 = 0;
                  pbVar27 = local_1048;
                  do {
                    if (0 < (int)(uVar13 - uVar3)) {
                      uVar14 = 0;
                      pbVar1 = pbVar27 + (int)(uVar13 - uVar3);
                      bVar12 = 0;
                      do {
                        if (bVar12 == 0) {
                          uVar16 = *(uint *)((long)param_2 + 0xc);
                          bVar12 = 8;
                          if ((*(uint *)(param_2 + 1) < uVar16 + 1) &&
                             (*(uint *)(param_2 + 1) - uVar16 != 1)) {
                            uVar14 = 0;
                          }
                          else {
                            uVar14 = (uint)*(byte *)(*param_2 + (ulong)uVar16);
                            *(uint *)((long)param_2 + 0xc) = uVar16 + 1;
                          }
                        }
                        bVar12 = bVar12 - sVar22;
                        *pbVar27 = local_10c8
                                   [(ulong)(uVar14 >> (bVar12 & 0x1f) & (1 << sVar22) + 0x7fU) &
                                    0x7f];
                        pbVar27 = pbVar27 + 1;
                      } while (pbVar27 < pbVar1);
                    }
                    bVar33 = iVar10 != iVar23 - uVar20;
                    iVar10 = iVar10 + 1;
                  } while (bVar33);
                }
              }
            }
            else if ((bVar12 & 0x7f) == 0) {
              pbVar27 = local_1048;
              if (0 < iVar10) {
                do {
                  uVar16 = (uint)uVar32;
                  uVar31 = uVar14 - uVar16;
                  uVar9 = 1;
                  if (uVar16 + 1 <= uVar14) {
                    uVar31 = 1;
                  }
                  if (uVar31 != 0) {
                    _memcpy(&local_10c9,(void *)(uVar32 + *param_2),(ulong)uVar31);
                    uVar16 = uVar31 + uVar16;
                    *(uint *)((long)param_2 + 0xc) = uVar16;
                    uVar9 = (uint)local_10c9;
                  }
                  uVar31 = 1;
                  do {
                    uVar18 = uVar16 + 1;
                    if (uVar14 < uVar18) break;
                    bVar12 = *(byte *)(*param_2 + (ulong)uVar16);
                    uVar31 = uVar31 + bVar12;
                    *(uint *)((long)param_2 + 0xc) = uVar18;
                    uVar16 = uVar18;
                  } while (bVar12 == 0xff);
                  if (0 < (int)uVar31) {
                    uVar14 = ~uVar31;
                    if ((int)uVar14 < -2) {
                      uVar14 = 0xfffffffe;
                    }
                    uVar32 = (ulong)(uVar31 + 1 + uVar14);
                    _memset(pbVar27,uVar9,uVar32 + 1);
                    pbVar27 = pbVar27 + uVar32 + 1;
                  }
                  if (local_1048 + iVar10 <= pbVar27) break;
                  uVar14 = *(uint *)(param_2 + 1);
                  uVar32 = (ulong)*(uint *)((long)param_2 + 0xc);
                } while( true );
              }
            }
            else {
              pbVar27 = local_1048;
              if (0 < iVar10) {
                do {
                  uVar16 = (uint)uVar32;
                  uVar9 = uVar16 + 1;
                  if ((uVar14 < uVar9) && (uVar14 - uVar16 != 1)) {
                    uVar31 = 0;
                    uVar9 = uVar16;
                  }
                  else {
                    uVar31 = (uint)*(byte *)(*param_2 + uVar32);
                    *(uint *)((long)param_2 + 0xc) = uVar9;
                  }
                  uVar16 = 1;
                  if ((uVar31 & 0x80) == 0) {
LAB_100448e48:
                    uVar14 = ~uVar16;
                    if ((int)uVar14 < -2) {
                      uVar14 = 0xfffffffe;
                    }
                    uVar32 = (ulong)(uVar16 + 1 + uVar14);
                    _memset(pbVar27,(uint)local_10c8[uVar31 & 0x7f],uVar32 + 1);
                    pbVar27 = pbVar27 + uVar32 + 1;
                  }
                  else {
                    uVar16 = 1;
                    do {
                      uVar18 = uVar9 + 1;
                      if (uVar14 < uVar18) break;
                      bVar12 = *(byte *)(*param_2 + (ulong)uVar9);
                      uVar16 = uVar16 + bVar12;
                      *(uint *)((long)param_2 + 0xc) = uVar18;
                      uVar9 = uVar18;
                    } while (bVar12 == 0xff);
                    if (0 < (int)uVar16) goto LAB_100448e48;
                  }
                  if (local_1048 + iVar10 <= pbVar27) break;
                  uVar14 = *(uint *)(param_2 + 1);
                  uVar32 = (ulong)*(uint *)((long)param_2 + 0xc);
                } while( true );
              }
            }
            uVar32 = (ulong)(uVar3 + uVar2 * param_4);
            if (uVar7 != 0) {
              pvVar30 = (void *)(uVar32 + param_3);
              pbVar27 = local_1048;
              do {
                _memcpy(pvVar30,pbVar27,(long)(int)(uVar13 - uVar3));
                pvVar30 = (void *)((long)pvVar30 + uVar11);
                pbVar27 = pbVar27 + (uVar13 - uVar3);
              } while (pvVar30 < (void *)(uVar32 + uVar7 + param_3));
            }
          }
          else {
            pbVar27 = local_10c8;
            uVar31 = uVar9;
            do {
              iVar10 = (int)uVar32;
              uVar18 = uVar14 - iVar10;
              if (iVar10 + 1U <= uVar14) {
                uVar18 = 1;
              }
              bVar5 = 1;
              if (uVar18 != 0) {
                _memcpy(&local_10c9,(void *)(uVar32 + *param_2),(ulong)uVar18);
                *(uint *)((long)param_2 + 0xc) = uVar18 + iVar10;
                uVar32 = (ulong)(uVar18 + iVar10);
                bVar5 = local_10c9;
              }
              *pbVar27 = bVar5;
              bVar5 = local_10c8[0];
              pbVar27 = pbVar27 + 1;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
            if (uVar9 != 1) goto LAB_100448ca0;
            if (uVar7 != 0) {
              lVar29 = (long)(int)uVar3 + (ulong)(uVar2 * param_4);
              pvVar30 = (void *)(lVar29 + param_3);
              uVar14 = ~uVar16;
              if ((int)~uVar16 <= (int)local_1138) {
                uVar14 = local_1138;
              }
              uVar19 = (int)(local_1134 - uVar14) + local_1128;
              lVar28 = local_1120;
              uVar32 = local_1130;
              do {
                uVar17 = uVar19;
                if (uVar19 < uVar32) {
                  uVar17 = uVar32;
                }
                if (0 < (int)(uVar13 - uVar3)) {
                  _memset(pvVar30,(uint)bVar5,uVar17 + lVar28);
                }
                pvVar30 = (void *)((long)pvVar30 + uVar11);
                uVar32 = uVar32 + uVar11;
                uVar19 = uVar19 + uVar11;
                lVar28 = lVar28 - uVar11;
              } while (pvVar30 < (void *)(lVar29 + (ulong)uVar7 + param_3));
            }
          }
          uVar14 = param_1[2];
          uVar16 = uVar14 + 1;
          local_1130 = local_1130 + 0x40;
          local_1128 = local_1128 + 0x40;
          local_1134 = local_1134 - 0x40;
          local_1138 = local_1138 - 0x40;
          local_1120 = local_1120 + -0x40;
          uVar3 = uVar8;
        } while ((int)uVar8 < (int)uVar16);
        uVar20 = param_1[3];
      }
      uVar13 = uVar20 + 1;
      iVar23 = iVar23 + -0x40;
      uVar24 = uVar24 - 0x40;
      uVar25 = uVar25 + param_4 * 0x40;
      uVar2 = uVar21;
    } while ((int)uVar21 < (int)uVar13);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

