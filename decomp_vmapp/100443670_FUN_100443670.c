
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100443670(int *param_1,long *param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined2 *puVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  undefined2 *puVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  undefined2 *puVar26;
  byte bVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  undefined1 *puVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  void *pvVar35;
  int iVar36;
  bool bVar37;
  undefined1 auVar38 [16];
  ulong local_2f0;
  ulong local_2d0;
  ushort local_23a;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_238,0x200);
  iVar2 = param_1[1];
  iVar24 = param_1[3] + 1;
  if (iVar2 < iVar24) {
    uVar16 = (ulong)param_4;
    iVar3 = param_1[2];
    iVar14 = 0;
    uVar19 = 0;
    uVar33 = 0;
    iVar6 = iVar2;
    do {
      uVar23 = (ulong)(param_4 * 0x10 * iVar14 + iVar2 * param_4);
      iVar7 = iVar6 + 0x10;
      if (iVar7 < iVar24) {
        iVar24 = iVar7;
      }
      iVar36 = iVar3 + 1;
      if (*param_1 < iVar36) {
        uVar15 = (iVar24 - iVar6) * param_4;
        iVar5 = *param_1;
        do {
          while( true ) {
            iVar25 = iVar5 + 0x10;
            if (iVar25 < iVar36) {
              iVar36 = iVar25;
            }
            uVar4 = *(uint *)(param_2 + 1);
            uVar20 = *(uint *)((long)param_2 + 0xc);
            uVar30 = uVar20 + 1;
            if ((uVar4 < uVar30) && (uVar4 - uVar20 != 1)) {
              bVar27 = 0;
              uVar30 = uVar20;
            }
            else {
              bVar27 = *(byte *)(*param_2 + (ulong)uVar20);
              *(uint *)((long)param_2 + 0xc) = uVar30;
            }
            local_2f0 = (ulong)uVar30;
            iVar8 = 0;
            if ((iVar6 <= iVar24 + -1) && (iVar8 = 0, iVar5 <= iVar36 + -1)) {
              iVar8 = (iVar36 - iVar5) * (iVar24 - iVar6);
            }
            if ((bVar27 & 1) == 0) break;
            uVar20 = uVar4 - uVar30;
            if (uVar30 + iVar8 * 2 <= uVar4) {
              uVar20 = iVar8 * 2;
            }
            if (uVar20 != 0) {
              _memcpy(local_238,(void *)(local_2f0 + *param_2),(ulong)uVar20);
              *(uint *)((long)param_2 + 0xc) = uVar30 + uVar20;
            }
            uVar11 = (ulong)(iVar6 * param_4 + iVar5 * 2);
            if (uVar15 != 0) {
              uVar4 = (iVar36 - iVar5) * 2;
              pvVar35 = (void *)(uVar11 + param_3);
              puVar31 = local_238;
              do {
                _memcpy(pvVar35,puVar31,(long)(int)uVar4);
                pvVar35 = (void *)((long)pvVar35 + uVar16);
                puVar31 = puVar31 + uVar4;
              } while (pvVar35 < (void *)(uVar11 + uVar15 + param_3));
              iVar3 = param_1[2];
            }
            iVar36 = iVar3 + 1;
            iVar5 = iVar25;
            if (iVar36 <= iVar25) goto LAB_100443f97;
          }
          if ((bVar27 & 2) != 0) {
            uVar20 = uVar4 - uVar30;
            if (uVar30 + 2 <= uVar4) {
              uVar20 = 2;
            }
            if (uVar20 != 0) {
              _memcpy(&local_23a,(void *)(local_2f0 + *param_2),(ulong)uVar20);
              *(uint *)((long)param_2 + 0xc) = uVar20 + uVar30;
              uVar19 = (uint)local_23a;
              local_2f0 = (ulong)(uVar20 + uVar30);
            }
          }
          lVar17 = (long)iVar5;
          puVar26 = (undefined2 *)(param_3 + iVar6 * param_4 + lVar17 * 2);
          puVar22 = (undefined2 *)((long)puVar26 + (ulong)uVar15);
          if (puVar26 < puVar22) {
            iVar36 = iVar36 - iVar5;
            lVar29 = 0;
            do {
              lVar9 = uVar16 * lVar29 + uVar23;
              uVar11 = param_3 + (lVar17 + iVar36) * 2 + lVar9;
              uVar10 = lVar9 + param_3 + 2 + lVar17 * 2;
              if (uVar10 < uVar11) {
                uVar10 = uVar11;
              }
              if (0 < iVar36) {
                uVar28 = (lVar29 * -uVar16 + (~param_3 - uVar23) + uVar10 + lVar17 * -2 >> 1) + 1;
                uVar10 = uVar28 & 0xfffffffffffffff0;
                uVar11 = 0;
                puVar18 = puVar26;
                if (uVar10 != 0) {
                  puVar18 = puVar26 + uVar10;
                  auVar38 = pshufb(ZEXT416(uVar19),_DAT_100b3f5b0);
                  uVar21 = 0;
                  do {
                    *(undefined1 (*) [16])(puVar26 + uVar21) = auVar38;
                    *(undefined1 (*) [16])(puVar26 + uVar21 + 8) = auVar38;
                    uVar21 = uVar21 + 0x10;
                    uVar11 = uVar10;
                  } while ((uVar28 & 0xfffffffffffffff0) != uVar21);
                }
                if (uVar28 != uVar11) {
                  do {
                    *puVar18 = (short)uVar19;
                    puVar18 = puVar18 + 1;
                  } while (puVar18 < puVar26 + iVar36);
                }
              }
              puVar26 = (undefined2 *)((long)puVar26 + uVar16);
              lVar29 = lVar29 + 1;
            } while (puVar26 < puVar22);
          }
          uVar20 = (uint)local_2f0;
          if ((bVar27 & 4) != 0) {
            uVar30 = uVar4 - uVar20;
            if (uVar20 + 2 <= uVar4) {
              uVar30 = 2;
            }
            if (uVar30 != 0) {
              _memcpy(&local_23a,(void *)(local_2f0 + *param_2),(ulong)uVar30);
              uVar20 = uVar30 + uVar20;
              *(uint *)((long)param_2 + 0xc) = uVar20;
              uVar33 = (uint)local_23a;
            }
          }
          if ((bVar27 & 8) != 0) {
            uVar30 = uVar20 + 1;
            local_2d0 = (ulong)uVar30;
            if ((uVar30 <= uVar4) || (uVar4 - uVar20 == 1)) {
              bVar1 = *(byte *)(*param_2 + (ulong)uVar20);
              *(uint *)((long)param_2 + 0xc) = uVar30;
              if (bVar1 != 0) {
                iVar36 = 0;
                do {
                  uVar20 = (uint)local_2d0;
                  if ((bVar27 & 0x10) != 0) {
                    uVar30 = uVar4 - uVar20;
                    if (uVar20 + 2 <= uVar4) {
                      uVar30 = 2;
                    }
                    if (uVar30 != 0) {
                      _memcpy(&local_23a,(void *)(local_2d0 + *param_2),(ulong)uVar30);
                      uVar20 = uVar30 + uVar20;
                      *(uint *)((long)param_2 + 0xc) = uVar20;
                      uVar33 = (uint)local_23a;
                    }
                  }
                  uVar30 = uVar20 + 1;
                  if ((uVar4 < uVar30) && (uVar4 - uVar20 != 1)) {
                    bVar12 = 0;
                    uVar30 = uVar20;
                  }
                  else {
                    bVar12 = *(byte *)(*param_2 + (ulong)uVar20);
                    *(uint *)((long)param_2 + 0xc) = uVar30;
                  }
                  uVar20 = uVar30 + 1;
                  local_2d0 = (ulong)uVar20;
                  if ((uVar4 < uVar20) && (uVar4 - uVar30 != 1)) {
                    bVar13 = 0;
                    local_2d0 = (ulong)uVar30;
                  }
                  else {
                    bVar13 = *(byte *)(*param_2 + (ulong)uVar30);
                    *(uint *)((long)param_2 + 0xc) = uVar20;
                  }
                  lVar17 = (long)(int)((uint)(bVar12 >> 4) + iVar5);
                  puVar26 = (undefined2 *)
                            (((bVar12 & 0xf) + iVar6) * param_4 + param_3 + lVar17 * 2);
                  puVar22 = (undefined2 *)((ulong)(((bVar13 & 0xf) + 1) * param_4) + (long)puVar26);
                  if (puVar26 < puVar22) {
                    uVar11 = (ulong)((bVar13 >> 4) + 1);
                    uVar10 = (ulong)(((bVar12 & 0xf) + iVar14 * 0x10 + iVar2) * param_4);
                    lVar29 = 0;
                    do {
                      lVar9 = uVar16 * lVar29 + uVar10;
                      uVar28 = param_3 + (lVar17 + uVar11) * 2 + lVar9;
                      uVar21 = lVar9 + param_3 + 2 + lVar17 * 2;
                      if (uVar21 < uVar28) {
                        uVar21 = uVar28;
                      }
                      uVar32 = (lVar29 * -uVar16 + (~param_3 - uVar10) + uVar21 + lVar17 * -2 >> 1)
                               + 1;
                      uVar21 = uVar32 & 0xfffffffffffffff0;
                      uVar28 = 0;
                      puVar18 = puVar26;
                      if (uVar21 != 0) {
                        puVar18 = puVar26 + uVar21;
                        auVar38 = pshufb(ZEXT416(uVar33),_DAT_100b3f5b0);
                        uVar34 = 0;
                        do {
                          *(undefined1 (*) [16])(puVar26 + uVar34) = auVar38;
                          *(undefined1 (*) [16])(puVar26 + uVar34 + 8) = auVar38;
                          uVar34 = uVar34 + 0x10;
                          uVar28 = uVar21;
                        } while ((uVar32 & 0xfffffffffffffff0) != uVar34);
                      }
                      if (uVar32 != uVar28) {
                        do {
                          *puVar18 = (short)uVar33;
                          puVar18 = puVar18 + 1;
                        } while (puVar18 < puVar26 + uVar11);
                      }
                      puVar26 = (undefined2 *)((long)puVar26 + uVar16);
                      lVar29 = lVar29 + 1;
                    } while (puVar26 < puVar22);
                  }
                  bVar37 = iVar36 != bVar1 - 1;
                  iVar36 = iVar36 + 1;
                } while (bVar37);
              }
            }
          }
          iVar36 = iVar3 + 1;
          iVar5 = iVar25;
        } while (iVar25 < iVar36);
      }
LAB_100443f97:
      iVar24 = param_1[3] + 1;
      iVar14 = iVar14 + 1;
      iVar6 = iVar7;
    } while (iVar7 < iVar24);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

