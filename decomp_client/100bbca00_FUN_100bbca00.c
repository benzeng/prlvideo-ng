
undefined8 FUN_100bbca00(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  undefined8 uVar18;
  uint uVar19;
  long *local_40;
  
  FUN_100bb4190(param_5);
  plVar6 = (long *)FUN_100bb4250(param_5);
  uVar18 = 0;
  if (plVar6 == (long *)0x0) goto LAB_100bbd054;
  local_40 = param_2;
  if (param_3 != (long *)0x0) {
    if (param_2 == param_3) {
      iVar3 = FUN_100bb8d30(plVar6,param_3,param_5);
    }
    else {
      iVar3 = FUN_100bb67a0(plVar6,param_2,param_3,param_5);
    }
    uVar18 = 0;
    local_40 = plVar6;
    if (iVar3 == 0) goto LAB_100bbd054;
  }
  FUN_100bb4190(param_5);
  lVar7 = FUN_100bb4250(param_5);
  lVar8 = FUN_100bb4250(param_5);
  lVar9 = FUN_100bb4250(param_5);
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_100bb4250(param_5);
  }
  uVar18 = 0;
  if ((((lVar7 != 0) && (lVar8 != 0)) && (lVar9 != 0)) && (uVar18 = 0, param_1 != (long *)0x0)) {
    iVar3 = (int)local_40[1];
    if (iVar3 == (int)param_4[1]) {
      lVar16 = (long)(iVar3 + -1) * 8;
      puVar15 = (ulong *)(*param_4 + lVar16);
      puVar17 = (ulong *)(lVar16 + *local_40);
      lVar16 = (long)iVar3;
      do {
        if (lVar16 < 1) goto LAB_100bbcb84;
        uVar1 = *puVar15;
        lVar16 = lVar16 + -1;
        puVar15 = puVar15 + -1;
        uVar2 = *puVar17;
        puVar17 = puVar17 + -1;
      } while (uVar2 == uVar1);
      if (uVar2 <= uVar1) {
LAB_100bbcb41:
        *(undefined4 *)(lVar9 + 8) = 0;
        *(undefined4 *)(lVar9 + 0x10) = 0;
        lVar7 = FUN_100bac3a0(param_1);
        uVar18 = 0;
        if (lVar7 != 0) {
          if (*(int *)(param_5 + 0x34) == 0) {
            uVar5 = *(int *)(param_5 + 0x28) - 1;
            *(uint *)(param_5 + 0x28) = uVar5;
            uVar5 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar5 * 4);
            uVar19 = *(uint *)(param_5 + 0x30);
            if (uVar5 <= uVar19 && uVar19 - uVar5 != 0) {
              iVar3 = *(int *)(param_5 + 0x18);
              uVar12 = uVar19 - uVar5;
              *(uint *)(param_5 + 0x18) = iVar3 - (uVar19 - uVar5);
              if (uVar12 != 0) {
                uVar14 = iVar3 + 0xfU & 0xf;
                if ((uVar12 & 1) != 0) {
                  if (uVar14 == 0) {
                    *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                    uVar14 = 0xf;
                  }
                  else {
                    uVar14 = uVar14 - 1;
                  }
                  uVar12 = uVar12 - 1;
                }
                if (uVar19 - 1 != uVar5) {
                  do {
                    if (uVar14 == 0) {
                      *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180)
                      ;
                      iVar3 = 0xf;
                    }
                    else {
                      iVar3 = uVar14 - 1;
                    }
                    uVar12 = uVar12 - 2;
                    if (iVar3 == 0) {
                      *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180)
                      ;
                      uVar14 = 0xf;
                    }
                    else {
                      uVar14 = iVar3 - 1;
                    }
                  } while (uVar12 != 0);
                }
              }
            }
            *(uint *)(param_5 + 0x30) = uVar5;
            *(undefined4 *)(param_5 + 0x38) = 0;
            uVar18 = 1;
          }
          else {
            *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + -1;
            uVar18 = 1;
          }
        }
        goto LAB_100bbd054;
      }
    }
    else if (iVar3 < (int)param_4[1]) goto LAB_100bbcb41;
