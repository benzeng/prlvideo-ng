
undefined1 FUN_10055b040(long param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  char *pcVar13;
  long lVar14;
  ushort *puVar15;
  long lVar16;
  size_t sVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 uVar28;
  long lVar29;
  void *pvVar30;
  bool bVar31;
  int *local_80;
  
  uVar25 = (uint)param_2;
  uVar27 = param_2 & 0xffffffff;
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  lVar14 = *(long *)(param_1 + 0x10);
  lVar29 = lVar2;
  if (lVar14 == 0) {
    FUN_1008e3970("","TransMem",0,"CSnapshotEngineSparse::process_block() stopped");
    uVar28 = 1;
  }
  else {
    uVar26 = param_2 >> 5 & 0x7ffffff;
    uVar28 = 1;
    if ((*(uint *)(*(long *)(param_1 + 0x38) + uVar26 * 4) >> ((byte)param_2 & 0x1f) & 1) == 0) {
      lVar29 = *(uint *)(lVar14 + 4) * uVar27;
      local_80 = (int *)0x0;
      pvVar30 = (void *)0x0;
      if (7 < *(uint *)(lVar14 + 0x24)) {
        uVar10 = *(uint *)(lVar14 + 0x24) >> 3;
        local_80 = (int *)0x0;
        uVar6 = 0;
LAB_10055b0e0:
        if (*(char *)((ulong)(uVar10 * uVar25) + *(long *)(lVar14 + 0x48) + uVar6) == '\0')
        goto code_r0x00010055b0e6;
        lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x20);
        if ((lVar3 == 0) || (local_80 = (int *)(lVar3 + lVar29), local_80 == (int *)0x0)) {
          uVar28 = 0;
          FUN_1008e3970("","TransMem",0,
                        "CSnapshotEngineSparse::process_block(%u) failed to access block",
                        param_2 & 0xffffffff);
          lVar29 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_10055b11a;
        }
        pvVar30 = _malloc((ulong)*(uint *)(lVar14 + 4));
        if (pvVar30 == (void *)0x0) {
          uVar28 = 0;
          FUN_1008e3970("","TransMem",0,
                        "CSnapshotEngineSparse::process_block(%u) failed allocate the intermediate I/O buffer"
                        ,param_2 & 0xffffffff);
          QMutex::unlock();
          lVar29 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_10055b122;
        }
        puVar15 = *(ushort **)(param_1 + 0x10);
        lVar14 = *(long *)(puVar15 + 0x24);
        uVar10 = *(uint *)(puVar15 + 0x12);
        uVar6 = (ulong)uVar10;
        lVar16 = (ulong)((uVar10 >> 3) * uVar25) + lVar14;
        if (**(char **)(param_1 + 0x18) == '\0') goto LAB_10055b3bb;
        if (uVar10 != 0) {
          uVar10 = 0;
          piVar20 = local_80;
          do {
            uVar19 = *(uint *)(lVar16 + (ulong)(uVar10 >> 5) * 4);
            if ((uVar19 >> ((byte)uVar10 & 0x1f) & 1) != 0) {
              bVar31 = false;
              piVar24 = piVar20;
              do {
                bVar4 = true;
                if (*piVar24 == 0) {
                  bVar4 = bVar31;
                }
                bVar31 = true;
                if (piVar24[1] == 0) {
                  bVar31 = bVar4;
                }
                bVar4 = true;
                if (piVar24[2] == 0) {
                  bVar4 = bVar31;
                }
                bVar31 = true;
                if (piVar24[3] == 0) {
                  bVar31 = bVar4;
                }
                bVar4 = true;
                if (piVar24[4] == 0) {
                  bVar4 = bVar31;
                }
                bVar31 = true;
                if (piVar24[5] == 0) {
                  bVar31 = bVar4;
                }
                bVar4 = true;
                if (piVar24[6] == 0) {
                  bVar4 = bVar31;
                }
                bVar31 = true;
                if (piVar24[7] == 0) {
                  bVar31 = bVar4;
                }
                piVar24 = piVar24 + 8;
              } while (piVar24 < piVar20 + 0x400);
              if (!bVar31) {
                *(uint *)(lVar16 + (ulong)(uVar10 >> 5) * 4) =
                     uVar19 & ~(1 << ((byte)uVar10 & 0x1f));
                uVar6 = (ulong)*(uint *)(puVar15 + 0x12);
              }
            }
            piVar20 = piVar20 + 0x400;
            uVar10 = uVar10 + 1;
          } while (uVar10 < (uint)uVar6);
LAB_10055b3bb:
          uVar10 = (uint)uVar6;
          uVar7 = (ulong)((int)(uVar6 >> 3) * uVar25);
          if (uVar10 < 8) goto LAB_10055b8d6;
          uVar21 = 0;
          while (*(char *)(uVar7 + lVar14 + uVar21) == '\0') {
            uVar21 = uVar21 + 1;
            if (uVar6 >> 3 <= uVar21) goto LAB_10055b8d6;
          }
          if (**(char **)(param_1 + 0x18) == '\0') {
            if ((*(uint *)(puVar15 + 4) <= uVar25) ||
               (uVar25 = *(uint *)(*(long *)(puVar15 + 0x20) + uVar27 * 4),
               *(uint *)(puVar15 + 6) <= uVar25)) goto LAB_10055b9ac;
            uVar19 = 1;
            if (*puVar15 < 0x201) {
              uVar19 = uVar10;
            }
            uVar25 = uVar19 * uVar25 + *(int *)(puVar15 + 10);
LAB_10055b5ff:
            lVar14 = (ulong)uVar25 << 0xc;
            if (lVar14 == *(long *)(param_1 + 0x50)) {
LAB_10055b657:
              *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
              uVar25 = *(uint *)(puVar15 + 0x12);
              uVar10 = 0xffffffff;
              iVar23 = 0;
              uVar6 = 0;
              while( true ) {
                uVar19 = (uint)uVar6;
                bVar31 = false;
                if (uVar19 < uVar25) {
                  bVar31 = (*(uint *)(lVar16 + (uVar6 >> 5) * 4) >> (uVar19 & 0x1f) & 1) != 0;
                }
                uVar7 = (ulong)uVar10;
                if (bVar31) {
                  uVar7 = uVar6;
                }
                uVar11 = (uint)uVar7;
                if (-1 < (int)uVar10) {
                  uVar11 = uVar10;
                }
                uVar10 = uVar11;
                if ((-1 < (int)uVar10) && (!bVar31)) break;
LAB_10055b8b6:
                iVar23 = iVar23 + 0x1000;
                uVar6 = (ulong)(uVar19 + 1);
                if (uVar25 <= uVar19) {
                  *(long *)(param_1 + 0x50) = lVar14;
                  goto LAB_10055b8d6;
                }
              }
              iVar18 = iVar23 + uVar10 * -0x1000;
              lVar8 = (int)(uVar10 * 0x1000) + lVar29;
              pvVar12 = (void *)(lVar3 + lVar8);
              if (**(char **)(param_1 + 0x18) == '\0') {
                sVar17 = (size_t)iVar18;
                sVar9 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_1007617a0,0,pvVar30,sVar17);
                if (sVar17 == sVar9) {
                  _memcpy(pvVar12,pvVar30,sVar17);
                  if ((*(code **)(param_1 + 0x20) != (code *)0x0) &&
                     (cVar5 = (**(code **)(param_1 + 0x20))
                                        (*(undefined8 *)(param_1 + 0x28),pvVar12,iVar18,lVar8,0),
                     cVar5 == '\0')) goto LAB_10055ba01;
                  goto LAB_10055b8a6;
                }
                pcVar13 = "CSnapshotEngineSparse::process_block(%u) read failed";
              }
              else {
                if (*(long *)(param_1 + 0x20) != 0) {
                  _memcpy(*(void **)(param_1 + 0x48),pvVar12,(long)iVar18);
                  cVar5 = (**(code **)(param_1 + 0x20))
                                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48)
                                     ,iVar18,lVar8,1);
                  if (cVar5 == '\0') {
LAB_10055ba01:
                    uVar28 = 0;
                    FUN_1008e3970("","TransMem",0,"CSnapshotEngineSparse::process_block() cancelled"
                                 );
                    goto LAB_10055b8f4;
                  }
                  pvVar12 = *(void **)(param_1 + 0x48);
                }
                lVar8 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_100761810,0,pvVar12,
                                      (long)iVar18);
                if (iVar18 == lVar8) {
LAB_10055b8a6:
                  lVar14 = lVar14 + iVar18;
                  uVar25 = *(uint *)(*(long *)(param_1 + 0x10) + 0x24);
                  uVar10 = 0xffffffff;
                  goto LAB_10055b8b6;
                }
                pcVar13 = "CSnapshotEngineSparse::process_block(%u) write failed";
              }
              goto LAB_10055b9c1;
            }
            lVar8 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),lVar14,0);
            if (lVar8 == lVar14) {
              puVar15 = *(ushort **)(param_1 + 0x10);
              goto LAB_10055b657;
            }
            uVar28 = 0;
            FUN_1008e3970("","TransMem",0,
                          "CSnapshotEngineSparse::process_block(%u) failed to seek at %llu",
                          param_2 & 0xffffffff);
          }
          else {
            if (uVar25 < *(uint *)(puVar15 + 4)) {
              iVar23 = *(int *)(puVar15 + 6);
              uVar25 = 1;
              if (*puVar15 < 0x201) {
                uVar25 = uVar10;
              }
              if (uVar10 != 0) {
                lVar14 = lVar14 + uVar7;
                iVar22 = 0;
                iVar18 = 0;
                uVar19 = 0;
                if ((uVar6 & 0xfffffffe) != 0) {
                  uVar11 = 0;
                  iVar22 = 0;
                  iVar18 = 0;
                  do {
                    uVar19 = *(uint *)(lVar14 + (ulong)(uVar11 >> 5) * 4);
                    iVar22 = iVar22 + (uint)((uVar19 >> (uVar11 & 0x1e) & 1) != 0);
                    iVar18 = iVar18 + (uint)((uVar19 >> (uVar11 & 0x1e) + 1 & 1) != 0);
                    uVar11 = uVar11 + 2;
                    uVar19 = uVar10 & 0xfffffffe;
                  } while ((uVar10 & 0xfffffffe) != uVar11);
                }
                iVar22 = iVar22 + iVar18;
                if (uVar10 - uVar19 != 0) {
                  uVar11 = uVar19;
                  if ((uVar10 - uVar19 & 1) != 0) {
                    iVar22 = iVar22 + (uint)((*(uint *)(lVar14 + (ulong)(uVar19 >> 5) * 4) >>
                                              (uVar19 & 0x1f) & 1) != 0);
                    uVar11 = uVar19 + 1;
                  }
                  if (uVar10 - 1 != uVar19) {
                    do {
                      iVar22 = iVar22 + (uint)((*(uint *)(lVar14 + (ulong)(uVar11 >> 5) * 4) >>
                                                (uVar11 & 0x1f) & 1) != 0) +
                               (uint)((*(uint *)(lVar14 + (ulong)(uVar11 + 1 >> 5) * 4) >>
                                       (uVar11 + 1 & 0x1f) & 1) != 0);
                      uVar11 = uVar11 + 2;
                    } while (uVar10 != uVar11);
                  }
                }
                if (iVar22 != 0) {
                  *(undefined4 *)(*(long *)(puVar15 + 0x28) + uVar27 * 4) = 0;
                  *(uint *)(puVar15 + 6) = *(int *)(puVar15 + 6) + ((uVar25 - 1) + iVar22) / uVar25;
                  *(int *)(*(long *)(puVar15 + 0x20) + uVar27 * 4) = iVar23;
                  uVar25 = uVar25 * iVar23 + *(int *)(puVar15 + 10);
                  goto LAB_10055b5ff;
                }
              }
            }
LAB_10055b9ac:
            pcVar13 = "CSnapshotEngineSparse::process_block(%u) block not found";
LAB_10055b9c1:
            uVar28 = 0;
            FUN_1008e3970("","TransMem",0,pcVar13,param_2 & 0xffffffff);
          }
          goto LAB_10055b8f4;
        }
      }
LAB_10055b8d6:
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      puVar1 = (uint *)(*(long *)(param_1 + 0x38) + uVar26 * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar27 & 0x1f);
      uVar28 = 1;
LAB_10055b8f4:
      if (pvVar30 != (void *)0x0) {
        _free(pvVar30);
      }
      QMutex::unlock();
      if (local_80 == (int *)0x0) {
        lVar29 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
      else {
        lVar29 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
      goto LAB_10055b122;
    }
  }
LAB_10055b11a:
  QMutex::unlock();
LAB_10055b122:
  if (lVar29 == lVar2) {
    return uVar28;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x00010055b0e6:
  uVar6 = uVar6 + 1;
  pvVar30 = (void *)0x0;
  if (uVar10 <= uVar6) goto LAB_10055b8d6;
  goto LAB_10055b0e0;
}

