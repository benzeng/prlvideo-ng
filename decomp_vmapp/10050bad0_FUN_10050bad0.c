
void FUN_10050bad0(undefined8 param_1,long param_2,ulong param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  void *pvVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  byte *pbVar10;
  long *plVar11;
  void *pvVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  size_t sVar21;
  long lVar22;
  ulong uVar23;
  bool bVar24;
  bool bVar25;
  long local_88;
  long local_68;
  
  std::mutex::lock();
  if (param_3 != 0) {
    local_68 = param_4;
    do {
      uVar18 = param_3;
      if (0x20 < param_3) {
        uVar18 = 0x20;
      }
      uVar15 = *(ulong *)(param_2 + 0xb0);
      pvVar2 = *(void **)(param_2 + 200);
      if ((ulong)((*(long *)(param_2 + 0xd8) - (long)pvVar2 >> 4) * 0x7d6343eb1a1f58d1) < uVar15) {
        lVar14 = *(long *)(param_2 + 0xd0);
        pvVar12 = (void *)0x0;
        if (uVar15 != 0) {
          pvVar12 = operator_new(uVar15 * 0x310);
        }
        sVar21 = lVar14 - (long)pvVar2;
        lVar14 = SUB168(SEXT816((long)sVar21) * SEXT816(-0x5397829cbc14e5e1),8);
        pvVar19 = (void *)((((lVar14 >> 8) - (lVar14 >> 0x3f)) +
                           ((long)sVar21 >> 4) * 0x7d6343eb1a1f58d1) * 0x310 + (long)pvVar12);
        _memcpy(pvVar19,pvVar2,sVar21);
        *(void **)(param_2 + 200) = pvVar19;
        *(void **)(param_2 + 0xd0) = (void *)(((long)sVar21 >> 4) * 0x10 + (long)pvVar12);
        *(void **)(param_2 + 0xd8) = (void *)(uVar15 * 0x310 + (long)pvVar12);
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
      }
      plVar11 = *(long **)(param_2 + 0x98);
      if (plVar11 != (long *)(param_2 + 0xa0)) {
        uVar15 = 0x20;
        if (param_3 < 0x20) {
          uVar15 = param_3;
        }
        do {
          if (uVar18 != 0) {
            uVar20 = 0;
            do {
              pcVar3 = *(char **)(local_68 + uVar20 * 8);
              pbVar4 = (byte *)plVar11[4];
              bVar1 = *pbVar4;
              bVar17 = bVar1 & 1;
              if (bVar17 == 0) {
                pbVar10 = pbVar4 + 1;
                sVar21 = (size_t)(bVar1 >> 1);
              }
              else {
                sVar21 = *(size_t *)(pbVar4 + 8);
                pbVar10 = *(byte **)(pbVar4 + 0x10);
              }
              iVar7 = _strncmp(pcVar3,(char *)pbVar10,sVar21);
              if (iVar7 == 0) {
                if (bVar17 == 0) {
                  uVar8 = (ulong)(bVar1 >> 1);
                }
                else {
                  uVar8 = *(ulong *)(pbVar4 + 8);
                }
                if (pcVar3[uVar8] != '\0') {
                  bVar24 = true;
                  if (*(long *)(pbVar4 + 0x30) != 0) {
                    if (bVar17 == 0) {
                      uVar8 = (ulong)(bVar1 >> 1);
                    }
                    else {
                      uVar8 = *(ulong *)(pbVar4 + 8);
                    }
                    pcVar9 = _strchr(pcVar3 + uVar8 + 1,0x2f);
                    bVar24 = pcVar9 != (char *)0x0;
                  }
                  pbVar10 = *(byte **)(pbVar4 + 0x18);
                  while (pbVar10 != pbVar4 + 0x20) {
                    if ((!bVar24) || ((*(byte *)(*(long *)(pbVar10 + 0x20) + 0x18) & 1) != 0)) {
                      lVar14 = *(long *)(*(long *)(pbVar10 + 0x20) + 0x20);
                      if (lVar14 == 0) {
                        pvVar2 = *(void **)(param_2 + 200);
                        pvVar12 = *(void **)(param_2 + 0xd0);
                        lVar14 = (long)pvVar12 - (long)pvVar2 >> 4;
                        uVar8 = lVar14 * 0x7d6343eb1a1f58d1 + 1;
                        if ((long)pvVar12 - (long)pvVar2 == -0x310) {
                          if (pvVar12 != pvVar2) {
                            *(void **)(param_2 + 0xd0) =
                                 (void *)(~((ulong)((long)pvVar12 + (-0x310 - (long)pvVar2)) / 0x310
                                           ) * 0x310 + (long)pvVar12);
                          }
                        }
                        else if (*(void **)(param_2 + 0xd8) == pvVar12) {
                          if (0x5397829cbc14e5 < uVar8) {
                    /* WARNING: Subroutine does not return */
                            std::__vector_base_common<true>::__throw_length_error();
                          }
                          lVar22 = (long)pvVar12 - (long)pvVar2 >> 4;
                          if ((ulong)(lVar22 * 0x7d6343eb1a1f58d1) < 0x29cbc14e5e0a72) {
                            uVar23 = lVar22 * -0x5397829cbc14e5e;
                            if (uVar23 < uVar8) {
                              uVar23 = uVar8;
                            }
                            lVar22 = *(long *)(param_2 + 0xd0);
                            local_88 = (lVar22 - (long)pvVar2 >> 4) * 0x7d6343eb1a1f58d1;
                            uVar8 = 0;
                            pvVar12 = (void *)0x0;
                            if (uVar23 != 0) goto LAB_10050bf32;
                          }
                          else {
                            lVar22 = *(long *)(param_2 + 0xd0);
                            local_88 = (lVar22 - (long)pvVar2 >> 4) * 0x7d6343eb1a1f58d1;
                            uVar23 = 0x5397829cbc14e5;
LAB_10050bf32:
                            uVar8 = uVar23;
                            pvVar12 = operator_new(uVar8 * 0x310);
                          }
                          ___bzero((void *)((long)pvVar12 + local_88 * 0x310),0x310);
                          lVar16 = SUB168(SEXT816(lVar22 - (long)pvVar2) *
                                          SEXT816(-0x5397829cbc14e5e1),8);
                          pvVar19 = (void *)((((lVar16 >> 8) - (lVar16 >> 0x3f)) + local_88) * 0x310
                                            + (long)pvVar12);
                          _memcpy(pvVar19,pvVar2,lVar22 - (long)pvVar2);
                          *(void **)(param_2 + 200) = pvVar19;
                          *(long *)(param_2 + 0xd0) = (long)pvVar12 + local_88 * 0x310 + 0x310;
                          *(void **)(param_2 + 0xd8) = (void *)(uVar8 * 0x310 + (long)pvVar12);
                          if (pvVar2 != (void *)0x0) {
                            operator_delete(pvVar2);
                          }
                        }
                        else {
                          ___bzero(pvVar12,0x310);
                          *(long *)(param_2 + 0xd0) = *(long *)(param_2 + 0xd0) + 0x310;
                        }
                        lVar22 = *(long *)(param_2 + 200);
                        lVar14 = lVar14 * 0x10;
                        *(undefined4 *)(lVar22 + 8 + lVar14) = 0;
                        *(undefined8 *)(lVar22 + lVar14) = *(undefined8 *)(pbVar10 + 0x20);
                        *(long *)(*(long *)(pbVar10 + 0x20) + 0x20) = lVar22 + lVar14;
                        lVar14 = *(long *)(*(long *)(pbVar10 + 0x20) + 0x20);
                      }
                      uVar8 = (ulong)*(uint *)(lVar14 + 8);
                      *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) + 1;
                      *(undefined8 *)(lVar14 + 0x10 + uVar8 * 0x18) =
                           *(undefined8 *)(param_6 + uVar20 * 8);
                      *(char **)(lVar14 + 0x18 + uVar8 * 0x18) = pcVar3;
                      *(undefined4 *)(lVar14 + 0x20 + uVar8 * 0x18) =
                           *(undefined4 *)(param_5 + uVar20 * 4);
                    }
                    pbVar5 = *(byte **)(pbVar10 + 8);
                    if (*(byte **)(pbVar10 + 8) == (byte *)0x0) {
                      do {
                        pbVar5 = *(byte **)(pbVar10 + 0x10);
                        bVar25 = *(byte **)pbVar5 != pbVar10;
                        pbVar10 = pbVar5;
                      } while (bVar25);
                    }
                    else {
                      do {
                        pbVar10 = pbVar5;
                        pbVar5 = *(byte **)pbVar10;
                      } while (*(byte **)pbVar10 != (byte *)0x0);
                    }
                  }
                }
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 != uVar15);
          }
          plVar6 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) {
            do {
              plVar13 = (long *)plVar11[2];
              bVar24 = (long *)*plVar13 != plVar11;
              plVar11 = plVar13;
            } while (bVar24);
          }
          else {
            do {
              plVar13 = plVar6;
              plVar6 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
          plVar11 = plVar13;
        } while (plVar13 != (long *)(param_2 + 0xa0));
      }
      if (*(long *)(param_2 + 200) != *(long *)(param_2 + 0xd0)) {
        *(undefined1 *)(param_2 + 0x78) = 1;
        std::mutex::unlock();
        plVar11 = *(long **)(param_2 + 200);
        plVar6 = *(long **)(param_2 + 0xd0);
        if (plVar11 != plVar6) {
          do {
            lVar14 = *plVar11;
            if (lVar14 != 0) {
              *(undefined8 *)(lVar14 + 0x20) = 0;
              (**(code **)(lVar14 + 0x10))(*(undefined8 *)(lVar14 + 8),(int)plVar11[1],plVar11 + 2);
            }
            plVar11 = plVar11 + 0x62;
          } while (plVar6 != plVar11);
          lVar14 = *(long *)(param_2 + 0xd0);
          if (lVar14 != *(long *)(param_2 + 200)) {
            *(ulong *)(param_2 + 0xd0) =
                 ~((ulong)((lVar14 + -0x310) - *(long *)(param_2 + 200)) / 0x310) * 0x310 + lVar14;
          }
        }
        std::mutex::lock();
        *(undefined1 *)(param_2 + 0x78) = 0;
        std::condition_variable::notify_all();
      }
      param_3 = param_3 - uVar18;
      local_68 = local_68 + uVar18 * 8;
      param_5 = param_5 + uVar18 * 4;
      param_6 = param_6 + uVar18 * 8;
    } while (param_3 != 0);
  }
  std::mutex::unlock();
  return;
}

