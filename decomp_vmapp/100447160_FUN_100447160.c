
void FUN_100447160(uint *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined2 *puVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  int iVar22;
  uint uVar23;
  undefined2 *puVar24;
  void *pvVar25;
  sbyte sVar26;
  uint uVar27;
  bool bVar28;
  uint local_927c;
  int local_9278;
  uint local_9238;
  uint local_9234;
  undefined2 local_91d8;
  undefined1 local_91d6;
  undefined2 local_91d4;
  undefined1 local_91d2;
  undefined2 local_91d0;
  undefined1 local_91ce;
  undefined2 local_91cc;
  undefined1 local_91ca;
  undefined2 local_91c8;
  undefined1 local_91c6 [382];
  undefined2 local_9048 [18440];
  long local_38;
  ulong uVar21;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_9048,0x900c);
  uVar3 = param_1[1];
  uVar12 = param_1[3];
  uVar7 = uVar12 + 1;
  if ((int)uVar3 < (int)uVar7) {
    local_9278 = -2 - uVar3;
    local_927c = -uVar3 - 0x41;
    uVar11 = (ulong)param_1[2];
    do {
      uVar17 = uVar3 + 0x40;
      uVar4 = uVar17;
      if ((int)uVar7 <= (int)uVar17) {
        uVar4 = uVar7;
      }
      uVar16 = *param_1;
      uVar20 = (int)uVar11 + 1;
      uVar21 = (ulong)uVar20;
      if ((int)uVar16 < (int)uVar20) {
        iVar22 = uVar4 - uVar3;
        uVar20 = iVar22 * param_4;
        local_9234 = -uVar16 - 0x41;
        uVar12 = ~uVar7;
        if ((int)~uVar7 <= (int)local_927c) {
          uVar12 = local_927c;
        }
        local_9238 = ~uVar16;
        uVar19 = (long)(int)uVar16;
        do {
          puVar24 = &local_91c8;
          uVar1 = uVar19 + 0x40;
          uVar11 = uVar1;
          if ((long)(int)(uint)uVar21 < (long)uVar1) {
            uVar11 = uVar21;
          }
          iVar15 = 0;
          iVar18 = (int)uVar19;
          iVar5 = (int)uVar11;
          if (((int)uVar3 <= (int)(uVar4 - 1)) && ((long)uVar19 <= (long)(iVar5 + -1))) {
            iVar15 = (iVar5 - iVar18) * iVar22;
          }
          uVar7 = *(uint *)(param_2 + 1);
          uVar16 = *(uint *)((long)param_2 + 0xc);
          uVar27 = uVar16 + 1;
          if ((uVar7 < uVar27) && (uVar7 - uVar16 != 1)) {
            uVar13 = 0;
            uVar27 = uVar16;
          }
          else {
            uVar13 = (uint)*(byte *)(*param_2 + (ulong)uVar16);
            *(uint *)((long)param_2 + 0xc) = uVar27;
          }
          ___bzero(puVar24);
          uVar10 = uVar13 & 0x7f;
          uVar16 = uVar10;
          if ((uVar13 & 0x7f) == 0) {
LAB_1004474b6:
            if ((uVar13 & 0x80) == 0) {
              if ((uVar13 & 0x7f) == 0) {
                uVar16 = uVar7 - uVar27;
                if (uVar27 + iVar15 * 3 <= uVar7) {
                  uVar16 = iVar15 * 3;
                }
                if (uVar16 != 0) {
                  _memcpy(local_9048,(void *)((ulong)uVar27 + *param_2),(ulong)uVar16);
                  *(uint *)((long)param_2 + 0xc) = uVar27 + uVar16;
                }
              }
              else {
                sVar26 = 8;
                if ((uVar10 < 0x11) && (sVar26 = 4, uVar10 < 5)) {
                  sVar26 = (2 < uVar10) + 1;
                }
                if (0 < iVar22) {
                  uVar7 = ~(uint)uVar21;
                  if ((int)uVar7 <= (int)local_9234) {
                    uVar7 = local_9234;
                  }
                  iVar15 = 0;
                  puVar24 = local_9048;
                  do {
                    if (0 < iVar5 - iVar18) {
                      uVar11 = (long)(int)(local_9238 - uVar7) * 3 + (long)puVar24;
                      if (uVar11 <= (long)puVar24 + 3U) {
                        uVar11 = (long)puVar24 + 3U;
                      }
                      bVar9 = 0;
                      uVar16 = 0;
                      puVar8 = puVar24;
                      do {
                        if (bVar9 == 0) {
                          uVar27 = *(uint *)((long)param_2 + 0xc);
                          bVar9 = 8;
                          if ((*(uint *)(param_2 + 1) < uVar27 + 1) &&
                             (*(uint *)(param_2 + 1) - uVar27 != 1)) {
                            uVar16 = 0;
                          }
                          else {
                            uVar16 = (uint)*(byte *)(*param_2 + (ulong)uVar27);
                            *(uint *)((long)param_2 + 0xc) = uVar27 + 1;
                          }
                        }
                        bVar9 = bVar9 - sVar26;
                        lVar6 = ((ulong)(uVar16 >> (bVar9 & 0x1f) & (1 << sVar26) + 0x7fU) & 0x7f) *
                                3;
                        *(undefined1 *)(puVar8 + 1) = local_91c6[lVar6];
                        *puVar8 = *(undefined2 *)(local_91c6 + lVar6 + -2);
                        puVar8 = (undefined2 *)((long)puVar8 + 3);
                      } while (puVar8 < (undefined2 *)((long)(iVar5 - iVar18) * 3 + (long)puVar24));
                      puVar24 = (undefined2 *)
                                ((long)puVar24 + ((~(ulong)puVar24 + uVar11) / 3) * 3 + 3);
                    }
                    bVar28 = iVar15 != local_9278 - uVar12;
                    iVar15 = iVar15 + 1;
                  } while (bVar28);
                }
              }
            }
            else {
              puVar24 = (undefined2 *)((long)local_9048 + (long)iVar15 * 3);
              if ((uVar13 & 0x7f) == 0) {
                puVar8 = local_9048;
                if (0 < iVar15) {
                  do {
                    local_91d2 = 0;
                    local_91d4 = 0;
                    uVar16 = uVar7 - uVar27;
                    if (uVar27 + 3 <= uVar7) {
                      uVar16 = 3;
                    }
                    if (uVar16 != 0) {
                      _memcpy(&local_91d4,(void *)((ulong)uVar27 + *param_2),(ulong)uVar16);
                      uVar27 = uVar16 + uVar27;
                      *(uint *)((long)param_2 + 0xc) = uVar27;
                    }
                    uVar16 = 1;
                    do {
                      uVar13 = uVar27 + 1;
                      if (uVar7 < uVar13) break;
                      bVar9 = *(byte *)(*param_2 + (ulong)uVar27);
                      uVar16 = uVar16 + bVar9;
                      *(uint *)((long)param_2 + 0xc) = uVar13;
                      uVar27 = uVar13;
                    } while (bVar9 == 0xff);
                    if (0 < (int)uVar16) {
                      uVar27 = ~uVar16;
                      uVar7 = 0xfffffffe;
                      if (-3 < (int)uVar27) {
                        uVar7 = uVar27;
                      }
                      uVar13 = uVar16 + 1 + uVar7;
                      puVar14 = puVar8;
                      if ((uVar16 + 2 + uVar7 & 7) != 0) {
                        if ((int)uVar27 < -2) {
                          uVar27 = 0xfffffffe;
                        }
                        iVar15 = -(uVar16 + 2 + uVar27 & 7);
                        do {
                          uVar16 = uVar16 - 1;
                          *(undefined1 *)(puVar14 + 1) = local_91d2;
                          *puVar14 = local_91d4;
                          puVar14 = (undefined2 *)((long)puVar14 + 3);
                          iVar15 = iVar15 + 1;
                        } while (iVar15 != 0);
                      }
                      if (6 < uVar13) {
                        iVar15 = uVar16 + 1;
                        do {
                          *(undefined1 *)(puVar14 + 1) = local_91d2;
                          *puVar14 = local_91d4;
                          *(undefined1 *)((long)puVar14 + 5) = local_91d2;
                          *(undefined2 *)((long)puVar14 + 3) = local_91d4;
                          *(undefined1 *)(puVar14 + 4) = local_91d2;
                          puVar14[3] = local_91d4;
                          *(undefined1 *)((long)puVar14 + 0xb) = local_91d2;
                          *(undefined2 *)((long)puVar14 + 9) = local_91d4;
                          *(undefined1 *)(puVar14 + 7) = local_91d2;
                          puVar14[6] = local_91d4;
                          *(undefined1 *)((long)puVar14 + 0x11) = local_91d2;
                          *(undefined2 *)((long)puVar14 + 0xf) = local_91d4;
                          *(undefined1 *)(puVar14 + 10) = local_91d2;
                          puVar14[9] = local_91d4;
                          *(undefined1 *)((long)puVar14 + 0x17) = local_91d2;
                          *(undefined2 *)((long)puVar14 + 0x15) = local_91d4;
                          iVar15 = iVar15 + -8;
                          puVar14 = puVar14 + 0xc;
                        } while (1 < iVar15);
                      }
                      puVar8 = (undefined2 *)((long)puVar8 + (ulong)uVar13 * 3 + 3);
                    }
                    if (puVar24 <= puVar8) break;
                    uVar7 = *(uint *)(param_2 + 1);
                    uVar27 = *(uint *)((long)param_2 + 0xc);
                  } while( true );
                }
              }
              else {
                puVar8 = local_9048;
                if (0 < iVar15) {
                  do {
                    uVar16 = uVar27 + 1;
                    if ((uVar7 < uVar16) && (uVar7 - uVar27 != 1)) {
                      bVar9 = 0;
                      uVar16 = uVar27;
                    }
                    else {
                      bVar9 = *(byte *)(*param_2 + (ulong)uVar27);
                      *(uint *)((long)param_2 + 0xc) = uVar16;
                    }
                    if ((bVar9 & 0x80) == 0) {
                      lVar6 = (ulong)(bVar9 & 0x7f) * 3;
                      local_91d6 = local_91c6[lVar6];
                      local_91d8 = *(undefined2 *)(local_91c6 + lVar6 + -2);
                      uVar27 = 1;
LAB_100447783:
                      uVar16 = ~uVar27;
                      uVar7 = 0xfffffffe;
                      if (-3 < (int)uVar16) {
                        uVar7 = uVar16;
                      }
                      uVar13 = uVar27 + 1 + uVar7;
                      puVar14 = puVar8;
                      if ((uVar27 + 2 + uVar7 & 7) != 0) {
                        if ((int)uVar16 < -2) {
                          uVar16 = 0xfffffffe;
                        }
                        iVar15 = -(uVar27 + 2 + uVar16 & 7);
                        do {
                          uVar27 = uVar27 - 1;
                          *(undefined1 *)(puVar14 + 1) = local_91d6;
                          *puVar14 = local_91d8;
                          puVar14 = (undefined2 *)((long)puVar14 + 3);
                          iVar15 = iVar15 + 1;
                        } while (iVar15 != 0);
                      }
                      if (6 < uVar13) {
                        iVar15 = uVar27 + 1;
                        do {
                          *(undefined1 *)(puVar14 + 1) = local_91d6;
                          *puVar14 = local_91d8;
                          *(undefined1 *)((long)puVar14 + 5) = local_91d6;
                          *(undefined2 *)((long)puVar14 + 3) = local_91d8;
                          *(undefined1 *)(puVar14 + 4) = local_91d6;
                          puVar14[3] = local_91d8;
                          *(undefined1 *)((long)puVar14 + 0xb) = local_91d6;
                          *(undefined2 *)((long)puVar14 + 9) = local_91d8;
                          *(undefined1 *)(puVar14 + 7) = local_91d6;
                          puVar14[6] = local_91d8;
                          *(undefined1 *)((long)puVar14 + 0x11) = local_91d6;
                          *(undefined2 *)((long)puVar14 + 0xf) = local_91d8;
                          *(undefined1 *)(puVar14 + 10) = local_91d6;
                          puVar14[9] = local_91d8;
                          *(undefined1 *)((long)puVar14 + 0x17) = local_91d6;
                          *(undefined2 *)((long)puVar14 + 0x15) = local_91d8;
                          iVar15 = iVar15 + -8;
                          puVar14 = puVar14 + 0xc;
                        } while (1 < iVar15);
                      }
                      puVar8 = (undefined2 *)((long)puVar8 + (ulong)uVar13 * 3 + 3);
                    }
                    else {
                      uVar27 = 1;
                      do {
                        uVar13 = uVar16 + 1;
                        if (uVar7 < uVar13) break;
                        bVar2 = *(byte *)(*param_2 + (ulong)uVar16);
                        uVar27 = uVar27 + bVar2;
                        *(uint *)((long)param_2 + 0xc) = uVar13;
                        uVar16 = uVar13;
                      } while (bVar2 == 0xff);
                      lVar6 = (ulong)(bVar9 & 0x7f) * 3;
                      local_91d6 = local_91c6[lVar6];
                      local_91d8 = *(undefined2 *)(local_91c6 + lVar6 + -2);
                      if (0 < (int)uVar27) goto LAB_100447783;
                    }
                    if (puVar24 <= puVar8) break;
                    uVar7 = *(uint *)(param_2 + 1);
                    uVar27 = *(uint *)((long)param_2 + 0xc);
                  } while( true );
                }
              }
            }
            uVar11 = (ulong)(iVar18 * 3 + uVar3 * param_4);
            if (uVar20 != 0) {
              uVar7 = (iVar5 - iVar18) * 3;
              pvVar25 = (void *)(uVar11 + param_3);
              puVar24 = local_9048;
              do {
                _memcpy(pvVar25,puVar24,(long)(int)uVar7);
                pvVar25 = (void *)((long)pvVar25 + (ulong)param_4);
                puVar24 = (undefined2 *)((long)puVar24 + (ulong)uVar7);
              } while (pvVar25 < (void *)(uVar11 + uVar20 + param_3));
            }
          }
          else {
            do {
              local_91ca = 0;
              local_91cc = 0;
              uVar23 = uVar7 - uVar27;
              if (uVar27 + 3 <= uVar7) {
                uVar23 = 3;
              }
              if (uVar23 != 0) {
                _memcpy(&local_91cc,(void *)((ulong)uVar27 + *param_2),(ulong)uVar23);
                uVar27 = uVar23 + uVar27;
                *(uint *)((long)param_2 + 0xc) = uVar27;
              }
              *(undefined1 *)(puVar24 + 1) = local_91ca;
              *puVar24 = local_91cc;
              puVar24 = (undefined2 *)((long)puVar24 + 3);
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            if (uVar10 != 1) goto LAB_1004474b6;
            local_91ce = local_91c6[0];
            local_91d0 = local_91c8;
            puVar8 = (undefined2 *)(uVar19 * 3 + param_3 + (ulong)(uVar3 * param_4));
            puVar24 = (undefined2 *)((long)puVar8 + (ulong)uVar20);
            if (puVar8 < puVar24) {
              do {
                if (0 < iVar5 - iVar18) {
                  puVar14 = puVar8;
                  do {
                    *(undefined1 *)(puVar14 + 1) = local_91c6[0];
                    *puVar14 = local_91c8;
                    puVar14 = (undefined2 *)((long)puVar14 + 3);
                  } while (puVar14 < (undefined2 *)((long)(iVar5 - iVar18) * 3 + (long)puVar8));
                }
                puVar8 = (undefined2 *)((long)puVar8 + (ulong)param_4);
              } while (puVar8 < puVar24);
            }
          }
          uVar11 = (ulong)(int)param_1[2];
          uVar21 = uVar11 + 1;
          local_9238 = local_9238 - 0x40;
          local_9234 = local_9234 - 0x40;
          uVar19 = uVar1;
        } while ((long)uVar1 < (long)uVar21);
        uVar12 = param_1[3];
      }
      uVar7 = uVar12 + 1;
      local_9278 = local_9278 + -0x40;
      local_927c = local_927c - 0x40;
      uVar3 = uVar17;
    } while ((int)uVar17 < (int)uVar7);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

