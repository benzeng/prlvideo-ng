
bool FUN_1008ba970(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
                  uint *param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  long *local_b0;
  uint local_5c;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar14 = *param_5;
  lVar1 = *(long *)(param_1 + 0xc0);
  iVar3 = FUN_100885600(param_7);
  if (0 < iVar3) {
    local_40 = 0;
    plVar20 = (long *)0x0;
    iVar3 = 0;
    uVar2 = 0;
    local_48 = 0;
    uVar17 = uVar14;
    do {
      plVar7 = (long *)FUN_100885620(param_7,iVar3);
      uVar16 = *param_6;
      uVar14 = *(uint *)(plVar7 + 6);
      if ((uVar14 & 2) == 0) {
        if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x19) & 0x10) == 0) {
          if ((uVar14 & 0x60) == 0) goto LAB_1008baa6e;
          goto LAB_1008bb050;
        }
        if ((uVar14 & 0x40) != 0) {
          if ((*(uint *)((long)plVar7 + 0x34) & ~uVar16) != 0) goto LAB_1008baa6e;
          goto LAB_1008bb050;
        }
        if (plVar7[8] != 0) goto LAB_1008bb050;
LAB_1008baa6e:
        uVar8 = FUN_1008b6ee0(lVar1);
        iVar4 = FUN_1008b6ba0(uVar8,*(undefined8 *)(*plVar7 + 0x10));
        uVar14 = 0x20;
        if (iVar4 == 0) {
LAB_1008baab1:
          local_5c = (uVar14 | *(uint *)((long)plVar7 + 0x1c) >> 1 & 0x100) ^ 0x100;
          uVar15 = *(long *)(param_1 + 0x28) + 8U &
                   (*(long *)(*(long *)(param_1 + 0x28) + 0x18) << 0x3e) >> 0x3f;
          iVar4 = FUN_1008b9080(*(undefined8 *)(*plVar7 + 0x18),uVar15);
          if (iVar4 < 0) {
            if (*(long *)(*plVar7 + 0x20) != 0) {
              iVar4 = FUN_1008b9080(*(long *)(*plVar7 + 0x20),uVar15);
              if ((iVar4 == 0) || ((iVar4 < 0 && ((*(byte *)(param_1 + 0xd8) & 2) == 0))))
              goto LAB_1008bab4b;
            }
            local_5c = local_5c | 0x40;
          }
LAB_1008bab4b:
          uVar8 = *(undefined8 *)(*plVar7 + 0x10);
          iVar4 = *(int *)(param_1 + 0xb4);
          iVar5 = FUN_100885600(*(undefined8 *)(param_1 + 0xa0));
          iVar4 = (uint)(iVar4 != iVar5 + -1) + iVar4;
          uVar9 = FUN_100885620(*(undefined8 *)(param_1 + 0xa0),iVar4);
          iVar5 = FUN_1008ca8b0(uVar9,plVar7[4]);
          if (((local_5c & 0x20) == 0) || (iVar5 != 0)) {
            iVar4 = iVar4 + 1;
            iVar5 = FUN_100885600(*(undefined8 *)(param_1 + 0xa0));
            if (iVar4 < iVar5) {
              do {
                uVar9 = FUN_100885620(*(undefined8 *)(param_1 + 0xa0),iVar4);
                uVar10 = FUN_1008b7110(uVar9);
                iVar5 = FUN_1008b6ba0(uVar10,uVar8);
                if ((iVar5 == 0) && (iVar5 = FUN_1008ca8b0(uVar9,plVar7[4]), iVar5 == 0)) {
                  local_5c = local_5c | 0xc;
                  local_48 = uVar9;
                  goto LAB_1008bacc1;
                }
                iVar4 = iVar4 + 1;
                iVar5 = FUN_100885600(*(undefined8 *)(param_1 + 0xa0));
              } while (iVar4 < iVar5);
            }
            if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x19) & 0x10) != 0) {
              iVar4 = FUN_100885600(*(undefined8 *)(param_1 + 0x18));
              iVar5 = 0;
              if (0 < iVar4) {
                do {
                  uVar9 = FUN_100885620(*(undefined8 *)(param_1 + 0x18),iVar5);
                  uVar10 = FUN_1008b7110(uVar9);
                  iVar4 = FUN_1008b6ba0(uVar10,uVar8);
                  if ((iVar4 == 0) && (iVar4 = FUN_1008ca8b0(uVar9,plVar7[4]), iVar4 == 0)) {
                    local_5c = local_5c | 4;
                    local_48 = uVar9;
                    break;
                  }
                  iVar5 = iVar5 + 1;
                  iVar4 = FUN_100885600(*(undefined8 *)(param_1 + 0x18));
                } while (iVar5 < iVar4);
              }
            }
          }
          else {
            local_5c = local_5c | 0x1c;
            local_48 = uVar9;
          }
