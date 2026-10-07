
undefined8
FUN_100691220(long *param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,long *param_7,undefined8 param_8,ulong *param_9)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong extraout_RDX;
  byte bVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  long *plVar24;
  ulong uVar25;
  bool bVar26;
  bool local_e4;
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  uVar4 = FUN_1006978d0(param_1[4]);
  uVar2 = *(uint *)(param_1[4] + 0x10);
  uVar5 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  uVar5 = uVar5 / *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
  *param_9 = uVar4;
  if (param_3[2] != 0) {
    uVar14 = uVar4 % (ulong)uVar2;
    plVar13 = (long *)*param_3;
    uVar12 = plVar13[4];
    if (uVar5 < (ulong)plVar13[4]) {
      uVar12 = uVar5;
    }
    uVar2 = *(uint *)(param_1[4] + 0x10);
    uVar6 = (ulong)uVar2;
    uVar22 = uVar14;
    if (uVar14 <= uVar4) {
      uVar22 = uVar4 - (uVar4 - uVar14) % uVar6;
    }
    if (uVar22 <= uVar12) {
      uVar9 = 0;
      uVar15 = (uVar12 - uVar22) % uVar6;
      uVar21 = (uint)((uVar12 - uVar22) / uVar6);
      if (uVar21 != 0) {
        uVar23 = 0;
        do {
          local_80 = uVar9 + uVar22;
          FUN_100693c60(param_6,&local_80,uVar15);
          uVar23 = uVar23 + 1;
          uVar9 = (ulong)((int)uVar9 + uVar2);
          uVar15 = extraout_RDX;
        } while (uVar23 < uVar21);
        plVar13 = (long *)*param_3;
      }
    }
    plVar1 = param_3 + 1;
    if (plVar13 != plVar1) {
      do {
        uVar12 = plVar13[4];
        uVar22 = plVar13[5];
        if ((uVar12 < uVar4) || (uVar5 < *(uint *)(param_1[4] + 0x10) + uVar12)) {
          local_78 = uVar22;
          local_70 = uVar12;
          FUN_100693d50(param_8,&local_78);
          plVar24 = (long *)plVar13[1];
          plVar11 = plVar13;
          plVar10 = plVar24;
          if (plVar24 == (long *)0x0) {
            do {
              plVar8 = (long *)plVar11[2];
              bVar26 = (long *)*plVar8 != plVar11;
              plVar11 = plVar8;
            } while (bVar26);
          }
          else {
            do {
              plVar8 = plVar10;
              plVar10 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
          plVar11 = plVar13;
          if (plVar24 == (long *)0x0) {
            do {
              plVar10 = (long *)plVar11[2];
              bVar26 = (long *)*plVar10 != plVar11;
              plVar11 = plVar10;
            } while (bVar26);
          }
          else {
            do {
              plVar10 = plVar24;
              plVar24 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
          if ((long *)*param_3 == plVar13) {
            *param_3 = (long)plVar10;
          }
          param_3[2] = param_3[2] + -1;
          lVar20 = param_3[1];
LAB_100691ba1:
          FUN_1000e86c0(lVar20,plVar13);
          operator_delete(plVar13);
        }
        else {
          if (param_2 == 0) {
            local_e4 = false;
          }
          else {
            iVar3 = FUN_1006a91d0(param_2,uVar22 & 0xffffffff);
            local_e4 = iVar3 != 1;
            if (local_e4) {
              local_68 = uVar22;
              local_60 = uVar12;
              FUN_100693d50(param_5,&local_68);
            }
          }
          uVar6 = (ulong)*(uint *)(param_1[4] + 0x10);
          plVar24 = (long *)plVar13[1];
          plVar11 = plVar13;
          if ((long *)plVar13[1] == (long *)0x0) {
            do {
              plVar10 = (long *)plVar11[2];
              bVar26 = (long *)*plVar10 != plVar11;
              plVar11 = plVar10;
            } while (bVar26);
          }
          else {
            do {
              plVar10 = plVar24;
              plVar24 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
          uVar15 = param_4[2];
          uVar9 = uVar15;
          if (plVar10 != plVar1) {
            do {
              uVar9 = plVar10[4];
              uVar25 = plVar10[5];
              if ((uVar9 < uVar4) || (uVar5 < uVar9 + uVar6)) {
                local_58 = uVar25;
                local_50 = uVar9;
                FUN_100693d50(param_8,&local_58);
                plVar24 = (long *)plVar10[1];
                plVar11 = plVar10;
                if ((long *)plVar10[1] == (long *)0x0) {
                  do {
                    plVar8 = (long *)plVar11[2];
                    bVar26 = (long *)*plVar8 != plVar11;
                    plVar11 = plVar8;
                  } while (bVar26);
                }
                else {
                  do {
                    plVar8 = plVar24;
                    plVar24 = (long *)*plVar8;
                  } while ((long *)*plVar8 != (long *)0x0);
                }
              }
              else {
                if (param_2 != 0) {
                  iVar3 = FUN_1006a91d0(param_2,uVar25 & 0xffffffff);
                  if (iVar3 != 1) {
                    local_48 = uVar25;
                    local_40 = uVar9;
                    FUN_100693d50(param_5,&local_48);
                    plVar24 = (long *)plVar10[1];
                    plVar11 = plVar10;
                    if ((long *)plVar10[1] == (long *)0x0) {
                      do {
                        plVar8 = (long *)plVar11[2];
                        bVar26 = (long *)*plVar8 != plVar11;
                        plVar11 = plVar8;
                      } while (bVar26);
                    }
                    else {
                      do {
                        plVar8 = plVar24;
                        plVar24 = (long *)*plVar8;
                      } while ((long *)*plVar8 != (long *)0x0);
                    }
                    goto LAB_1006916c3;
                  }
                  uVar9 = plVar10[4];
                  uVar25 = plVar10[5];
                }
                uVar19 = plVar13[4];
                uVar18 = uVar14;
                if (uVar14 <= uVar19) {
                  uVar18 = uVar19 - (uVar19 - uVar14) % uVar6;
                }
                uVar19 = uVar14;
                if (uVar14 <= uVar9) {
                  uVar19 = uVar9 - (uVar9 - uVar14) % uVar6;
                }
                if (uVar18 != uVar19) break;
                plVar11 = (long *)param_4[1];
                plVar24 = param_4 + 1;
                while (plVar8 = plVar24, plVar11 != (long *)0x0) {
                  while (plVar8 = plVar11, (ulong)plVar8[4] <= uVar9) {
                    plVar11 = (long *)plVar8[1];
                    if ((long *)plVar8[1] == (long *)0x0) {
                      plVar24 = plVar8 + 1;
                      goto LAB_100691634;
                    }
                  }
                  plVar24 = plVar8;
                  plVar11 = (long *)*plVar8;
                }
LAB_100691634:
                puVar7 = operator_new(0x30);
                puVar7[4] = uVar9;
                puVar7[5] = uVar25;
                puVar7[1] = 0;
                *puVar7 = 0;
                puVar7[2] = plVar8;
                *plVar24 = (long)puVar7;
                if (*(long *)*param_4 != 0) {
                  *param_4 = *(long *)*param_4;
                  puVar7 = (undefined8 *)*plVar24;
                }
                FUN_1000e8bb0(param_4[1],puVar7);
                param_4[2] = param_4[2] + 1;
                plVar24 = (long *)plVar10[1];
                plVar11 = plVar10;
                if ((long *)plVar10[1] == (long *)0x0) {
                  do {
                    plVar8 = (long *)plVar11[2];
                    bVar26 = (long *)*plVar8 != plVar11;
                    plVar11 = plVar8;
                  } while (bVar26);
                }
                else {
                  do {
                    plVar8 = plVar24;
                    plVar24 = (long *)*plVar8;
                  } while ((long *)*plVar8 != (long *)0x0);
                }
              }
LAB_1006916c3:
              if ((long *)*param_3 == plVar10) {
                *param_3 = (long)plVar8;
              }
              param_3[2] = param_3[2] + -1;
              FUN_1000e86c0(param_3[1],plVar10);
              operator_delete(plVar10);
              plVar24 = (long *)plVar13[1];
              plVar11 = plVar13;
              if ((long *)plVar13[1] == (long *)0x0) {
                do {
                  plVar10 = (long *)plVar11[2];
                  bVar26 = (long *)*plVar10 != plVar11;
                  plVar11 = plVar10;
                } while (bVar26);
              }
              else {
                do {
                  plVar10 = plVar24;
                  plVar24 = (long *)*plVar10;
                } while ((long *)*plVar10 != (long *)0x0);
              }
            } while (plVar10 != plVar1);
            uVar9 = param_4[2];
          }
          bVar16 = local_e4 & (uVar15 & 0xffffffff) == uVar9;
          uVar6 = uVar5;
          if (plVar13 != plVar1) {
            plVar24 = (long *)plVar13[1];
            plVar11 = plVar13;
            if ((long *)plVar13[1] == (long *)0x0) {
              do {
                plVar10 = (long *)plVar11[2];
                bVar26 = (long *)*plVar10 != plVar11;
                plVar11 = plVar10;
              } while (bVar26);
            }
            else {
              do {
                plVar10 = plVar24;
                plVar24 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
            if ((plVar10 != plVar1) && (uVar6 = plVar10[4], uVar5 < (ulong)plVar10[4])) {
              uVar6 = uVar5;
            }
          }
          uVar2 = *(uint *)(param_1[4] + 0x10);
          uVar9 = (ulong)uVar2;
          uVar15 = uVar14;
          if (bVar16 == 0) {
            if (uVar14 <= uVar12) {
              uVar19 = ((uVar12 - 1) - uVar14) + uVar9;
              uVar25 = (uVar9 - 1) + uVar12;
              goto LAB_100691832;
            }
          }
          else {
            uVar19 = uVar12 - uVar14;
            uVar25 = uVar12;
            if (uVar14 <= uVar12) {
LAB_100691832:
              uVar15 = uVar25 - uVar19 % uVar9;
            }
          }
          if (uVar15 <= uVar6) {
            uVar23 = bVar16 ^ 1;
            uVar21 = (uint)((uVar6 - uVar15) / uVar9);
            if (uVar23 < uVar21) {
              uVar17 = uVar2 * uVar23;
              do {
                local_38 = uVar17 + uVar15;
                FUN_100693c60(param_6,&local_38);
                uVar23 = uVar23 + 1;
                uVar17 = uVar17 + uVar2;
              } while (uVar23 < uVar21);
            }
          }
          if (bVar16 != 0) {
            plVar24 = (long *)plVar13[1];
            plVar11 = plVar24;
            plVar10 = plVar13;
            if (plVar24 == (long *)0x0) {
              do {
                plVar8 = (long *)plVar10[2];
                bVar26 = (long *)*plVar8 != plVar10;
                plVar10 = plVar8;
              } while (bVar26);
            }
            else {
              do {
                plVar8 = plVar11;
                plVar11 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
            }
            plVar11 = plVar13;
            if (plVar24 == (long *)0x0) {
              do {
                plVar10 = (long *)plVar11[2];
                bVar26 = (long *)*plVar10 != plVar11;
                plVar11 = plVar10;
              } while (bVar26);
            }
            else {
              do {
                plVar10 = plVar24;
                plVar24 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
            plVar24 = (long *)*param_3;
joined_r0x000100691aa7:
            if (plVar24 == plVar13) {
              *param_3 = (long)plVar10;
            }
            param_3[2] = param_3[2] + -1;
            lVar20 = param_3[1];
            goto LAB_100691ba1;
          }
          if ((uVar12 - uVar14) % (ulong)*(uint *)(param_1[4] + 0x10) != 0) {
            plVar24 = (long *)param_7[1];
            plVar11 = param_7 + 1;
            while (plVar10 = plVar11, plVar24 != (long *)0x0) {
              while (plVar11 = plVar24, (ulong)plVar11[4] <= uVar12) {
                plVar24 = (long *)plVar11[1];
                if ((long *)plVar11[1] == (long *)0x0) {
                  plVar10 = plVar11 + 1;
                  goto LAB_1006919e7;
                }
              }
              plVar24 = (long *)*plVar11;
            }
LAB_1006919e7:
            puVar7 = operator_new(0x30);
            puVar7[4] = uVar12;
            puVar7[5] = uVar22;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[2] = plVar11;
            *plVar10 = (long)puVar7;
            if (*(long *)*param_7 != 0) {
              *param_7 = *(long *)*param_7;
              puVar7 = (undefined8 *)*plVar10;
            }
            FUN_1000e8bb0(param_7[1],puVar7);
            param_7[2] = param_7[2] + 1;
            plVar24 = (long *)plVar13[1];
            plVar11 = plVar24;
            plVar10 = plVar13;
            if (plVar24 == (long *)0x0) {
              do {
                plVar8 = (long *)plVar10[2];
                bVar26 = (long *)*plVar8 != plVar10;
                plVar10 = plVar8;
              } while (bVar26);
            }
            else {
              do {
                plVar8 = plVar11;
                plVar11 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
            }
            plVar11 = plVar13;
            if (plVar24 == (long *)0x0) {
              do {
                plVar10 = (long *)plVar11[2];
                bVar26 = (long *)*plVar10 != plVar11;
                plVar11 = plVar10;
              } while (bVar26);
            }
            else {
              do {
                plVar10 = plVar24;
                plVar24 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
            plVar24 = (long *)*param_3;
            goto joined_r0x000100691aa7;
          }
          plVar24 = (long *)plVar13[1];
          if ((long *)plVar13[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar13[2];
              bVar26 = (long *)*plVar8 != plVar13;
              plVar13 = plVar8;
            } while (bVar26);
          }
          else {
            do {
              plVar8 = plVar24;
              plVar24 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
        }
        plVar13 = plVar8;
      } while (plVar8 != plVar1);
    }
    *param_9 = (ulong)*(uint *)(param_1[4] + 0x10) * (param_7[2] + param_3[2] + param_4[2]) + uVar4;
  }
  return 0;
}

