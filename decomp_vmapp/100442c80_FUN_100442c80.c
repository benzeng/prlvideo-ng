
void FUN_100442c80(int *param_1,long *param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined2 *puVar23;
  int iVar24;
  ulong uVar25;
  undefined2 uVar26;
  int iVar27;
  long lVar28;
  undefined2 *puVar29;
  undefined1 *puVar30;
  int iVar31;
  byte bVar32;
  uint uVar33;
  void *pvVar34;
  uint uVar35;
  uint uVar36;
  undefined2 *puVar37;
  bool bVar38;
  ulong local_3e8;
  ulong local_3d0;
  uint3 local_344;
  uint3 local_340;
  uint3 local_33c;
  undefined1 local_338 [768];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_338,0x300);
  iVar2 = param_1[1];
  iVar24 = param_1[3] + 1;
  if (iVar2 < iVar24) {
    uVar16 = (ulong)param_4;
    iVar9 = param_1[2];
    iVar27 = 0;
    local_3d0 = 0;
    local_3e8 = 0;
    iVar6 = iVar2;
    uVar15 = iVar2 * param_4;
    do {
      uVar21 = (ulong)(param_4 * 0x10 * iVar27 + iVar2 * param_4);
      iVar7 = iVar6 + 0x10;
      if (iVar7 < iVar24) {
        iVar24 = iVar7;
      }
      iVar31 = iVar9 + 1;
      if (*param_1 < iVar31) {
        uVar20 = (iVar24 - iVar6) * param_4;
        iVar4 = *param_1;
        do {
          while( true ) {
            iVar8 = iVar4 + 0x10;
            if (iVar8 < iVar31) {
              iVar31 = iVar8;
            }
            uVar33 = *(uint *)(param_2 + 1);
            uVar36 = *(uint *)((long)param_2 + 0xc);
            uVar35 = uVar36 + 1;
            if ((uVar33 < uVar35) && (uVar33 - uVar36 != 1)) {
              bVar32 = 0;
              uVar35 = uVar36;
            }
            else {
              bVar32 = *(byte *)(*param_2 + (ulong)uVar36);
              *(uint *)((long)param_2 + 0xc) = uVar35;
            }
            iVar14 = 0;
            if ((iVar6 <= iVar24 + -1) && (iVar14 = 0, iVar4 <= iVar31 + -1)) {
              iVar14 = (iVar31 - iVar4) * (iVar24 - iVar6);
            }
            if ((bVar32 & 1) == 0) break;
            uVar36 = uVar33 - uVar35;
            if (uVar35 + iVar14 * 3 <= uVar33) {
              uVar36 = iVar14 * 3;
            }
            if (uVar36 != 0) {
              _memcpy(local_338,(void *)((ulong)uVar35 + *param_2),(ulong)uVar36);
              *(uint *)((long)param_2 + 0xc) = uVar35 + uVar36;
            }
            uVar22 = (ulong)(iVar4 * 3 + iVar6 * param_4);
            if (uVar20 != 0) {
              uVar33 = (iVar31 - iVar4) * 3;
              pvVar34 = (void *)(uVar22 + param_3);
              puVar30 = local_338;
              do {
                _memcpy(pvVar34,puVar30,(long)(int)uVar33);
                pvVar34 = (void *)((long)pvVar34 + uVar16);
                puVar30 = puVar30 + uVar33;
              } while (pvVar34 < (void *)(uVar22 + uVar20 + param_3));
              iVar9 = param_1[2];
            }
            iVar31 = iVar9 + 1;
            iVar4 = iVar8;
            if (iVar31 <= iVar8) goto LAB_100443629;
          }
          if ((bVar32 & 2) != 0) {
            local_33c = 0;
            uVar36 = uVar33 - uVar35;
            if (uVar35 + 3 <= uVar33) {
              uVar36 = 3;
            }
            local_3e8 = 0;
            if (uVar36 != 0) {
              _memcpy(&local_33c,(void *)((ulong)uVar35 + *param_2),(ulong)uVar36);
              *(uint *)((long)param_2 + 0xc) = uVar36 + uVar35;
              local_3e8 = (ulong)local_33c;
            }
          }
          lVar10 = (long)iVar4;
          puVar37 = (undefined2 *)(param_3 + iVar6 * param_4 + lVar10 * 3);
          puVar29 = (undefined2 *)((long)puVar37 + (ulong)uVar20);
          if (puVar37 < puVar29) {
            iVar31 = iVar31 - iVar4;
            puVar37 = (undefined2 *)(lVar10 * 3 + param_3 + uVar15);
            lVar28 = 0;
            while( true ) {
              lVar11 = uVar16 * lVar28 + uVar21;
              uVar17 = (lVar10 + iVar31) * 3 + param_3 + lVar11;
              uVar22 = (lVar10 + 1) * 3 + param_3 + lVar11;
              if (uVar22 < uVar17) {
                uVar22 = uVar17;
              }
              uVar22 = lVar10 * -3 + uVar22 + lVar28 * -uVar16 + (~param_3 - uVar21);
              if (0 < iVar31) {
                uVar18 = uVar22 / 3 + 1;
                uVar26 = (undefined2)local_3e8;
                uVar3 = (undefined1)(local_3e8 >> 0x10);
                uVar17 = 0;
                puVar23 = puVar37;
                if ((uVar18 & 0xfffffffffffffffe) != 0) {
                  puVar23 = (undefined2 *)((uVar18 & 0xfffffffffffffffe) * 3 + (long)puVar37);
                  uVar22 = uVar22 / 3 + 1 & 0xfffffffffffffffe;
                  puVar12 = puVar37;
                  do {
                    *puVar12 = uVar26;
                    *(undefined1 *)(puVar12 + 1) = uVar3;
                    *(undefined1 *)((long)puVar12 + 5) = uVar3;
                    *(undefined2 *)((long)puVar12 + 3) = uVar26;
                    puVar12 = puVar12 + 3;
                    uVar22 = uVar22 - 2;
                    uVar17 = uVar18 & 0xfffffffffffffffe;
                  } while (uVar22 != 0);
                }
                if (uVar18 != uVar17) {
                  do {
                    *puVar23 = uVar26;
                    *(undefined1 *)(puVar23 + 1) = uVar3;
                    puVar23 = (undefined2 *)((long)puVar23 + 3);
                  } while (puVar23 < (undefined2 *)((long)iVar31 * 3 + (long)puVar37));
                }
              }
              puVar37 = (undefined2 *)((long)puVar37 + uVar16);
              if (puVar29 <= puVar37) break;
              lVar28 = lVar28 + 1;
            }
          }
          if ((bVar32 & 4) != 0) {
            local_340 = 0;
            uVar33 = *(uint *)((long)param_2 + 0xc);
            uVar36 = *(uint *)(param_2 + 1) - uVar33;
            if (uVar33 + 3 <= *(uint *)(param_2 + 1)) {
              uVar36 = 3;
            }
            local_3d0 = 0;
            if (uVar36 != 0) {
              _memcpy(&local_340,(void *)((ulong)uVar33 + *param_2),(ulong)uVar36);
              *(uint *)((long)param_2 + 0xc) = uVar33 + uVar36;
              local_3d0 = (ulong)local_340;
            }
          }
          if ((bVar32 & 8) != 0) {
            uVar33 = *(uint *)((long)param_2 + 0xc);
            if ((uVar33 + 1 <= *(uint *)(param_2 + 1)) || (*(uint *)(param_2 + 1) - uVar33 == 1)) {
              bVar1 = *(byte *)(*param_2 + (ulong)uVar33);
              *(uint *)((long)param_2 + 0xc) = uVar33 + 1;
              if (bVar1 != 0) {
                iVar9 = 0;
                do {
                  if ((bVar32 & 0x10) == 0) {
                    uVar33 = *(uint *)(param_2 + 1);
                    uVar36 = *(uint *)((long)param_2 + 0xc);
                  }
                  else {
                    local_344 = 0;
                    uVar33 = *(uint *)(param_2 + 1);
                    uVar36 = *(uint *)((long)param_2 + 0xc);
                    uVar35 = uVar33 - uVar36;
                    if (uVar36 + 3 <= uVar33) {
                      uVar35 = 3;
                    }
                    local_3d0 = 0;
                    if (uVar35 != 0) {
                      _memcpy(&local_344,(void *)(*param_2 + (ulong)uVar36),(ulong)uVar35);
                      uVar36 = uVar36 + uVar35;
                      *(uint *)((long)param_2 + 0xc) = uVar36;
                      local_3d0 = (ulong)local_344;
                    }
                  }
                  uVar35 = uVar36 + 1;
                  if ((uVar33 < uVar35) && (uVar33 - uVar36 != 1)) {
                    bVar13 = 0;
                    uVar35 = uVar36;
                  }
                  else {
                    bVar13 = *(byte *)(*param_2 + (ulong)uVar36);
                    *(uint *)((long)param_2 + 0xc) = uVar35;
                  }
                  if ((uVar33 < uVar35 + 1) && (uVar33 - uVar35 != 1)) {
                    bVar5 = 0;
                  }
                  else {
                    bVar5 = *(byte *)(*param_2 + (ulong)uVar35);
                    *(uint *)((long)param_2 + 0xc) = uVar35 + 1;
                  }
                  uVar22 = (ulong)(((bVar13 & 0xf) + iVar6) * param_4);
                  lVar10 = (long)(int)((uint)(bVar13 >> 4) + iVar4);
                  puVar37 = (undefined2 *)(param_3 + uVar22 + lVar10 * 3);
                  puVar29 = (undefined2 *)((ulong)(((bVar5 & 0xf) + 1) * param_4) + (long)puVar37);
                  if (puVar37 < puVar29) {
                    uVar17 = (ulong)((bVar5 >> 4) + 1);
                    uVar18 = (ulong)(((bVar13 & 0xf) + iVar27 * 0x10 + iVar2) * param_4);
                    puVar37 = (undefined2 *)(lVar10 * 3 + param_3 + uVar22);
                    lVar28 = 0;
                    while( true ) {
                      lVar11 = uVar16 * lVar28 + uVar18;
                      uVar19 = (lVar10 + uVar17) * 3 + param_3 + lVar11;
                      uVar22 = (lVar10 + 1) * 3 + param_3 + lVar11;
                      if (uVar22 < uVar19) {
                        uVar22 = uVar19;
                      }
                      uVar25 = lVar10 * -3 + uVar22 + lVar28 * -uVar16 + (~param_3 - uVar18);
                      uVar19 = uVar25 / 3 + 1;
                      uVar26 = (undefined2)local_3d0;
                      uVar3 = (undefined1)(local_3d0 >> 0x10);
                      uVar22 = 0;
                      puVar23 = puVar37;
                      if ((uVar19 & 0xfffffffffffffffe) != 0) {
                        puVar23 = (undefined2 *)((uVar19 & 0xfffffffffffffffe) * 3 + (long)puVar37);
                        uVar25 = uVar25 / 3 + 1 & 0xfffffffffffffffe;
                        puVar12 = puVar37;
                        do {
                          *puVar12 = uVar26;
                          *(undefined1 *)(puVar12 + 1) = uVar3;
                          *(undefined1 *)((long)puVar12 + 5) = uVar3;
                          *(undefined2 *)((long)puVar12 + 3) = uVar26;
                          puVar12 = puVar12 + 3;
                          uVar25 = uVar25 - 2;
                          uVar22 = uVar19 & 0xfffffffffffffffe;
                        } while (uVar25 != 0);
                      }
                      if (uVar19 != uVar22) {
                        do {
                          *puVar23 = uVar26;
                          *(undefined1 *)(puVar23 + 1) = uVar3;
                          puVar23 = (undefined2 *)((long)puVar23 + 3);
                        } while (puVar23 < (undefined2 *)(uVar17 * 3 + (long)puVar37));
                      }
                      puVar37 = (undefined2 *)((long)puVar37 + uVar16);
                      if (puVar29 <= puVar37) break;
                      lVar28 = lVar28 + 1;
                    }
                  }
                  bVar38 = iVar9 != bVar1 - 1;
                  iVar9 = iVar9 + 1;
                } while (bVar38);
              }
            }
          }
          iVar9 = param_1[2];
          iVar31 = iVar9 + 1;
          iVar4 = iVar8;
        } while (iVar8 < iVar31);
      }
LAB_100443629:
      iVar24 = param_1[3] + 1;
      iVar27 = iVar27 + 1;
      uVar15 = uVar15 + param_4 * 0x10;
      iVar6 = iVar7;
    } while (iVar7 < iVar24);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

