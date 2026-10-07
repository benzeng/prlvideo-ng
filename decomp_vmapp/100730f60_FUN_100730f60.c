
ulong FUN_100730f60(long *param_1,long *param_2,uint param_3,undefined1 *param_4,ulong param_5,
                   undefined8 *param_6)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  
  if (6 < param_3) {
    return 0;
  }
  if ((0x54U >> (param_3 & 0x1f) & 1) == 0) {
    return 0;
  }
  pcVar2 = *(code **)(*param_1 + 0xc0);
  if (((pcVar2 != (code *)0x0) && (*param_1 == *param_2)) &&
     (iVar4 = (*pcVar2)(param_1,param_2), iVar4 != 0)) {
    if (param_4 == (undefined1 *)0x0) {
      return 1;
    }
    if (param_5 == 0) {
      return 0;
    }
    *param_4 = 0;
    return 1;
  }
  iVar4 = (int)param_1[0xe];
  iVar5 = 0;
  if ((long)iVar4 != 0) {
    iVar5 = FUN_10072d8e0(*(undefined8 *)(param_1[0xd] + -8 + (long)iVar4 * 8));
    iVar5 = iVar5 + (iVar4 + -1) * 0x40;
  }
  iVar4 = (int)(iVar5 + 7 + ((uint)(iVar5 + 7 >> 0x1f) >> 0x1d)) >> 3;
  uVar13 = (ulong)iVar4;
  uVar15 = (uVar13 << (param_3 != 2)) + 1;
  if (param_4 == (undefined1 *)0x0) {
    return uVar15;
  }
  if (param_5 < uVar15) {
    return 0;
  }
  puVar8 = (undefined8 *)0x0;
  if (param_6 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar8 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)(puVar8 + 7) = 0;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    param_6 = puVar8;
  }
  FUN_1007353b0(param_6);
  plVar9 = (long *)FUN_100735470(param_6);
  plVar10 = (long *)FUN_100735470(param_6);
  if (plVar10 != (long *)0x0) {
    pcVar2 = *(code **)(*param_1 + 0x88);
    if (((pcVar2 != (code *)0x0) && (*param_1 == *param_2)) &&
       (iVar5 = (*pcVar2)(param_1,param_2,plVar9,plVar10,param_6), iVar5 != 0)) {
      uVar6 = param_3;
      if (((param_3 & 0xfffffffb) == 2) && (0 < (int)plVar10[1])) {
        uVar6 = (*(uint *)*plVar10 & 1) + param_3;
      }
      *param_4 = (char)uVar6;
      iVar5 = (int)plVar9[1];
      iVar7 = 0;
      if ((long)iVar5 != 0) {
        iVar7 = FUN_10072d8e0(*(undefined8 *)(*plVar9 + -8 + (long)iVar5 * 8));
        iVar7 = iVar7 + (iVar5 + -1) * 0x40;
      }
      iVar7 = (int)(iVar7 + 7 + ((uint)(iVar7 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar13 - (long)iVar7 <= uVar13) {
        lVar17 = 1;
        if (iVar4 != iVar7) {
          ___bzero(param_4 + 1);
          lVar17 = (uVar13 + 1) - (long)iVar7;
          iVar5 = (int)plVar9[1];
        }
        iVar7 = 0;
        if (iVar5 != 0) {
          iVar16 = (iVar5 + -1) * 0x40;
          lVar3 = *plVar9;
          iVar5 = FUN_10072d8e0(*(undefined8 *)(lVar3 + (long)(iVar5 + -1) * 8));
          iVar7 = 0;
          if (0xe < (uint)(iVar5 + 0xe + iVar16)) {
            iVar16 = iVar5 + 7 + iVar16;
            iVar7 = (int)(((uint)(iVar16 >> 0x1f) >> 0x1d) + iVar16) >> 3;
            iVar5 = iVar7 + -1;
            iVar16 = iVar7 + -1 + ((uint)(iVar5 >> 0x1f) >> 0x1d);
            param_4[lVar17] =
                 (char)(*(ulong *)(lVar3 + (long)(iVar16 >> 3) * 8) >>
                       (((char)iVar5 - ((byte)iVar16 & 0x18)) * '\b' & 0x3f));
            if (iVar5 != 0) {
              puVar14 = param_4 + lVar17;
              if ((iVar7 - 1U & 1) != 0) {
                iVar5 = iVar7 + -2;
                iVar16 = iVar7 + -2 + ((uint)(iVar5 >> 0x1f) >> 0x1d);
                puVar14[1] = (char)(*(ulong *)(*plVar9 + (long)(iVar16 >> 3) * 8) >>
                                   (((char)iVar5 - ((byte)iVar16 & 0x18)) * '\b' & 0x3f));
                puVar14 = puVar14 + 1;
              }
              if (iVar7 != 2) {
                iVar5 = iVar5 + -1;
                do {
                  iVar16 = ((uint)(iVar5 >> 0x1f) >> 0x1d) + iVar5;
                  puVar14[1] = (char)(*(ulong *)(*plVar9 + (long)(iVar16 >> 3) * 8) >>
                                     (((char)iVar5 - ((byte)iVar16 & 0x18)) * '\b' & 0x3f));
                  iVar16 = iVar5 + -1 + ((uint)(iVar5 + -1 >> 0x1f) >> 0x1d);
                  puVar14[2] = (char)(*(ulong *)(*plVar9 + (long)(iVar16 >> 3) * 8) >>
                                     ((((char)iVar5 + -1) - ((byte)iVar16 & 0x18)) * '\b' & 0x3f));
                  iVar5 = iVar5 + -2;
                  puVar14 = puVar14 + 2;
                } while (iVar5 != -1);
              }
            }
          }
        }
        uVar18 = uVar13 + 1;
        if (iVar7 + lVar17 == uVar18) {
          if ((param_3 & 0xfffffffd) == 4) {
            iVar5 = (int)plVar10[1];
            iVar7 = 0;
            if ((long)iVar5 != 0) {
              iVar7 = FUN_10072d8e0(*(undefined8 *)(*plVar10 + -8 + (long)iVar5 * 8));
              iVar7 = iVar7 + (iVar5 + -1) * 0x40;
            }
            iVar7 = (int)(iVar7 + 7 + ((uint)(iVar7 + 7 >> 0x1f) >> 0x1d)) >> 3;
            if (uVar13 < uVar13 - (long)iVar7) goto LAB_10073154a;
            if (iVar4 != iVar7) {
              ___bzero(param_4 + uVar18);
              uVar18 = (uVar13 + uVar18) - (long)iVar7;
              iVar5 = (int)plVar10[1];
            }
            lVar17 = 0;
            if (iVar5 != 0) {
              iVar7 = (iVar5 + -1) * 0x40;
              lVar3 = *plVar10;
              iVar4 = FUN_10072d8e0(*(undefined8 *)(lVar3 + (long)(iVar5 + -1) * 8));
              lVar17 = 0;
              if (0xe < (uint)(iVar4 + 0xe + iVar7)) {
                iVar7 = iVar4 + 7 + iVar7;
                iVar7 = (int)(((uint)(iVar7 >> 0x1f) >> 0x1d) + iVar7) >> 3;
                iVar4 = iVar7 + -1;
                iVar5 = iVar7 + -1 + ((uint)(iVar4 >> 0x1f) >> 0x1d);
                param_4[uVar18] =
                     (char)(*(ulong *)(lVar3 + (long)(iVar5 >> 3) * 8) >>
                           (((char)iVar4 - ((byte)iVar5 & 0x18)) * '\b' & 0x3f));
                if (iVar4 != 0) {
                  param_4 = param_4 + uVar18;
                  if ((iVar7 - 1U & 1) != 0) {
                    iVar4 = iVar7 + -2;
                    iVar5 = iVar7 + -2 + ((uint)(iVar4 >> 0x1f) >> 0x1d);
                    param_4[1] = (char)(*(ulong *)(*plVar10 + (long)(iVar5 >> 3) * 8) >>
                                       (((char)iVar4 - ((byte)iVar5 & 0x18)) * '\b' & 0x3f));
                    param_4 = param_4 + 1;
                  }
                  if (iVar7 != 2) {
                    iVar4 = iVar4 + -1;
                    do {
                      iVar5 = ((uint)(iVar4 >> 0x1f) >> 0x1d) + iVar4;
                      param_4[1] = (char)(*(ulong *)(*plVar10 + (long)(iVar5 >> 3) * 8) >>
                                         (((char)iVar4 - ((byte)iVar5 & 0x18)) * '\b' & 0x3f));
                      iVar5 = iVar4 + -1 + ((uint)(iVar4 + -1 >> 0x1f) >> 0x1d);
                      param_4[2] = (char)(*(ulong *)(*plVar10 + (long)(iVar5 >> 3) * 8) >>
                                         ((((char)iVar4 + -1) - ((byte)iVar5 & 0x18)) * '\b' & 0x3f)
                                         );
                      iVar4 = iVar4 + -2;
                      param_4 = param_4 + 2;
                    } while (iVar4 != -1);
                  }
                }
                lVar17 = (long)iVar7;
              }
            }
            uVar18 = uVar18 + lVar17;
          }
          if (uVar18 == uVar15) {
            if (*(int *)((long)param_6 + 0x34) == 0) {
              iVar4 = *(int *)(param_6 + 5);
              *(uint *)(param_6 + 5) = iVar4 - 1U;
              uVar6 = *(uint *)(param_6[4] + (ulong)(iVar4 - 1U) * 4);
              uVar1 = *(uint *)(param_6 + 6);
              if (uVar6 <= uVar1 && uVar1 - uVar6 != 0) {
                iVar4 = *(int *)(param_6 + 3);
                uVar11 = uVar1 - uVar6;
                *(uint *)(param_6 + 3) = iVar4 - (uVar1 - uVar6);
                if (uVar11 != 0) {
                  uVar12 = iVar4 + 0xfU & 0xf;
                  if ((uVar11 & 1) != 0) {
                    if (uVar12 == 0) {
                      param_6[1] = *(undefined8 *)(param_6[1] + 0x180);
                      uVar12 = 0xf;
                    }
                    else {
                      uVar12 = uVar12 - 1;
                    }
                    uVar11 = uVar11 - 1;
                  }
                  if (uVar1 - 1 != uVar6) {
                    do {
                      if (uVar12 == 0) {
                        param_6[1] = *(undefined8 *)(param_6[1] + 0x180);
                        iVar4 = 0xf;
                      }
                      else {
                        iVar4 = uVar12 - 1;
                      }
                      uVar11 = uVar11 - 2;
                      if (iVar4 == 0) {
                        param_6[1] = *(undefined8 *)(param_6[1] + 0x180);
                        uVar12 = 0xf;
                      }
                      else {
                        uVar12 = iVar4 - 1;
                      }
                    } while (uVar11 != 0);
                  }
                }
              }
              *(uint *)(param_6 + 6) = uVar6;
              *(undefined4 *)(param_6 + 7) = 0;
            }
            else {
              *(int *)((long)param_6 + 0x34) = *(int *)((long)param_6 + 0x34) + -1;
            }
            if (puVar8 == (undefined8 *)0x0) {
              return uVar15;
            }
            FUN_100729fd0();
            return uVar15;
          }
        }
      }
    }
  }
LAB_10073154a:
  if (*(int *)((long)param_6 + 0x34) == 0) {
    iVar4 = *(int *)(param_6 + 5);
    *(uint *)(param_6 + 5) = iVar4 - 1U;
    uVar6 = *(uint *)(param_6[4] + (ulong)(iVar4 - 1U) * 4);
    uVar1 = *(uint *)(param_6 + 6);
    if (uVar6 <= uVar1 && uVar1 - uVar6 != 0) {
      iVar4 = *(int *)(param_6 + 3);
      uVar11 = uVar1 - uVar6;
      *(uint *)(param_6 + 3) = iVar4 - (uVar1 - uVar6);
      if (uVar11 != 0) {
        uVar12 = iVar4 + 0xfU & 0xf;
        if ((uVar11 & 1) != 0) {
          if (uVar12 == 0) {
            param_6[1] = *(undefined8 *)(param_6[1] + 0x180);
            uVar12 = 0xf;
          }
          else {
            uVar12 = uVar12 - 1;
          }
          uVar11 = uVar11 - 1;
        }
        if (uVar1 - 1 != uVar6) {
          do {
            if (uVar12 == 0) {
              param_6[1] = *(undefined8 *)(param_6[1] + 0x180);
              iVar4 = 0xf;
            }
            else {
              iVar4 = uVar12 - 1;
            }
            uVar11 = uVar11 - 2;
            if (iVar4 == 0) {
              param_6[1] = *(undefined8 *)(param_6[1] + 0x180);
              uVar12 = 0xf;
            }
            else {
              uVar12 = iVar4 - 1;
            }
          } while (uVar11 != 0);
        }
      }
    }
    *(uint *)(param_6 + 6) = uVar6;
    *(undefined4 *)(param_6 + 7) = 0;
  }
  else {
    *(int *)((long)param_6 + 0x34) = *(int *)((long)param_6 + 0x34) + -1;
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_100729fd0();
  }
  return 0;
}

