
undefined8 FUN_1003c6660(uint *param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  char cVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  void *pvVar22;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_2 == (undefined8 *)0x0) {
    local_38 = *(undefined8 *)(param_1 + 1);
    local_40 = 0;
  }
  else {
    local_40 = *param_2;
    local_38 = param_2[1];
  }
  if (param_4 == (undefined8 *)0x0) {
    local_48 = *(undefined8 *)(param_3 + 1);
    local_50 = 0;
  }
  else {
    local_50 = *param_4;
    local_48 = param_4[1];
  }
  uVar7 = *param_1;
  uVar9 = (ulong)uVar7;
  uVar15 = *param_3;
  iVar17 = (int)local_38 - (int)local_40;
  if (iVar17 == 0) {
    uVar5 = 1;
  }
  else {
    iVar20 = (int)((ulong)local_38 >> 0x20);
    iVar6 = (int)((ulong)local_40 >> 0x20);
    iVar3 = iVar20 - iVar6;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    else {
      iVar21 = (int)local_50;
      if ((int)local_48 == iVar21) {
        uVar5 = 1;
      }
      else {
        iVar10 = (int)((ulong)local_50 >> 0x20);
        iVar18 = (int)((ulong)local_48 >> 0x20);
        if (iVar18 == iVar10) {
          uVar5 = 1;
        }
        else {
          puVar4 = &DAT_100b3fb80;
          uVar12 = 0;
          if ((uVar9 - 0x78 < 0x16) || (uVar12 = 0, (ulong)uVar15 - 0x78 < 0x16)) {
            do {
              uVar11 = uVar12;
              if ((*puVar4 == uVar7) ||
                 (((uVar11 = uVar12 + 1, puVar4[3] == uVar7 ||
                   (uVar11 = uVar12 + 2, puVar4[6] == uVar7)) ||
                  (uVar11 = uVar12 + 3, puVar4[9] == uVar7)))) {
                uVar8 = *(uint *)(&UNK_100b3fb84 + uVar11 * 0xc);
                break;
              }
              uVar12 = uVar12 + 4;
              puVar4 = puVar4 + 0xc;
              uVar8 = 0x8e;
            } while (uVar12 < 0x74);
            puVar4 = &DAT_100b3fb80;
            uVar12 = 0;
            do {
              uVar11 = uVar12;
              uVar7 = uVar8;
              if (((*puVar4 == uVar15) || (uVar11 = uVar12 + 1, puVar4[3] == uVar15)) ||
                 ((uVar11 = uVar12 + 2, puVar4[6] == uVar15 ||
                  (uVar11 = uVar12 + 3, puVar4[9] == uVar15)))) {
                uVar15 = *(uint *)(&UNK_100b3fb84 + uVar11 * 0xc);
                goto LAB_1003c6818;
              }
              uVar12 = uVar12 + 4;
              puVar4 = puVar4 + 0xc;
            } while (uVar12 < 0x74);
            uVar15 = 0x8e;
          }
LAB_1003c6818:
          uVar8 = uVar7;
          if ((int)uVar7 < 0x66) {
            uVar8 = 0;
            if (uVar7 != 1) {
              if (uVar7 == 3) {
                uVar8 = 2;
              }
              else {
                uVar8 = uVar7;
                if (uVar7 == 8) {
                  uVar8 = 7;
                }
              }
            }
          }
          else if ((int)uVar7 < 0x6a) {
            if (uVar7 == 0x66) {
              uVar8 = 0x65;
            }
            else if (uVar7 == 0x68) {
              uVar8 = 0x67;
            }
          }
          else if (uVar7 == 0x6a) {
            uVar8 = 0x69;
          }
          else if (uVar7 == 0x72) {
            uVar8 = 0x71;
          }
          uVar7 = uVar15;
          if ((int)uVar15 < 0x66) {
            uVar7 = 0;
            if (uVar15 != 1) {
              if (uVar15 == 3) {
                uVar7 = 2;
              }
              else {
                uVar7 = uVar15;
                if (uVar15 == 8) {
                  uVar7 = 7;
                }
              }
            }
          }
          else if ((int)uVar15 < 0x6a) {
            if (uVar15 == 0x66) {
              uVar7 = 0x65;
            }
            else if (uVar15 == 0x68) {
              uVar7 = 0x67;
            }
          }
          else if (uVar15 == 0x6a) {
            uVar7 = 0x69;
          }
          else if (uVar15 == 0x72) {
            uVar7 = 0x71;
          }
          if ((iVar17 == (int)local_48 - iVar21) && (iVar3 == iVar18 - iVar10)) {
            if (uVar8 == uVar7) {
              if (*(uint *)(&DAT_100b3f714 + uVar9 * 8) < 0x1000000) {
                uVar5 = FUN_1003c6c40(param_1,&local_40,param_3,&local_50);
              }
              else {
                uVar7 = param_1[3];
                uVar11 = (ulong)uVar7;
                uVar15 = param_3[3];
                uVar12 = (ulong)uVar15;
                uVar5 = 0;
                uVar8 = *(uint *)(&DAT_100b3f714 + uVar9 * 8) >> 0x18;
                if (uVar8 != 0) {
                  uVar16 = (ulong)((int)local_40 * uVar8 + uVar7 * iVar6);
                  pvVar22 = (void *)(*(long *)(param_1 + 4) + uVar16);
                  uVar9 = (ulong)(uVar8 * iVar21 + iVar10 * uVar15);
                  pvVar13 = (void *)(*(long *)(param_3 + 4) + uVar9);
                  cVar19 = (char)((ulong)local_38 >> 0x20);
                  cVar14 = (char)((ulong)local_40 >> 0x20);
                  if (pvVar13 < pvVar22) {
                    uVar9 = (ulong)(iVar17 * uVar8);
                    if ((iVar20 - iVar6 & 3U) != 0) {
                      iVar17 = -((byte)(cVar19 - cVar14) & 3);
                      do {
                        iVar3 = iVar3 + -1;
                        _memcpy(pvVar13,pvVar22,uVar9);
                        pvVar13 = (void *)((long)pvVar13 + uVar12);
                        pvVar22 = (void *)((long)pvVar22 + uVar11);
                        iVar17 = iVar17 + 1;
                      } while (iVar17 != 0);
                    }
                    if ((uint)((iVar20 + -1) - iVar6) < 3) {
                      uVar5 = 1;
                    }
                    else {
                      do {
                        _memcpy(pvVar13,pvVar22,uVar9);
                        _memcpy((void *)((long)pvVar13 + uVar12),(void *)((long)pvVar22 + uVar11),
                                uVar9);
                        pvVar13 = (void *)((long)((long)pvVar13 + uVar12) + uVar12);
                        pvVar22 = (void *)((long)((long)pvVar22 + uVar11) + uVar11);
                        _memcpy(pvVar13,pvVar22,uVar9);
                        pvVar13 = (void *)((long)pvVar13 + uVar12);
                        pvVar22 = (void *)((long)pvVar22 + uVar11);
                        _memcpy(pvVar13,pvVar22,uVar9);
                        pvVar13 = (void *)((long)pvVar13 + uVar12);
                        pvVar22 = (void *)((long)pvVar22 + uVar11);
                        iVar3 = iVar3 + -4;
                      } while (iVar3 != 0);
                      uVar5 = 1;
                    }
                  }
                  else {
                    pvVar22 = (void *)(*(long *)(param_3 + 4) + uVar9 + uVar15 * iVar3);
                    pvVar13 = (void *)(*(long *)(param_1 + 4) + uVar16 + uVar7 * iVar3);
                    uVar9 = (ulong)(iVar17 * uVar8);
                    if ((iVar20 - iVar6 & 3U) != 0) {
                      iVar3 = 0;
                      do {
                        pvVar22 = (void *)((long)pvVar22 + -uVar12);
                        pvVar13 = (void *)((long)pvVar13 + -uVar11);
                        _memmove(pvVar22,pvVar13,uVar9);
                        iVar3 = iVar3 + -1;
                      } while (-((byte)(cVar19 - cVar14) & 3) != iVar3);
                      iVar3 = (iVar20 - iVar6) + iVar3;
                    }
                    if ((uint)((iVar20 + -1) - iVar6) < 3) {
                      uVar5 = 1;
                    }
                    else {
                      do {
                        pvVar1 = (void *)((long)pvVar22 + -uVar12);
                        pvVar2 = (void *)((long)pvVar13 + -uVar11);
                        _memmove(pvVar1,pvVar2,uVar9);
                        _memmove((void *)((long)pvVar22 + uVar12 * -2),
                                 (void *)((long)pvVar13 + uVar11 * -2),uVar9);
                        _memmove((void *)((long)pvVar22 + uVar12 * -3),
                                 (void *)((long)pvVar13 + uVar11 * -3),uVar9);
                        _memmove((void *)((long)pvVar22 + uVar12 * -4),
                                 (void *)((long)pvVar13 + uVar11 * -4),uVar9);
                        iVar3 = iVar3 + -4;
                        pvVar22 = (void *)((long)pvVar1 + uVar12 * -3);
                        pvVar13 = (void *)((long)pvVar2 + uVar11 * -3);
                      } while (iVar3 != 0);
                      uVar5 = 1;
                    }
                  }
                }
              }
            }
            else {
              uVar5 = FUN_1003c8030(param_1,&local_40,param_3,&local_50);
            }
          }
          else {
            uVar5 = FUN_1003c8490(param_1,&local_40,param_3,&local_50);
          }
        }
      }
    }
  }
  return uVar5;
}