LAB_100bbcb84:
    uVar5 = 0;
    if (iVar3 != 0) {
      iVar4 = FUN_100bac6c0(*(undefined8 *)(*local_40 + -8 + (long)iVar3 * 8));
      uVar5 = iVar4 + (iVar3 + -1) * 0x40;
    }
    uVar19 = (int)param_4[6] * 2;
    if ((int)uVar19 < (int)uVar5) {
      uVar19 = uVar5;
    }
    uVar5 = uVar19;
    if (uVar19 != *(uint *)((long)param_4 + 0x34)) {
      FUN_100bb4190(param_5);
      plVar6 = (long *)FUN_100bb4250(param_5);
      uVar5 = 0xffffffff;
      if ((-1 < (int)uVar19) && (plVar6 != (long *)0x0)) {
        iVar4 = (int)(((uint)((int)uVar19 >> 0x1f) >> 0x1a) + uVar19) >> 6;
        iVar3 = (int)plVar6[1];
        if (iVar3 <= iVar4) {
          if (*(int *)((long)plVar6 + 0xc) <= iVar4) {
            lVar16 = FUN_100bac510(plVar6);
            uVar5 = 0xffffffff;
            if (lVar16 == 0) goto LAB_100bbcd29;
            iVar3 = (int)plVar6[1];
          }
          if (iVar3 < iVar4 + 1) {
            ___bzero(*plVar6 + (long)iVar3 * 8,(ulong)(uint)(iVar4 - iVar3) * 8 + 8);
          }
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        puVar17 = (ulong *)(*plVar6 + (long)iVar4 * 8);
        *puVar17 = *puVar17 | 1L << ((byte)uVar19 & 0x3f);
        iVar3 = FUN_100bb54a0(param_4 + 3,0,plVar6,param_4,param_5);
        uVar5 = -(uint)(iVar3 == 0) | uVar19;
      }
LAB_100bbcd29:
      if (*(int *)(param_5 + 0x34) == 0) {
        uVar12 = *(int *)(param_5 + 0x28) - 1;
        *(uint *)(param_5 + 0x28) = uVar12;
        uVar12 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar12 * 4);
        uVar14 = *(uint *)(param_5 + 0x30);
        if (uVar12 <= uVar14 && uVar14 - uVar12 != 0) {
          iVar3 = *(int *)(param_5 + 0x18);
          uVar10 = uVar14 - uVar12;
          *(uint *)(param_5 + 0x18) = iVar3 - (uVar14 - uVar12);
          if (uVar10 != 0) {
            uVar13 = iVar3 + 0xfU & 0xf;
            if ((uVar10 & 1) != 0) {
              if (uVar13 == 0) {
                *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                uVar13 = 0xf;
              }
              else {
                uVar13 = uVar13 - 1;
              }
              uVar10 = uVar10 - 1;
            }
            if (uVar14 - 1 != uVar12) {
              do {
                if (uVar13 == 0) {
                  *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                  iVar3 = 0xf;
                }
                else {
                  iVar3 = uVar13 - 1;
                }
                uVar10 = uVar10 - 2;
                if (iVar3 == 0) {
                  *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
                  uVar13 = 0xf;
                }
                else {
                  uVar13 = iVar3 - 1;
                }
              } while (uVar10 != 0);
            }
          }
        }
        *(uint *)(param_5 + 0x30) = uVar12;
        *(undefined4 *)(param_5 + 0x38) = 0;
      }
      else {
        *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + -1;
      }
      *(uint *)((long)param_4 + 0x34) = uVar5;
    }
    uVar18 = 0;
    if (uVar5 != 0xffffffff) {
      iVar3 = FUN_100bb5e40(lVar7,local_40,(int)param_4[6]);
      if (iVar3 == 0) {
        uVar18 = 0;
      }
      else {
        iVar3 = FUN_100bb67a0(lVar8,lVar7,param_4 + 3,param_5);
        if (iVar3 == 0) {
          uVar18 = 0;
        }
        else {
          iVar3 = FUN_100bb5e40(lVar9,lVar8,uVar19 - (int)param_4[6]);
          if (iVar3 == 0) {
            uVar18 = 0;
          }
          else {
            *(undefined4 *)(lVar9 + 0x10) = 0;
            iVar3 = FUN_100bb67a0(lVar8,param_4,lVar9,param_5);
            if (iVar3 == 0) {
              uVar18 = 0;
            }
            else {
              iVar3 = FUN_100bb61f0(param_1,local_40,lVar8);
              uVar18 = 0;
              if (iVar3 != 0) {
                *(undefined4 *)(param_1 + 2) = 0;
                iVar3 = 0;
                do {
                  iVar4 = (int)param_1[1];
                  lVar7 = (long)iVar4;
                  if (iVar4 == (int)param_4[1]) {
                    lVar8 = (long)(iVar4 + -1) * 8;
                    puVar15 = (ulong *)(*param_4 + lVar8);
                    puVar17 = (ulong *)(lVar8 + *param_1);
                    do {
                      if (lVar7 < 1) goto LAB_100bbcf04;
                      uVar1 = *puVar15;
                      lVar7 = lVar7 + -1;
                      puVar15 = puVar15 + -1;
                      uVar2 = *puVar17;
                      puVar17 = puVar17 + -1;
                    } while (uVar2 == uVar1);
                    if (uVar2 < uVar1) {
LAB_100bbcf5c:
                      uVar11 = 0;
                      if (iVar4 != 0) {
                        uVar11 = (undefined4)local_40[2];
                      }
                      *(undefined4 *)(param_1 + 2) = uVar11;
                      *(uint *)(lVar9 + 0x10) = *(uint *)(param_4 + 2) ^ *(uint *)(local_40 + 2);
                      uVar18 = 1;
                      break;
                    }
                  }
                  else if (iVar4 < (int)param_4[1]) goto LAB_100bbcf5c;
LAB_100bbcf04:
                  uVar18 = 0;
                  if (2 < iVar3) break;
                  iVar4 = FUN_100bb61f0(param_1,param_1,param_4);
                  if (iVar4 == 0) {
                    uVar18 = 0;
                    break;
                  }
                  iVar3 = iVar3 + 1;
                  iVar4 = FUN_100bb8c20(lVar9,1);
                  uVar18 = 0;
                } while (iVar4 != 0);
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_5 + 0x34) == 0) {
    uVar5 = *(int *)(param_5 + 0x28) - 1;
    *(uint *)(param_5 + 0x28) = uVar5;
    uVar5 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar5 * 4);
    uVar19 = *(uint *)(param_5 + 0x30);
    if (uVar5 <= uVar19 && uVar19 - uVar5 != 0) {
      iVar3 = *(int *)(param_5 + 0x18);
      uVar12 = uVar19 - uVar5;
      *(uint *)(param_5 + 0x18) = iVar3 - (uVar19 - uVar5);
      if (uVar12 != 0) {
        uVar14 = iVar3 + 0xfU & 0xf;
        if ((uVar12 & 1) != 0) {
          if (uVar14 == 0) {
            *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
            uVar14 = 0xf;
          }
          else {
            uVar14 = uVar14 - 1;
          }
          uVar12 = uVar12 - 1;
        }
        if (uVar19 - 1 != uVar5) {
          do {
            if (uVar14 == 0) {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
              iVar3 = 0xf;
            }
            else {
              iVar3 = uVar14 - 1;
            }
            uVar12 = uVar12 - 2;
            if (iVar3 == 0) {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
              uVar14 = 0xf;
            }
            else {
              uVar14 = iVar3 - 1;
            }
          } while (uVar12 != 0);
        }
      }
    }
    *(uint *)(param_5 + 0x30) = uVar5;
    *(undefined4 *)(param_5 + 0x38) = 0;
  }
  else {
    *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + -1;
  }
LAB_100bbd054:
  if (*(int *)(param_5 + 0x34) == 0) {
    uVar5 = *(int *)(param_5 + 0x28) - 1;
    *(uint *)(param_5 + 0x28) = uVar5;
    uVar5 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar5 * 4);
    uVar19 = *(uint *)(param_5 + 0x30);
    if (uVar5 <= uVar19 && uVar19 - uVar5 != 0) {
      iVar3 = *(int *)(param_5 + 0x18);
      uVar12 = uVar19 - uVar5;
      *(uint *)(param_5 + 0x18) = iVar3 - (uVar19 - uVar5);
      if (uVar12 != 0) {
        uVar14 = iVar3 + 0xfU & 0xf;
        if ((uVar12 & 1) != 0) {
          if (uVar14 == 0) {
            *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
            uVar14 = 0xf;
          }
          else {
            uVar14 = uVar14 - 1;
          }
          uVar12 = uVar12 - 1;
        }
        if (uVar19 - 1 != uVar5) {
          do {
            if (uVar14 == 0) {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
              iVar3 = 0xf;
            }
            else {
              iVar3 = uVar14 - 1;
            }
            uVar12 = uVar12 - 2;
            if (iVar3 == 0) {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
              uVar14 = 0xf;
            }
            else {
              uVar14 = iVar3 - 1;
            }
          } while (uVar12 != 0);
        }
      }
    }
    *(uint *)(param_5 + 0x30) = uVar5;
    *(undefined4 *)(param_5 + 0x38) = 0;
  }
  else {
    *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + -1;
  }
  return uVar18;
}

