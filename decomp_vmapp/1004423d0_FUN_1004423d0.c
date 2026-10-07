
void FUN_1004423d0(int *param_1,long *param_2,ulong param_3,uint param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  undefined4 *puVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined1 *puVar30;
  ulong uVar31;
  byte bVar32;
  long lVar33;
  uint uVar34;
  void *pvVar35;
  uint uVar36;
  ulong uVar37;
  bool bVar38;
  undefined4 local_43c;
  undefined1 local_438 [1024];
  long local_38;
  
  uVar37 = (ulong)param_4;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_438,0x400);
  iVar3 = param_1[1];
  iVar24 = param_1[3] + 1;
  if (iVar3 < iVar24) {
    iVar14 = param_1[2];
    iVar18 = 0;
    uVar19 = 0;
    uVar7 = 0;
    iVar4 = iVar3;
    do {
      uVar20 = (ulong)(param_4 * 0x10 * iVar18 + iVar3 * param_4);
      iVar12 = iVar4 + 0x10;
      if (iVar12 < iVar24) {
        iVar24 = iVar12;
      }
      iVar27 = iVar14 + 1;
      if (*param_1 < iVar27) {
        uVar17 = (iVar24 - iVar4) * param_4;
        iVar5 = *param_1;
        do {
          while( true ) {
            iVar22 = iVar5 + 0x10;
            if (iVar22 < iVar27) {
              iVar27 = iVar22;
            }
            uVar25 = *(uint *)(param_2 + 1);
            uVar36 = *(uint *)((long)param_2 + 0xc);
            uVar34 = uVar36 + 1;
            if ((uVar25 < uVar34) && (uVar25 - uVar36 != 1)) {
              bVar32 = 0;
              uVar34 = uVar36;
            }
            else {
              bVar32 = *(byte *)(*param_2 + (ulong)uVar36);
              *(uint *)((long)param_2 + 0xc) = uVar34;
            }
            iVar13 = 0;
            if ((iVar4 <= iVar24 + -1) && (iVar5 <= iVar27 + -1)) {
              iVar13 = (iVar27 - iVar5) * (iVar24 - iVar4);
            }
            if ((bVar32 & 1) == 0) break;
            uVar36 = uVar25 - uVar34;
            if (uVar34 + iVar13 * 4 <= uVar25) {
              uVar36 = iVar13 * 4;
            }
            if (uVar36 != 0) {
              _memcpy(local_438,(void *)((ulong)uVar34 + *param_2),(ulong)uVar36);
              *(uint *)((long)param_2 + 0xc) = uVar34 + uVar36;
            }
            uVar10 = (ulong)(iVar4 * param_4 + iVar5 * 4);
            if (uVar17 != 0) {
              uVar25 = (iVar27 - iVar5) * 4;
              pvVar35 = (void *)(uVar10 + param_3);
              puVar30 = local_438;
              do {
                _memcpy(pvVar35,puVar30,(long)(int)uVar25);
                pvVar35 = (void *)((long)pvVar35 + uVar37);
                puVar30 = puVar30 + uVar25;
              } while (pvVar35 < (void *)(uVar10 + uVar17 + param_3));
              iVar14 = param_1[2];
            }
            iVar27 = iVar14 + 1;
            iVar5 = iVar22;
            if (iVar27 <= iVar22) goto LAB_100442c37;
          }
          if ((bVar32 & 2) != 0) {
            uVar36 = uVar25 - uVar34;
            if (uVar34 + 4 <= uVar25) {
              uVar36 = 4;
            }
            if (uVar36 != 0) {
              _memcpy(&local_43c,(void *)((ulong)uVar34 + *param_2),(ulong)uVar36);
              *(uint *)((long)param_2 + 0xc) = uVar36 + uVar34;
              uVar19 = local_43c;
            }
          }
          lVar15 = (long)iVar5;
          puVar23 = (undefined4 *)(param_3 + iVar4 * param_4 + lVar15 * 4);
          puVar29 = (undefined4 *)((long)puVar23 + (ulong)uVar17);
          if (puVar23 < puVar29) {
            iVar27 = iVar27 - iVar5;
            lVar33 = 0;
            while( true ) {
              lVar8 = uVar37 * lVar33 + uVar20;
              uVar10 = param_3 + (lVar15 + iVar27) * 4 + lVar8;
              uVar9 = lVar8 + param_3 + 4 + lVar15 * 4;
              if (uVar9 < uVar10) {
                uVar9 = uVar10;
              }
              if (0 < iVar27) {
                uVar26 = (lVar33 * -uVar37 + (~param_3 - uVar20) + uVar9 + lVar15 * -4 >> 2) + 1;
                uVar9 = uVar26 & 0x7ffffffffffffff8;
                uVar10 = 0;
                puVar16 = puVar23;
                if (uVar9 != 0) {
                  puVar16 = puVar23 + uVar9;
                  uVar28 = 0;
                  do {
                    puVar1 = puVar23 + uVar28;
                    *puVar1 = uVar19;
                    puVar1[1] = uVar19;
                    puVar1[2] = uVar19;
                    puVar1[3] = uVar19;
                    puVar1 = puVar23 + uVar28 + 4;
                    *puVar1 = uVar19;
                    puVar1[1] = uVar19;
                    puVar1[2] = uVar19;
                    puVar1[3] = uVar19;
                    uVar28 = uVar28 + 8;
                    uVar10 = uVar9;
                  } while ((uVar26 & 0xfffffffffffffff8) != uVar28);
                }
                if (uVar26 != uVar10) {
                  do {
                    *puVar16 = uVar19;
                    puVar16 = puVar16 + 1;
                  } while (puVar16 < puVar23 + iVar27);
                }
              }
              puVar23 = (undefined4 *)((long)puVar23 + uVar37);
              if (puVar29 <= puVar23) break;
              lVar33 = lVar33 + 1;
            }
          }
          if ((bVar32 & 4) != 0) {
            uVar25 = *(uint *)((long)param_2 + 0xc);
            uVar36 = *(uint *)(param_2 + 1) - uVar25;
            if (uVar25 + 4 <= *(uint *)(param_2 + 1)) {
              uVar36 = 4;
            }
            uVar7 = 4;
            if (uVar36 != 0) {
              _memcpy(&local_43c,(void *)((ulong)uVar25 + *param_2),(ulong)uVar36);
              *(uint *)((long)param_2 + 0xc) = uVar25 + uVar36;
              uVar7 = local_43c;
            }
          }
          if ((bVar32 & 8) != 0) {
            uVar25 = *(uint *)((long)param_2 + 0xc);
            if ((uVar25 + 1 <= *(uint *)(param_2 + 1)) || (*(uint *)(param_2 + 1) - uVar25 == 1)) {
              bVar2 = *(byte *)(*param_2 + (ulong)uVar25);
              *(uint *)((long)param_2 + 0xc) = uVar25 + 1;
              if (bVar2 != 0) {
                iVar14 = 0;
                do {
                  if ((bVar32 & 0x10) == 0) {
                    uVar25 = *(uint *)(param_2 + 1);
                    uVar36 = *(uint *)((long)param_2 + 0xc);
                  }
                  else {
                    uVar25 = *(uint *)(param_2 + 1);
                    uVar36 = *(uint *)((long)param_2 + 0xc);
                    uVar34 = uVar25 - uVar36;
                    uVar7 = 4;
                    if (uVar36 + 4 <= uVar25) {
                      uVar34 = 4;
                    }
                    if (uVar34 != 0) {
                      _memcpy(&local_43c,(void *)(*param_2 + (ulong)uVar36),(ulong)uVar34);
                      uVar36 = uVar36 + uVar34;
                      *(uint *)((long)param_2 + 0xc) = uVar36;
                      uVar7 = local_43c;
                    }
                  }
                  uVar34 = uVar36 + 1;
                  if ((uVar25 < uVar34) && (uVar25 - uVar36 != 1)) {
                    bVar11 = 0;
                    uVar34 = uVar36;
                  }
                  else {
                    bVar11 = *(byte *)(*param_2 + (ulong)uVar36);
                    *(uint *)((long)param_2 + 0xc) = uVar34;
                  }
                  if ((uVar25 < uVar34 + 1) && (uVar25 - uVar34 != 1)) {
                    bVar6 = 0;
                  }
                  else {
                    bVar6 = *(byte *)(*param_2 + (ulong)uVar34);
                    *(uint *)((long)param_2 + 0xc) = uVar34 + 1;
                  }
                  lVar15 = (long)(int)((uint)(bVar11 >> 4) + iVar5);
                  puVar23 = (undefined4 *)
                            (((bVar11 & 0xf) + iVar4) * param_4 + param_3 + lVar15 * 4);
                  puVar29 = (undefined4 *)((ulong)(((bVar6 & 0xf) + 1) * param_4) + (long)puVar23);
                  if (puVar23 < puVar29) {
                    uVar10 = (ulong)((bVar6 >> 4) + 1);
                    uVar9 = (ulong)(((bVar11 & 0xf) + iVar18 * 0x10 + iVar3) * param_4);
                    lVar33 = 0;
                    while( true ) {
                      lVar8 = uVar37 * lVar33 + uVar9;
                      uVar26 = param_3 + (lVar15 + uVar10) * 4 + lVar8;
                      uVar28 = lVar8 + param_3 + 4 + lVar15 * 4;
                      if (uVar28 < uVar26) {
                        uVar28 = uVar26;
                      }
                      uVar28 = (lVar33 * -uVar37 + (~param_3 - uVar9) + uVar28 + lVar15 * -4 >> 2) +
                               1;
                      uVar21 = uVar28 & 0x7ffffffffffffff8;
                      uVar26 = 0;
                      puVar16 = puVar23;
                      if (uVar21 != 0) {
                        puVar16 = puVar23 + uVar21;
                        uVar31 = 0;
                        do {
                          puVar1 = puVar23 + uVar31;
                          *puVar1 = uVar7;
                          puVar1[1] = uVar7;
                          puVar1[2] = uVar7;
                          puVar1[3] = uVar7;
                          puVar1 = puVar23 + uVar31 + 4;
                          *puVar1 = uVar7;
                          puVar1[1] = uVar7;
                          puVar1[2] = uVar7;
                          puVar1[3] = uVar7;
                          uVar31 = uVar31 + 8;
                          uVar26 = uVar21;
                        } while ((uVar28 & 0xfffffffffffffff8) != uVar31);
                      }
                      if (uVar28 != uVar26) {
                        do {
                          *puVar16 = uVar7;
                          puVar16 = puVar16 + 1;
                        } while (puVar16 < puVar23 + uVar10);
                      }
                      puVar23 = (undefined4 *)((long)puVar23 + uVar37);
                      if (puVar29 <= puVar23) break;
                      lVar33 = lVar33 + 1;
                    }
                  }
                  bVar38 = iVar14 != bVar2 - 1;
                  iVar14 = iVar14 + 1;
                } while (bVar38);
              }
            }
          }
          iVar14 = param_1[2];
          iVar27 = iVar14 + 1;
          iVar5 = iVar22;
        } while (iVar22 < iVar27);
      }
LAB_100442c37:
      iVar24 = param_1[3] + 1;
      iVar18 = iVar18 + 1;
      iVar4 = iVar12;
    } while (iVar12 < iVar24);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

