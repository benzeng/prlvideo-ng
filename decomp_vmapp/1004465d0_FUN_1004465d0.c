
void FUN_1004465d0(uint *param_1,long *param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  undefined4 *puVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  void *pvVar34;
  sbyte sVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  bool bVar40;
  uint uStack_1034c;
  int iStack_10348;
  uint uStack_102c0;
  uint uStack_102bc;
  undefined4 uStack_1024c;
  undefined4 auStack_10248 [128];
  undefined4 auStack_10048 [16390];
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(auStack_10048,0x10010);
  uVar3 = param_1[1];
  uVar28 = param_1[3];
  uVar29 = uVar28 + 1;
  if ((int)uVar3 < (int)uVar29) {
    uVar24 = (ulong)param_4;
    iStack_10348 = -2 - uVar3;
    uStack_1034c = -uVar3 - 0x41;
    uVar19 = (ulong)param_1[2];
    iVar30 = 0;
    uVar22 = uVar3;
    do {
      uVar10 = (ulong)(param_4 * 0x40 * iVar30 + uVar3 * param_4);
      uVar23 = uVar22 + 0x40;
      uVar36 = uVar23;
      if ((int)uVar29 <= (int)uVar23) {
        uVar36 = uVar29;
      }
      uVar4 = *param_1;
      uVar31 = (ulong)(int)uVar4;
      uVar38 = (int)uVar19 + 1;
      uVar12 = (ulong)uVar38;
      if ((int)uVar4 < (int)uVar38) {
        iVar7 = uVar36 - uVar22;
        uVar38 = iVar7 * param_4;
        uStack_102bc = -uVar4 - 0x41;
        uStack_102c0 = ~uVar4;
        uVar28 = ~uVar29;
        if ((int)~uVar29 <= (int)uStack_1034c) {
          uVar28 = uStack_1034c;
        }
        lVar20 = 0;
        uVar32 = uVar31;
        do {
          uVar1 = uVar32 + 0x40;
          uVar19 = uVar1;
          if ((long)(int)(uint)uVar12 < (long)uVar1) {
            uVar19 = uVar12;
          }
          iVar15 = 0;
          iVar26 = (int)uVar32;
          iVar6 = (int)uVar19;
          if (((int)uVar22 <= (int)(uVar36 - 1)) && ((long)uVar32 <= (long)(iVar6 + -1))) {
            iVar15 = (iVar6 - iVar26) * iVar7;
          }
          uVar29 = *(uint *)(param_2 + 1);
          uVar39 = *(uint *)((long)param_2 + 0xc);
          uVar21 = uVar39 + 1;
          if ((uVar29 < uVar21) && (uVar29 - uVar39 != 1)) {
            uVar16 = 0;
            uVar21 = uVar39;
          }
          else {
            uVar16 = (uint)*(byte *)(*param_2 + (ulong)uVar39);
            *(uint *)((long)param_2 + 0xc) = uVar21;
          }
          uVar19 = (ulong)uVar21;
          uVar39 = uVar16 & 0x7f;
          if (uVar39 == 0) {
LAB_100446a9e:
            if ((uVar16 & 0x80) == 0) {
              if (uVar39 == 0) {
                iVar17 = (int)uVar19;
                uVar39 = uVar29 - iVar17;
                if ((uint)(iVar17 + iVar15 * 4) <= uVar29) {
                  uVar39 = iVar15 * 4;
                }
                if (uVar39 != 0) {
                  _memcpy(auStack_10048,(void *)(uVar19 + *param_2),(ulong)uVar39);
                  *(uint *)((long)param_2 + 0xc) = iVar17 + uVar39;
                }
              }
              else {
                sVar35 = 8;
                if ((uVar39 < 0x11) && (sVar35 = 4, uVar39 < 5)) {
                  sVar35 = (2 < uVar39) + 1;
                }
                if (0 < iVar7) {
                  uVar29 = ~(uint)uVar12;
                  if ((int)uVar29 <= (int)uStack_102bc) {
                    uVar29 = uStack_102bc;
                  }
                  iVar15 = 0;
                  puVar27 = auStack_10048;
                  do {
                    if (0 < iVar6 - iVar26) {
                      puVar18 = puVar27 + 1;
                      if (puVar27 + 1 < puVar27 + (int)(uStack_102c0 - uVar29)) {
                        puVar18 = puVar27 + (int)(uStack_102c0 - uVar29);
                      }
                      uVar39 = 0;
                      bVar14 = 0;
                      puVar13 = puVar27;
                      do {
                        if (bVar14 == 0) {
                          uVar21 = *(uint *)((long)param_2 + 0xc);
                          bVar14 = 8;
                          if ((*(uint *)(param_2 + 1) < uVar21 + 1) &&
                             (*(uint *)(param_2 + 1) - uVar21 != 1)) {
                            uVar39 = 0;
                          }
                          else {
                            uVar39 = (uint)*(byte *)(*param_2 + (ulong)uVar21);
                            *(uint *)((long)param_2 + 0xc) = uVar21 + 1;
                          }
                        }
                        bVar14 = bVar14 - sVar35;
                        *puVar13 = auStack_10248
                                   [(ulong)(uVar39 >> (bVar14 & 0x1f) & (1 << sVar35) + 0x7fU) &
                                    0x7f];
                        puVar13 = puVar13 + 1;
                      } while (puVar13 < puVar27 + (iVar6 - iVar26));
                      puVar27 = (undefined4 *)
                                ((long)puVar27 +
                                (~(ulong)puVar27 + (long)puVar18 & 0xfffffffffffffffc) + 4);
                    }
                    bVar40 = iVar15 != iStack_10348 - uVar28;
                    iVar15 = iVar15 + 1;
                  } while (bVar40);
                }
              }
            }
            else if (uVar39 == 0) {
              puVar27 = auStack_10048;
              if (0 < iVar15) {
                do {
                  uVar39 = (uint)uVar19;
                  uVar21 = uVar29 - uVar39;
                  uVar8 = 4;
                  if (uVar39 + 4 <= uVar29) {
                    uVar21 = 4;
                  }
                  if (uVar21 != 0) {
                    _memcpy(&uStack_1024c,(void *)(uVar19 + *param_2),(ulong)uVar21);
                    uVar39 = uVar21 + uVar39;
                    *(uint *)((long)param_2 + 0xc) = uVar39;
                    uVar8 = uStack_1024c;
                  }
                  uVar21 = 1;
                  do {
                    uVar16 = uVar39 + 1;
                    if (uVar29 < uVar16) break;
                    bVar14 = *(byte *)(*param_2 + (ulong)uVar39);
                    uVar21 = uVar21 + bVar14;
                    *(uint *)((long)param_2 + 0xc) = uVar16;
                    uVar39 = uVar16;
                  } while (bVar14 == 0xff);
                  if (0 < (int)uVar21) {
                    uVar39 = ~uVar21;
                    uVar29 = 0xfffffffe;
                    if (-3 < (int)uVar39) {
                      uVar29 = uVar39;
                    }
                    uVar12 = (ulong)(uVar21 + 1 + uVar29);
                    uVar19 = uVar12 + 1;
                    uVar32 = uVar19 & 0x1fffffff8;
                    if (uVar32 == 0) {
                      uVar32 = 0;
                      puVar18 = puVar27;
                      uVar29 = uVar21;
                    }
                    else {
                      uVar29 = uVar21 - ((uint)uVar19 & 0xfffffff8);
                      puVar18 = puVar27 + uVar32;
                      puVar13 = puVar27 + 4;
                      if ((int)uVar39 < -2) {
                        uVar39 = 0xfffffffe;
                      }
                      uVar25 = (ulong)(uVar21 + 1 + uVar39) + 1 & 0xfffffffffffffff8;
                      do {
                        puVar13[-4] = uVar8;
                        puVar13[-3] = uVar8;
                        puVar13[-2] = uVar8;
                        puVar13[-1] = uVar8;
                        *puVar13 = uVar8;
                        puVar13[1] = uVar8;
                        puVar13[2] = uVar8;
                        puVar13[3] = uVar8;
                        puVar13 = puVar13 + 8;
                        uVar25 = uVar25 - 8;
                      } while (uVar25 != 0);
                    }
                    if (uVar19 != uVar32) {
                      uVar21 = ~uVar29;
                      uVar39 = 0xfffffffe;
                      if (-3 < (int)uVar21) {
                        uVar39 = uVar21;
                      }
                      iVar17 = uVar29 + 1;
                      if ((uVar29 + 2 + uVar39 & 7) != 0) {
                        if ((int)uVar21 < -2) {
                          uVar21 = 0xfffffffe;
                        }
                        iVar9 = -(uVar29 + 2 + uVar21 & 7);
                        do {
                          uVar29 = uVar29 - 1;
                          *puVar18 = uVar8;
                          puVar18 = puVar18 + 1;
                          iVar9 = iVar9 + 1;
                        } while (iVar9 != 0);
                      }
                      if (6 < iVar17 + uVar39) {
                        iVar17 = uVar29 + 1;
                        do {
                          *puVar18 = uVar8;
                          puVar18[1] = uVar8;
                          puVar18[2] = uVar8;
                          puVar18[3] = uVar8;
                          puVar18[4] = uVar8;
                          puVar18[5] = uVar8;
                          puVar18[6] = uVar8;
                          puVar18[7] = uVar8;
                          iVar17 = iVar17 + -8;
                          puVar18 = puVar18 + 8;
                        } while (1 < iVar17);
                      }
                    }
                    puVar27 = puVar27 + uVar12 + 1;
                  }
                  if (auStack_10048 + iVar15 <= puVar27) break;
                  uVar29 = *(uint *)(param_2 + 1);
                  uVar19 = (ulong)*(uint *)((long)param_2 + 0xc);
                } while( true );
              }
            }
            else {
              puVar27 = auStack_10048;
              if (0 < iVar15) {
                do {
                  uVar39 = (uint)uVar19;
                  uVar21 = uVar39 + 1;
                  if ((uVar29 < uVar21) && (uVar29 - uVar39 != 1)) {
                    uVar16 = 0;
                    uVar21 = uVar39;
                  }
                  else {
                    uVar16 = (uint)*(byte *)(*param_2 + uVar19);
                    *(uint *)((long)param_2 + 0xc) = uVar21;
                  }
                  uVar39 = 1;
                  if ((uVar16 & 0x80) == 0) {
LAB_100446ccb:
                    uVar21 = ~uVar39;
                    uVar29 = 0xfffffffe;
                    if (-3 < (int)uVar21) {
                      uVar29 = uVar21;
                    }
                    uVar12 = (ulong)(uVar39 + 1 + uVar29);
                    uVar19 = uVar12 + 1;
                    uVar32 = uVar19 & 0x1fffffff8;
                    uVar8 = auStack_10248[uVar16 & 0x7f];
                    if (uVar32 == 0) {
                      uVar32 = 0;
                      puVar18 = puVar27;
                      uVar29 = uVar39;
                    }
                    else {
                      uVar29 = uVar39 - ((uint)uVar19 & 0xfffffff8);
                      puVar18 = puVar27 + uVar32;
                      puVar13 = puVar27 + 4;
                      if ((int)uVar21 < -2) {
                        uVar21 = 0xfffffffe;
                      }
                      uVar25 = (ulong)(uVar39 + 1 + uVar21) + 1 & 0xfffffffffffffff8;
                      do {
                        puVar13[-4] = uVar8;
                        puVar13[-3] = uVar8;
                        puVar13[-2] = uVar8;
                        puVar13[-1] = uVar8;
                        *puVar13 = uVar8;
                        puVar13[1] = uVar8;
                        puVar13[2] = uVar8;
                        puVar13[3] = uVar8;
                        puVar13 = puVar13 + 8;
                        uVar25 = uVar25 - 8;
                      } while (uVar25 != 0);
                    }
                    if (uVar19 != uVar32) {
                      uVar21 = ~uVar29;
                      uVar39 = 0xfffffffe;
                      if (-3 < (int)uVar21) {
                        uVar39 = uVar21;
                      }
                      iVar17 = uVar29 + 1;
                      if ((uVar29 + 2 + uVar39 & 7) != 0) {
                        if ((int)uVar21 < -2) {
                          uVar21 = 0xfffffffe;
                        }
                        iVar9 = -(uVar29 + 2 + uVar21 & 7);
                        do {
                          uVar29 = uVar29 - 1;
                          *puVar18 = uVar8;
                          puVar18 = puVar18 + 1;
                          iVar9 = iVar9 + 1;
                        } while (iVar9 != 0);
                      }
                      if (6 < iVar17 + uVar39) {
                        iVar17 = uVar29 + 1;
                        do {
                          *puVar18 = uVar8;
                          puVar18[1] = uVar8;
                          puVar18[2] = uVar8;
                          puVar18[3] = uVar8;
                          puVar18[4] = uVar8;
                          puVar18[5] = uVar8;
                          puVar18[6] = uVar8;
                          puVar18[7] = uVar8;
                          iVar17 = iVar17 + -8;
                          puVar18 = puVar18 + 8;
                        } while (1 < iVar17);
                      }
                    }
                    puVar27 = puVar27 + uVar12 + 1;
                  }
                  else {
                    uVar39 = 1;
                    do {
                      uVar33 = uVar21 + 1;
                      if (uVar29 < uVar33) break;
                      bVar14 = *(byte *)(*param_2 + (ulong)uVar21);
                      uVar39 = uVar39 + bVar14;
                      *(uint *)((long)param_2 + 0xc) = uVar33;
                      uVar21 = uVar33;
                    } while (bVar14 == 0xff);
                    if (0 < (int)uVar39) goto LAB_100446ccb;
                  }
                  if (auStack_10048 + iVar15 <= puVar27) break;
                  uVar29 = *(uint *)(param_2 + 1);
                  uVar19 = (ulong)*(uint *)((long)param_2 + 0xc);
                } while( true );
              }
            }
            uVar19 = (ulong)(uVar22 * param_4 + iVar26 * 4);
            if (uVar38 != 0) {
              uVar29 = (iVar6 - iVar26) * 4;
              pvVar34 = (void *)(uVar19 + param_3);
              puVar27 = auStack_10048;
              do {
                _memcpy(pvVar34,puVar27,(long)(int)uVar29);
                pvVar34 = (void *)((long)pvVar34 + uVar24);
                puVar27 = (undefined4 *)((long)puVar27 + (ulong)uVar29);
              } while (pvVar34 < (void *)(uVar19 + uVar38 + param_3));
            }
          }
          else {
            puVar27 = auStack_10248;
            uVar21 = uVar39;
            do {
              iVar17 = (int)uVar19;
              uVar33 = uVar29 - iVar17;
              if (iVar17 + 4U <= uVar29) {
                uVar33 = 4;
              }
              uVar8 = 4;
              if (uVar33 != 0) {
                _memcpy(&uStack_1024c,(void *)(uVar19 + *param_2),(ulong)uVar33);
                *(uint *)((long)param_2 + 0xc) = uVar33 + iVar17;
                uVar19 = (ulong)(uVar33 + iVar17);
                uVar8 = uStack_1024c;
              }
              *puVar27 = uVar8;
              puVar27 = puVar27 + 1;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
            if (uVar39 != 1) goto LAB_100446a9e;
            puVar27 = (undefined4 *)(param_3 + uVar22 * param_4 + uVar32 * 4);
            puVar18 = (undefined4 *)((long)puVar27 + (ulong)uVar38);
            if (puVar27 < puVar18) {
              lVar37 = 0;
              while( true ) {
                lVar11 = uVar24 * lVar37 + uVar10;
                uVar19 = param_3 + (uVar31 + 1 + lVar20 * 0x40) * 4 + lVar11;
                uVar12 = lVar11 + param_3 + (lVar20 * 0x40 + uVar31 +
                                            (long)(int)(((int)(lVar20 * -0x40) - uVar4) + iVar6)) *
                                            4;
                if (uVar12 < uVar19) {
                  uVar12 = uVar19;
                }
                if (0 < iVar6 - iVar26) {
                  uVar12 = (lVar37 * -uVar24 + (~param_3 - uVar10) +
                            uVar12 + (lVar20 * -0x40 - uVar31) * 4 >> 2) + 1;
                  uVar32 = uVar12 & 0x7ffffffffffffff8;
                  puVar13 = puVar27;
                  uVar19 = 0;
                  if (uVar32 != 0) {
                    puVar13 = puVar27 + uVar32;
                    uVar25 = 0;
                    do {
                      puVar2 = puVar27 + uVar25;
                      *puVar2 = auStack_10248[0];
                      puVar2[1] = auStack_10248[0];
                      puVar2[2] = auStack_10248[0];
                      puVar2[3] = auStack_10248[0];
                      puVar2 = puVar27 + uVar25 + 4;
                      *puVar2 = auStack_10248[0];
                      puVar2[1] = auStack_10248[0];
                      puVar2[2] = auStack_10248[0];
                      puVar2[3] = auStack_10248[0];
                      uVar25 = uVar25 + 8;
                      uVar19 = uVar32;
                    } while ((uVar12 & 0xfffffffffffffff8) != uVar25);
                  }
                  if (uVar12 != uVar19) {
                    do {
                      *puVar13 = auStack_10248[0];
                      puVar13 = puVar13 + 1;
                    } while (puVar13 < puVar27 + (iVar6 - iVar26));
                  }
                }
                puVar27 = (undefined4 *)((long)puVar27 + uVar24);
                if (puVar18 <= puVar27) break;
                lVar37 = lVar37 + 1;
              }
            }
          }
          uVar19 = (ulong)(int)param_1[2];
          uVar12 = uVar19 + 1;
          uStack_102c0 = uStack_102c0 - 0x40;
          uStack_102bc = uStack_102bc - 0x40;
          lVar20 = lVar20 + 1;
          uVar32 = uVar1;
        } while ((long)uVar1 < (long)uVar12);
        uVar28 = param_1[3];
      }
      uVar29 = uVar28 + 1;
      iStack_10348 = iStack_10348 + -0x40;
      uStack_1034c = uStack_1034c - 0x40;
      iVar30 = iVar30 + 1;
      uVar22 = uVar23;
    } while ((int)uVar23 < (int)uVar29);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != lVar5) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