LAB_1008bacc1:
          if ((local_5c & 4) == 0) goto LAB_1008bb050;
          uVar14 = *(uint *)(plVar7 + 6);
          if ((uVar14 & 0x10) == 0) {
            if ((*(byte *)(lVar1 + 0x48) & 0x10) == 0) {
              uVar14 = uVar14 & 8;
            }
            else {
              uVar14 = uVar14 & 4;
            }
            if (uVar14 == 0) {
              uVar14 = *(uint *)((long)plVar7 + 0x34);
              iVar4 = FUN_100885600(*(undefined8 *)(lVar1 + 0x80));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  puVar11 = (undefined8 *)FUN_100885620(*(undefined8 *)(lVar1 + 0x80),iVar4);
                  if (puVar11[2] == 0) {
                    if ((local_5c & 0x20) != 0) {
LAB_1008baddd:
                      if (((undefined8 *)plVar7[5] == (undefined8 *)0x0) ||
                         ((piVar12 = (int *)*puVar11, piVar12 == (int *)0x0 ||
                          (piVar13 = *(int **)plVar7[5], piVar13 == (int *)0x0)))) {
LAB_1008baf87:
                        uVar14 = uVar14 & *(uint *)(puVar11 + 3);
                        goto LAB_1008bb031;
                      }
                      if (*piVar12 == 1) {
                        lVar19 = *(long *)(piVar12 + 4);
                        if (lVar19 != 0) {
                          if (*piVar13 == 1) {
                            if ((*(long *)(piVar13 + 4) != 0) &&
                               (iVar5 = FUN_1008b6ba0(lVar19), iVar5 == 0)) goto LAB_1008baf87;
                          }
                          else {
LAB_1008baf00:
                            uVar8 = *(undefined8 *)(piVar13 + 2);
                            iVar5 = FUN_100885600(uVar8);
                            iVar18 = 0;
                            if (0 < iVar5) {
                              do {
                                piVar12 = (int *)FUN_100885620(uVar8,iVar18);
                                if ((*piVar12 == 4) &&
                                   (iVar5 = FUN_1008b6ba0(lVar19,*(undefined8 *)(piVar12 + 2)),
                                   iVar5 == 0)) goto LAB_1008baf87;
                                iVar18 = iVar18 + 1;
                                iVar5 = FUN_100885600(uVar8);
                              } while (iVar18 < iVar5);
                            }
                          }
                        }
                      }
                      else if (*piVar13 == 1) {
                        lVar19 = *(long *)(piVar13 + 4);
                        piVar13 = piVar12;
                        if (lVar19 != 0) goto LAB_1008baf00;
                      }
                      else {
                        iVar5 = FUN_100885600(*(undefined8 *)(piVar12 + 2));
                        if (0 < iVar5) {
                          iVar5 = 0;
                          do {
                            uVar8 = FUN_100885620(*(undefined8 *)(piVar12 + 2),iVar5);
                            iVar18 = FUN_100885600(*(undefined8 *)(piVar13 + 2));
                            if (0 < iVar18) {
                              iVar18 = 0;
                              do {
                                uVar9 = FUN_100885620(*(undefined8 *)(piVar13 + 2),iVar18);
                                iVar6 = FUN_1008c54a0(uVar8,uVar9);
                                if (iVar6 == 0) goto LAB_1008baf87;
                                iVar18 = iVar18 + 1;
                                iVar6 = FUN_100885600(*(undefined8 *)(piVar13 + 2));
                              } while (iVar18 < iVar6);
                            }
                            iVar5 = iVar5 + 1;
                            iVar18 = FUN_100885600(*(undefined8 *)(piVar12 + 2));
                          } while (iVar5 < iVar18);
                        }
                      }
                    }
                  }
                  else {
                    uVar8 = *(undefined8 *)(*plVar7 + 0x10);
                    iVar5 = FUN_100885600();
                    iVar18 = 0;
                    if (0 < iVar5) {
                      do {
                        piVar12 = (int *)FUN_100885620(puVar11[2],iVar18);
                        if ((*piVar12 == 4) &&
                           (iVar5 = FUN_1008b6ba0(*(undefined8 *)(piVar12 + 2),uVar8), iVar5 == 0))
                        goto LAB_1008baddd;
                        iVar18 = iVar18 + 1;
                        iVar5 = FUN_100885600(puVar11[2]);
                      } while (iVar18 < iVar5);
                    }
                  }
                  iVar4 = iVar4 + 1;
                  iVar5 = FUN_100885600(*(undefined8 *)(lVar1 + 0x80));
                } while (iVar4 < iVar5);
              }
              local_b0 = plVar7 + 5;
              if ((long *)*local_b0 == (long *)0x0) {
                if ((local_5c & 0x20) != 0) goto LAB_1008bb031;
              }
              else if (((local_5c & 0x20) != 0) && (*(long *)*local_b0 == 0)) {
LAB_1008bb031:
                if ((~uVar16 & uVar14) == 0) goto LAB_1008bb050;
                uVar16 = uVar16 | uVar14;
                local_5c = local_5c | 0x80;
              }
            }
          }
        }
        else {
          local_5c = 0;
          uVar14 = 0;
          if ((*(byte *)(plVar7 + 6) & 0x20) != 0) goto LAB_1008baab1;
        }
      }
      else {
LAB_1008bb050:
        local_5c = 0;
      }
      uVar14 = uVar17;
      if ((int)uVar17 <= (int)local_5c) {
        uVar14 = local_5c;
      }
      if ((int)uVar17 < (int)local_5c) {
        local_40 = local_48;
        plVar20 = plVar7;
        uVar2 = uVar16;
      }
      iVar3 = iVar3 + 1;
      iVar4 = FUN_100885600(param_7);
      uVar17 = uVar14;
    } while (iVar3 < iVar4);
    if (plVar20 != (long *)0x0) {
      if (*param_2 != 0) {
        FUN_1008a20a0();
      }
      *param_2 = (long)plVar20;
      *param_4 = local_40;
      *param_5 = uVar14;
      *param_6 = uVar2;
      FUN_10081d580(plVar20 + 3,1,6,"x509_vfy.c",0x36c);
      if (*param_3 != 0) {
        FUN_1008a20a0();
        *param_3 = 0;
      }
      if (((*(byte *)(*(long *)(param_1 + 0x28) + 0x19) & 0x20) != 0) &&
         (((*(uint *)((long)plVar20 + 0x1c) | *(uint *)(*(long *)(param_1 + 0xc0) + 0x48)) & 0x1000)
          != 0)) {
        iVar3 = FUN_100885600(param_7);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            plVar7 = (long *)FUN_100885620(param_7,iVar3);
            if (((((plVar7[8] != 0) && (plVar20[7] != 0)) &&
                 (iVar4 = FUN_1008b6ba0(*(undefined8 *)(*plVar20 + 0x10),
                                        *(undefined8 *)(*plVar7 + 0x10)), iVar4 == 0)) &&
                ((iVar4 = FUN_1008bb2b0(plVar7,plVar20,0x5a), iVar4 != 0 &&
                 (iVar4 = FUN_1008bb2b0(plVar7,plVar20,0x302), iVar4 != 0)))) &&
               ((iVar4 = FUN_10089aa90(plVar7[8],plVar20[7]), iVar4 < 1 &&
                (iVar4 = FUN_10089aa90(plVar7[7],plVar20[7]), 0 < iVar4)))) {
              uVar15 = *(long *)(param_1 + 0x28) + 8U &
                       (*(long *)(*(long *)(param_1 + 0x28) + 0x18) << 0x3e) >> 0x3f;
              iVar3 = FUN_1008b9080(*(undefined8 *)(*plVar7 + 0x18),uVar15);
              if (iVar3 < 0) {
                if (*(long *)(*plVar7 + 0x20) != 0) {
                  iVar3 = FUN_1008b9080(*(long *)(*plVar7 + 0x20),uVar15);
                  if ((iVar3 == 0) || ((iVar3 < 0 && ((*(byte *)(param_1 + 0xd8) & 2) == 0))))
                  goto LAB_1008bb270;
                }
                *(byte *)param_5 = (byte)*param_5 | 2;
              }
LAB_1008bb270:
              FUN_10081d580(plVar7 + 3,1,6,"x509_vfy.c",0x3d0);
              *param_3 = (long)plVar7;
              goto LAB_1008bb1f2;
            }
            iVar3 = iVar3 + 1;
            iVar4 = FUN_100885600(param_7);
          } while (iVar3 < iVar4);
        }
        *param_3 = 0;
      }
    }
  }
LAB_1008bb1f2:
  return 0x1bf < (int)uVar14;
}

