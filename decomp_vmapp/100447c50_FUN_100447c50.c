
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100447c50(uint *param_1,long *param_2,ulong param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  ushort *puVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  sbyte sVar35;
  uint uVar36;
  void *pvVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  bool bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint local_4254;
  int local_4250;
  uint local_41c8;
  uint local_41c4;
  ushort local_414a;
  ushort local_4148 [128];
  ushort local_4048 [8200];
  long local_38;
  
  uVar38 = (ulong)param_4;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_4048,0x4008);
  uVar2 = param_1[1];
  uVar29 = param_1[3];
  uVar31 = uVar29 + 1;
  if ((int)uVar2 < (int)uVar31) {
    local_4250 = -2 - uVar2;
    local_4254 = -uVar2 - 0x41;
    uVar3 = param_1[2];
    iVar30 = 0;
    auVar44 = _DAT_100b42d40;
    uVar4 = uVar2;
    do {
      uVar24 = (ulong)(param_4 * 0x40 * iVar30 + uVar2 * param_4);
      uVar18 = uVar4 + 0x40;
      uVar7 = uVar18;
      if ((int)uVar31 <= (int)uVar18) {
        uVar7 = uVar31;
      }
      uVar5 = *param_1;
      lVar39 = (long)(int)uVar5;
      uVar32 = uVar3 + 1;
      if ((int)uVar5 < (int)uVar32) {
        iVar21 = uVar7 - uVar4;
        uVar9 = iVar21 * param_4;
        local_41c4 = -uVar5 - 0x41;
        local_41c8 = ~uVar5;
        uVar29 = ~uVar31;
        if ((int)~uVar31 <= (int)local_4254) {
          uVar29 = local_4254;
        }
        lVar20 = 0;
        lVar34 = lVar39;
        do {
          lVar1 = lVar34 + 0x40;
          uVar31 = (uint)lVar1;
          if ((int)uVar32 < lVar1) {
            uVar31 = uVar32;
          }
          iVar15 = 0;
          iVar27 = (int)lVar34;
          if (((int)uVar4 <= (int)(uVar7 - 1)) && (lVar34 <= (int)(uVar31 - 1))) {
            iVar15 = (uVar31 - iVar27) * iVar21;
          }
          uVar6 = *(uint *)(param_2 + 1);
          uVar33 = *(uint *)((long)param_2 + 0xc);
          uVar22 = uVar33 + 1;
          if ((uVar6 < uVar22) && (uVar6 - uVar33 != 1)) {
            uVar16 = 0;
            uVar22 = uVar33;
          }
          else {
            uVar16 = (uint)*(byte *)(*param_2 + (ulong)uVar33);
            *(uint *)((long)param_2 + 0xc) = uVar22;
          }
          uVar25 = (ulong)uVar22;
          uVar33 = uVar16 & 0x7f;
          if (uVar33 == 0) {
LAB_100448157:
            if ((uVar16 & 0x80) == 0) {
              if (uVar33 == 0) {
                iVar19 = (int)uVar25;
                uVar32 = uVar6 - iVar19;
                if ((uint)(iVar19 + iVar15 * 2) <= uVar6) {
                  uVar32 = iVar15 * 2;
                }
                if (uVar32 != 0) {
                  _memcpy(local_4048,(void *)(uVar25 + *param_2),(ulong)uVar32);
                  auVar44 = _DAT_100b42d40;
                  *(uint *)((long)param_2 + 0xc) = iVar19 + uVar32;
                }
              }
              else {
                sVar35 = 8;
                if ((uVar33 < 0x11) && (sVar35 = 4, uVar33 < 5)) {
                  sVar35 = (2 < uVar33) + 1;
                }
                if (0 < iVar21) {
                  uVar33 = ~uVar32;
                  if ((int)~uVar32 <= (int)local_41c4) {
                    uVar33 = local_41c4;
                  }
                  iVar15 = 0;
                  puVar28 = local_4048;
                  do {
                    if (0 < (int)(uVar31 - iVar27)) {
                      puVar13 = puVar28 + 1;
                      if (puVar28 + 1 < puVar28 + (int)(local_41c8 - uVar33)) {
                        puVar13 = puVar28 + (int)(local_41c8 - uVar33);
                      }
                      uVar32 = 0;
                      bVar14 = 0;
                      puVar12 = puVar28;
                      do {
                        if (bVar14 == 0) {
                          uVar22 = (int)uVar25 + 1;
                          bVar14 = 8;
                          if ((uVar6 < uVar22) && (uVar6 - (int)uVar25 != 1)) {
                            uVar32 = 0;
                          }
                          else {
                            uVar32 = (uint)*(byte *)(*param_2 + uVar25);
                            *(uint *)((long)param_2 + 0xc) = uVar22;
                            uVar25 = (ulong)uVar22;
                          }
                        }
                        bVar14 = bVar14 - sVar35;
                        *puVar12 = local_4148
                                   [(ulong)(uVar32 >> (bVar14 & 0x1f) & (1 << sVar35) + 0x7fU) &
                                    0x7f];
                        puVar12 = puVar12 + 1;
                      } while (puVar12 < puVar28 + (int)(uVar31 - iVar27));
                      puVar28 = (ushort *)
                                ((long)puVar28 +
                                (~(ulong)puVar28 + (long)puVar13 & 0xfffffffffffffffe) + 2);
                    }
                    bVar41 = iVar15 != local_4250 - uVar29;
                    iVar15 = iVar15 + 1;
                  } while (bVar41);
                }
              }
            }
            else if (uVar33 == 0) {
              puVar28 = local_4048;
              if (0 < iVar15) {
                do {
                  uVar32 = (uint)uVar25;
                  uVar22 = uVar6 - uVar32;
                  uVar33 = 2;
                  if (uVar32 + 2 <= uVar6) {
                    uVar22 = 2;
                  }
                  if (uVar22 != 0) {
                    _memcpy(&local_414a,(void *)(uVar25 + *param_2),(ulong)uVar22);
                    auVar44 = _DAT_100b42d40;
                    uVar32 = uVar22 + uVar32;
                    *(uint *)((long)param_2 + 0xc) = uVar32;
                    uVar33 = (uint)local_414a;
                  }
                  uVar22 = 1;
                  do {
                    uVar16 = uVar32 + 1;
                    if (uVar6 < uVar16) break;
                    bVar14 = *(byte *)(*param_2 + (ulong)uVar32);
                    uVar22 = uVar22 + bVar14;
                    *(uint *)((long)param_2 + 0xc) = uVar16;
                    uVar32 = uVar16;
                  } while (bVar14 == 0xff);
                  uVar25 = (ulong)uVar32;
                  if (0 < (int)uVar22) {
                    uVar16 = ~uVar22;
                    uVar32 = 0xfffffffe;
                    if (-3 < (int)uVar16) {
                      uVar32 = uVar16;
                    }
                    uVar40 = (ulong)(uVar22 + 1 + uVar32);
                    uVar11 = uVar40 + 1;
                    uVar26 = uVar11 & 0x1fffffff8;
                    if (uVar26 == 0) {
                      uVar26 = 0;
                      puVar13 = puVar28;
                      uVar32 = uVar22;
                    }
                    else {
                      uVar32 = uVar22 - ((uint)uVar11 & 0xfffffff8);
                      puVar13 = puVar28 + uVar26;
                      auVar42._4_4_ = uVar33;
                      auVar42._0_4_ = uVar33;
                      auVar42._8_4_ = uVar33;
                      auVar42._12_4_ = uVar33;
                      puVar12 = puVar28 + 4;
                      if ((int)uVar16 < -2) {
                        uVar16 = 0xfffffffe;
                      }
                      uVar17 = (ulong)(uVar22 + 1 + uVar16) + 1 & 0xfffffffffffffff8;
                      do {
                        auVar43 = pshufb(auVar42,auVar44);
                        *(long *)(puVar12 + -4) = auVar43._0_8_;
                        *(long *)puVar12 = auVar43._0_8_;
                        puVar12 = puVar12 + 8;
                        uVar17 = uVar17 - 8;
                      } while (uVar17 != 0);
                    }
                    if (uVar11 != uVar26) {
                      uVar16 = ~uVar32;
                      uVar22 = 0xfffffffe;
                      if (-3 < (int)uVar16) {
                        uVar22 = uVar16;
                      }
                      iVar19 = uVar32 + 1;
                      uVar8 = (ushort)uVar33;
                      if ((uVar32 + 2 + uVar22 & 7) != 0) {
                        if ((int)uVar16 < -2) {
                          uVar16 = 0xfffffffe;
                        }
                        iVar23 = -(uVar32 + 2 + uVar16 & 7);
                        do {
                          uVar32 = uVar32 - 1;
                          *puVar13 = uVar8;
                          puVar13 = puVar13 + 1;
                          iVar23 = iVar23 + 1;
                        } while (iVar23 != 0);
                      }
                      if (6 < iVar19 + uVar22) {
                        iVar19 = uVar32 + 1;
                        do {
                          *puVar13 = uVar8;
                          puVar13[1] = uVar8;
                          puVar13[2] = uVar8;
                          puVar13[3] = uVar8;
                          puVar13[4] = uVar8;
                          puVar13[5] = uVar8;
                          puVar13[6] = uVar8;
                          puVar13[7] = uVar8;
                          iVar19 = iVar19 + -8;
                          puVar13 = puVar13 + 8;
                        } while (1 < iVar19);
                      }
                    }
                    puVar28 = puVar28 + uVar40 + 1;
                  }
                } while (puVar28 < local_4048 + iVar15);
              }
            }
            else {
              puVar28 = local_4048;
              if (0 < iVar15) {
                do {
                  uVar32 = (uint)uVar25;
                  uVar33 = uVar32 + 1;
                  if ((uVar6 < uVar33) && (uVar6 - uVar32 != 1)) {
                    uVar22 = 0;
                    uVar33 = uVar32;
                  }
                  else {
                    uVar22 = (uint)*(byte *)(*param_2 + uVar25);
                    *(uint *)((long)param_2 + 0xc) = uVar33;
                  }
                  uVar32 = 1;
                  if ((uVar22 & 0x80) == 0) {
LAB_1004483ad:
                    uVar36 = ~uVar32;
                    uVar16 = 0xfffffffe;
                    if (-3 < (int)uVar36) {
                      uVar16 = uVar36;
                    }
                    uVar11 = (ulong)(uVar32 + 1 + uVar16);
                    uVar25 = uVar11 + 1;
                    uVar40 = uVar25 & 0x1fffffff8;
                    uVar8 = local_4148[uVar22 & 0x7f];
                    if (uVar40 == 0) {
                      uVar40 = 0;
                      puVar13 = puVar28;
                      uVar22 = uVar32;
                    }
                    else {
                      uVar22 = uVar32 - ((uint)uVar25 & 0xfffffff8);
                      puVar13 = puVar28 + uVar40;
                      auVar43._2_2_ = 0;
                      auVar43._0_2_ = uVar8;
                      auVar43._4_2_ = uVar8;
                      auVar43._6_2_ = 0;
                      auVar43._8_2_ = uVar8;
                      auVar43._10_2_ = 0;
                      auVar43._12_2_ = uVar8;
                      auVar43._14_2_ = 0;
                      puVar12 = puVar28 + 4;
                      if ((int)uVar36 < -2) {
                        uVar36 = 0xfffffffe;
                      }
                      uVar26 = (ulong)(uVar32 + 1 + uVar36) + 1 & 0xfffffffffffffff8;
                      do {
                        auVar42 = pshufb(auVar43,auVar44);
                        *(long *)(puVar12 + -4) = auVar42._0_8_;
                        *(long *)puVar12 = auVar42._0_8_;
                        puVar12 = puVar12 + 8;
                        uVar26 = uVar26 - 8;
                      } while (uVar26 != 0);
                    }
                    if (uVar25 != uVar40) {
                      uVar16 = ~uVar22;
                      uVar32 = 0xfffffffe;
                      if (-3 < (int)uVar16) {
                        uVar32 = uVar16;
                      }
                      iVar19 = uVar22 + 1;
                      if ((uVar22 + 2 + uVar32 & 7) != 0) {
                        if ((int)uVar16 < -2) {
                          uVar16 = 0xfffffffe;
                        }
                        iVar23 = -(uVar22 + 2 + uVar16 & 7);
                        do {
                          uVar22 = uVar22 - 1;
                          *puVar13 = uVar8;
                          puVar13 = puVar13 + 1;
                          iVar23 = iVar23 + 1;
                        } while (iVar23 != 0);
                      }
                      if (6 < iVar19 + uVar32) {
                        iVar19 = uVar22 + 1;
                        do {
                          *puVar13 = uVar8;
                          puVar13[1] = uVar8;
                          puVar13[2] = uVar8;
                          puVar13[3] = uVar8;
                          puVar13[4] = uVar8;
                          puVar13[5] = uVar8;
                          puVar13[6] = uVar8;
                          puVar13[7] = uVar8;
                          iVar19 = iVar19 + -8;
                          puVar13 = puVar13 + 8;
                        } while (1 < iVar19);
                      }
                    }
                    puVar28 = puVar28 + uVar11 + 1;
                  }
                  else {
                    uVar32 = 1;
                    do {
                      uVar16 = uVar33 + 1;
                      if (uVar6 < uVar16) break;
                      bVar14 = *(byte *)(*param_2 + (ulong)uVar33);
                      uVar32 = uVar32 + bVar14;
                      *(uint *)((long)param_2 + 0xc) = uVar16;
                      uVar33 = uVar16;
                    } while (bVar14 == 0xff);
                    if (0 < (int)uVar32) goto LAB_1004483ad;
                  }
                  uVar25 = (ulong)uVar33;
                } while (puVar28 < local_4048 + iVar15);
              }
            }
            uVar25 = (ulong)(uVar4 * param_4 + iVar27 * 2);
            if (uVar9 != 0) {
              uVar31 = (uVar31 - iVar27) * 2;
              pvVar37 = (void *)(uVar25 + param_3);
              puVar28 = local_4048;
              do {
                _memcpy(pvVar37,puVar28,(long)(int)uVar31);
                pvVar37 = (void *)((long)pvVar37 + uVar38);
                puVar28 = (ushort *)((long)puVar28 + (ulong)uVar31);
              } while (pvVar37 < (void *)(uVar25 + uVar9 + param_3));
              uVar3 = param_1[2];
              auVar44 = _DAT_100b42d40;
            }
          }
          else {
            puVar28 = local_4148;
            uVar22 = uVar33;
            do {
              iVar19 = (int)uVar25;
              uVar36 = uVar6 - iVar19;
              if (iVar19 + 2U <= uVar6) {
                uVar36 = 2;
              }
              uVar8 = 2;
              if (uVar36 != 0) {
                _memcpy(&local_414a,(void *)(uVar25 + *param_2),(ulong)uVar36);
                auVar44 = _DAT_100b42d40;
                *(uint *)((long)param_2 + 0xc) = uVar36 + iVar19;
                uVar25 = (ulong)(uVar36 + iVar19);
                uVar8 = local_414a;
              }
              *puVar28 = uVar8;
              puVar28 = puVar28 + 1;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
            if (uVar33 != 1) goto LAB_100448157;
            puVar28 = (ushort *)(param_3 + uVar4 * param_4 + lVar34 * 2);
            puVar13 = (ushort *)((long)puVar28 + (ulong)uVar9);
            if (puVar28 < puVar13) {
              lVar34 = 0;
              do {
                lVar10 = uVar38 * lVar34 + uVar24;
                uVar25 = param_3 + (lVar39 + 1 + lVar20 * 0x40) * 2 + lVar10;
                uVar11 = lVar10 + param_3 + (lVar20 * 0x40 + lVar39 +
                                            (long)(int)(((int)(lVar20 * -0x40) - uVar5) + uVar31)) *
                                            2;
                if (uVar11 < uVar25) {
                  uVar11 = uVar25;
                }
                if (0 < (int)(uVar31 - iVar27)) {
                  uVar11 = (lVar34 * -uVar38 + (~param_3 - uVar24) +
                            uVar11 + (lVar20 * -0x40 - lVar39) * 2 >> 1) + 1;
                  uVar40 = uVar11 & 0xfffffffffffffff0;
                  puVar12 = puVar28;
                  uVar25 = 0;
                  if (uVar40 != 0) {
                    puVar12 = puVar28 + uVar40;
                    auVar42 = pshufb(ZEXT216(local_4148[0]),_DAT_100b3f5b0);
                    uVar26 = 0;
                    do {
                      *(undefined1 (*) [16])(puVar28 + uVar26) = auVar42;
                      *(undefined1 (*) [16])(puVar28 + uVar26 + 8) = auVar42;
                      uVar26 = uVar26 + 0x10;
                      uVar25 = uVar40;
                    } while ((uVar11 & 0xfffffffffffffff0) != uVar26);
                  }
                  if (uVar11 != uVar25) {
                    do {
                      *puVar12 = local_4148[0];
                      puVar12 = puVar12 + 1;
                    } while (puVar12 < puVar28 + (int)(uVar31 - iVar27));
                  }
                }
                puVar28 = (ushort *)((long)puVar28 + uVar38);
                lVar34 = lVar34 + 1;
              } while (puVar28 < puVar13);
            }
          }
          uVar32 = uVar3 + 1;
          local_41c8 = local_41c8 - 0x40;
          local_41c4 = local_41c4 - 0x40;
          lVar20 = lVar20 + 1;
          lVar34 = lVar1;
        } while (lVar1 < (int)uVar32);
        uVar29 = param_1[3];
      }
      uVar31 = uVar29 + 1;
      local_4250 = local_4250 + -0x40;
      local_4254 = local_4254 - 0x40;
      iVar30 = iVar30 + 1;
      uVar4 = uVar18;
    } while ((int)uVar18 < (int)uVar31);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

