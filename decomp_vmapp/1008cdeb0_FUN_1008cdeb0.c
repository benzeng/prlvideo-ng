
undefined4
FUN_1008cdeb0(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  int *piVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long *plVar24;
  int iVar25;
  int local_58;
  int local_48;
  long local_38;
  
  local_38 = 0;
  *param_1 = 0;
  *param_2 = 0;
  iVar5 = FUN_100885600(param_3);
  iVar20 = iVar5 + 1;
  iVar6 = 0;
  if ((param_5 & 0x200) == 0) {
    iVar6 = iVar20;
  }
  local_58 = 0;
  if ((param_5 & 0x400) == 0) {
    local_58 = iVar20;
  }
  if (iVar5 == 1) goto LAB_1008ce94a;
  iVar22 = 0;
  if ((param_5 & 0x100) == 0) {
    iVar22 = iVar20;
  }
  iVar20 = iVar5 + -2;
  if (iVar20 < 0) {
LAB_1008ce011:
    plVar9 = (long *)FUN_10081ddd0(0x30,"pcy_tree.c",0xdf);
    if (plVar9 == (long *)0x0) goto switchD_1008ce208_caseD_0;
    *(undefined4 *)(plVar9 + 5) = 0;
    lVar7 = FUN_10081ddd0(iVar5 << 5,"pcy_tree.c",0xe5);
    *plVar9 = lVar7;
    *(undefined4 *)(plVar9 + 1) = 0;
    plVar9[4] = 0;
    plVar9[3] = 0;
    plVar9[2] = 0;
    if (lVar7 == 0) {
      FUN_10081e1a0(plVar9);
      return 0;
    }
    ___bzero(lVar7,(long)iVar5 << 5);
    *(int *)(plVar9 + 1) = iVar5;
    lVar7 = *plVar9;
    uVar12 = FUN_100821870(0x2ea);
    lVar8 = FUN_1008cdb70(0,uVar12,0);
    plVar10 = plVar9;
    if ((lVar8 != 0) && (lVar8 = FUN_1008cd980(lVar7,lVar8,0,plVar9), lVar8 != 0)) {
      if (-1 < iVar20) {
        lVar7 = lVar7 + 0x38;
        do {
          lVar8 = FUN_100885620(param_3);
          plVar10 = (long *)FUN_1008cd490(lVar8);
          FUN_10081d580(lVar8 + 0x1c,1,3,"pcy_tree.c",0x101);
          *(long *)(lVar7 + -0x18) = lVar8;
          if (*plVar10 == 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 2;
          }
          uVar2 = *(ulong *)(lVar8 + 0x48);
          uVar19 = uVar2 & 0x20;
          if (iVar6 == 0) {
            iVar6 = 0;
            if ((iVar20 == 0) || (uVar19 == 0)) {
              *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 2;
            }
          }
          else {
            iVar6 = iVar6 - (uint)(uVar19 == 0);
            lVar8 = plVar10[2];
            iVar5 = iVar6;
            if (lVar8 < iVar6) {
              iVar5 = (int)lVar8;
            }
            if (-1 < lVar8) {
              iVar6 = iVar5;
            }
          }
          if (local_58 == 0) {
            *(byte *)(lVar7 + 1) = *(byte *)(lVar7 + 1) | 4;
            local_58 = 0;
          }
          else {
            local_58 = (((uint)(uVar2 >> 5) & 1) - 1) + local_58;
            lVar8 = plVar10[4];
            iVar5 = local_58;
            if (lVar8 < local_58) {
              iVar5 = (int)lVar8;
            }
            if (-1 < lVar8) {
              local_58 = iVar5;
            }
          }
          lVar7 = lVar7 + 0x20;
          bVar3 = 0 < iVar20;
          iVar20 = iVar20 + -1;
        } while (bVar3);
      }
      iVar6 = (uint)(iVar22 == 0) * 4 + 1;
      goto LAB_1008ce1f3;
    }
    goto LAB_1008ce973;
  }
  iVar25 = iVar5 + -1;
  iVar23 = 1;
  do {
    iVar25 = iVar25 + -1;
    lVar7 = FUN_100885620(param_3,iVar25);
    FUN_1008c9ba0(lVar7,0xffffffff,0xffffffff);
    lVar8 = FUN_1008cd490(lVar7);
    if (lVar8 == 0) goto switchD_1008ce208_caseD_0;
    iVar21 = -1;
    if ((((*(ulong *)(lVar7 + 0x48) & 0x800) == 0) && (iVar21 = iVar23, iVar23 == 1)) &&
       (iVar21 = 2, *(long *)(lVar8 + 8) != 0)) {
      iVar21 = 1;
    }
    iVar23 = iVar21;
    if (0 < iVar22) {
      iVar22 = (((uint)(*(ulong *)(lVar7 + 0x48) >> 5) & 1) - 1) + iVar22;
      lVar7 = *(long *)(lVar8 + 0x18);
      iVar21 = iVar22;
      if (lVar7 < iVar22) {
        iVar21 = (int)lVar7;
      }
      if (lVar7 != -1) {
        iVar22 = iVar21;
      }
    }
  } while (0 < iVar25);
  if (iVar23 == 1) goto LAB_1008ce011;
  iVar6 = 6;
  if (iVar22 != 0) {
    iVar6 = iVar23;
  }
  if (iVar23 != 2) {
    iVar6 = iVar23;
  }
  plVar9 = (long *)0x0;
LAB_1008ce1f3:
  uVar4 = 1;
  switch(iVar6) {
  case 0:
    goto switchD_1008ce208_caseD_0;
  case 1:
    if (plVar9 == (long *)0x0) {
      return 1;
    }
    goto LAB_1008ce251;
  case 2:
    break;
  default:
    goto switchD_1008ce208_caseD_3;
  case 5:
    *param_2 = 1;
switchD_1008ce208_caseD_3:
    plVar10 = (long *)0x0;
    if (plVar9 == (long *)0x0) {
LAB_1008ce973:
      FUN_1008cddd0(plVar10);
switchD_1008ce208_caseD_0:
      uVar4 = 0;
    }
    else {
LAB_1008ce251:
      iVar6 = (int)plVar9[1];
      lVar7 = *plVar9;
      plVar10 = plVar9;
      if (1 < iVar6) {
        iVar5 = 1;
        lVar8 = lVar7;
        do {
          lVar17 = lVar8 + 0x20;
          plVar11 = (long *)FUN_1008cd490(*(undefined8 *)(lVar8 + 0x20));
          iVar6 = FUN_100885600(plVar11[1]);
          if (0 < iVar6) {
            iVar6 = 0;
            do {
              lVar7 = FUN_100885620(plVar11[1],iVar6);
              iVar20 = FUN_100885600(*(undefined8 *)(lVar8 + 8));
              if (iVar20 < 1) {
LAB_1008ce31c:
                if ((*(long *)(lVar8 + 0x10) != 0) &&
                   (lVar7 = FUN_1008cd980(lVar17,lVar7,*(long *)(lVar8 + 0x10),0), lVar7 == 0))
                goto LAB_1008ce973;
              }
              else {
                bVar3 = false;
                iVar20 = 0;
                do {
                  uVar12 = FUN_100885620(*(undefined8 *)(lVar8 + 8),iVar20);
                  iVar22 = FUN_1008cda90(lVar8,uVar12,*(undefined8 *)(lVar7 + 8));
                  if (iVar22 != 0) {
                    lVar13 = FUN_1008cd980(lVar17,lVar7,uVar12,0);
                    bVar3 = true;
                    if (lVar13 == 0) goto LAB_1008ce973;
                  }
                  iVar20 = iVar20 + 1;
                  iVar22 = FUN_100885600(*(undefined8 *)(lVar8 + 8));
                } while (iVar20 < iVar22);
                if (!bVar3) goto LAB_1008ce31c;
              }
              iVar6 = iVar6 + 1;
              iVar20 = FUN_100885600(plVar11[1]);
            } while (iVar6 < iVar20);
          }
          if ((*(byte *)(lVar8 + 0x39) & 2) == 0) {
            iVar6 = FUN_100885600(*(undefined8 *)(lVar8 + 8));
            if (0 < iVar6) {
              iVar6 = 0;
              do {
                puVar14 = (undefined8 *)FUN_100885620(*(undefined8 *)(lVar8 + 8),iVar6);
                if (((*(byte *)(lVar8 + 0x19) & 4) == 0) && ((*(byte *)*puVar14 & 1) != 0)) {
                  uVar12 = *(undefined8 *)((byte *)*puVar14 + 0x18);
                  iVar20 = *(int *)(puVar14 + 2);
                  iVar22 = FUN_100885600(uVar12);
                  if (iVar20 != iVar22) {
                    iVar20 = FUN_100885600(uVar12);
                    iVar22 = 0;
                    if (0 < iVar20) {
                      do {
                        lVar7 = FUN_100885620(uVar12,iVar22);
                        lVar13 = FUN_1008cd8e0(lVar17,puVar14,lVar7);
                        if (lVar13 == 0) {
                          if (lVar7 == 0) {
                            lVar7 = *(long *)((uint *)*puVar14 + 2);
                          }
                          pbVar15 = (byte *)FUN_1008cdb70(0,lVar7,*(uint *)*puVar14 & 0x10);
                          if (pbVar15 == (byte *)0x0) goto LAB_1008ce973;
                          *(undefined8 *)(pbVar15 + 0x10) = *(undefined8 *)(*plVar11 + 0x10);
                          *pbVar15 = *pbVar15 | 4;
                          lVar7 = FUN_1008cd980(lVar17,pbVar15,puVar14,plVar9);
                          if (lVar7 == 0) {
                            FUN_1008cdb20(pbVar15);
                            goto LAB_1008ce973;
                          }
                        }
                        iVar22 = iVar22 + 1;
                        iVar20 = FUN_100885600(uVar12);
                      } while (iVar22 < iVar20);
                    }
                  }
                }
                else if (*(int *)(puVar14 + 2) == 0) {
                  pbVar15 = (byte *)FUN_1008cdb70(0,*(undefined8 *)((uint *)*puVar14 + 2),
                                                  *(uint *)*puVar14 & 0x10);
                  if (pbVar15 == (byte *)0x0) goto LAB_1008ce973;
                  *(undefined8 *)(pbVar15 + 0x10) = *(undefined8 *)(*plVar11 + 0x10);
                  *pbVar15 = *pbVar15 | 4;
                  lVar7 = FUN_1008cd980(lVar17,pbVar15,puVar14,plVar9);
                  if (lVar7 == 0) {
                    FUN_1008cdb20(pbVar15);
                    goto LAB_1008ce973;
                  }
                }
                iVar6 = iVar6 + 1;
                iVar20 = FUN_100885600(*(undefined8 *)(lVar8 + 8));
              } while (iVar6 < iVar20);
            }
            if ((*(long *)(lVar8 + 0x10) != 0) &&
               (lVar7 = FUN_1008cd980(lVar17,*plVar11,*(long *)(lVar8 + 0x10),0), lVar7 == 0))
            goto LAB_1008ce973;
          }
          lVar13 = lVar17;
          if ((*(byte *)(lVar8 + 0x39) & 4) != 0) {
            uVar12 = *(undefined8 *)(lVar8 + 0x28);
            iVar6 = FUN_100885600(uVar12);
            if (0 < iVar6) {
              iVar6 = iVar6 + 1;
              do {
                puVar14 = (undefined8 *)FUN_100885620(uVar12,iVar6 + -2);
                if ((*(byte *)*puVar14 & 3) != 0) {
                  *(int *)(puVar14[1] + 0x10) = *(int *)(puVar14[1] + 0x10) + -1;
                  FUN_10081e1a0(puVar14);
                  FUN_100885070(uVar12,iVar6 + -2);
                }
                iVar6 = iVar6 + -1;
              } while (1 < iVar6);
            }
          }
          do {
            uVar12 = *(undefined8 *)(lVar13 + -0x18);
            iVar6 = FUN_100885600(uVar12);
            if (0 < iVar6) {
              iVar6 = iVar6 + 1;
              do {
                lVar7 = FUN_100885620(uVar12,iVar6 + -2);
                if (*(int *)(lVar7 + 0x10) == 0) {
                  piVar1 = (int *)(*(long *)(lVar7 + 8) + 0x10);
                  *piVar1 = *piVar1 + -1;
                  FUN_10081e1a0(lVar7);
                  FUN_100885070(uVar12,iVar6 + -2);
                }
                iVar6 = iVar6 + -1;
              } while (1 < iVar6);
            }
            lVar7 = lVar13 + -0x20;
            lVar8 = *(long *)(lVar13 + -0x10);
            lVar16 = 0;
            if ((lVar8 != 0) && (lVar16 = lVar8, *(int *)(lVar8 + 0x10) == 0)) {
              if (*(long *)(lVar8 + 8) != 0) {
                piVar1 = (int *)(*(long *)(lVar8 + 8) + 0x10);
                *piVar1 = *piVar1 + -1;
              }
              FUN_10081e1a0();
              *(undefined8 *)(lVar13 + -0x10) = 0;
              lVar16 = 0;
            }
            lVar13 = lVar7;
          } while (lVar7 != *plVar9);
          if (lVar16 == 0) {
            FUN_1008cddd0(plVar9);
            if (*param_2 == 0) {
              return 1;
            }
            return 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar6 = (int)plVar9[1];
          lVar8 = lVar17;
        } while (iVar5 < iVar6);
      }
      lVar7 = *(long *)((long)iVar6 * 0x20 + -0x10 + lVar7);
      plVar11 = plVar9 + 3;
      plVar24 = plVar11;
      if (lVar7 != 0) {
        if (*plVar11 == 0) {
          lVar8 = FUN_1008cd860();
          *plVar11 = lVar8;
          if (lVar8 == 0) goto LAB_1008ce973;
LAB_1008ce676:
          iVar6 = FUN_1008852e0(lVar8,lVar7);
          if (iVar6 == 0) goto LAB_1008ce973;
        }
        else {
          iVar6 = FUN_100885160(*plVar11,lVar7);
          if (iVar6 == -1) {
            lVar8 = *plVar11;
            goto LAB_1008ce676;
          }
        }
        plVar24 = &local_38;
      }
      if (1 < (int)plVar9[1]) {
        lVar7 = *plVar9;
        iVar6 = 1;
        do {
          lVar8 = *(long *)(lVar7 + 0x10);
          if (lVar8 == 0) break;
          iVar5 = FUN_100885600(*(undefined8 *)(lVar7 + 0x28));
          iVar20 = 0;
          if (0 < iVar5) {
            do {
              lVar17 = FUN_100885620(*(undefined8 *)(lVar7 + 0x28),iVar20);
              if (*(long *)(lVar17 + 8) == lVar8) {
                if (*plVar24 == 0) {
                  lVar13 = FUN_1008cd860();
                  *plVar24 = lVar13;
                  if (lVar13 == 0) goto LAB_1008ce973;
                }
                else {
                  iVar5 = FUN_100885160(*plVar24,lVar17);
                  if (iVar5 != -1) goto LAB_1008ce725;
                  lVar13 = *plVar24;
                }
                iVar5 = FUN_1008852e0(lVar13,lVar17);
                if (iVar5 == 0) goto LAB_1008ce973;
              }
LAB_1008ce725:
              iVar20 = iVar20 + 1;
              iVar5 = FUN_100885600(*(undefined8 *)(lVar7 + 0x28));
            } while (iVar20 < iVar5);
          }
          lVar7 = lVar7 + 0x20;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)plVar9[1]);
      }
      if (plVar24 == &local_38) {
        local_48 = 2;
      }
      else {
        local_38 = *plVar11;
        local_48 = 1;
      }
      lVar7 = local_38;
      iVar6 = FUN_100885600(param_4);
      if (0 < iVar6) {
        plVar11 = *(long **)((long)(int)plVar9[1] * 0x20 + -0x10 + *plVar9);
        iVar6 = FUN_100885600(param_4);
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            uVar12 = FUN_100885620(param_4,iVar6);
            iVar5 = FUN_100821ab0(uVar12);
            if (iVar5 == 0x2ea) {
              *(byte *)(plVar9 + 5) = *(byte *)(plVar9 + 5) | 2;
              goto LAB_1008ce910;
            }
            iVar6 = iVar6 + 1;
            iVar5 = FUN_100885600(param_4);
          } while (iVar6 < iVar5);
        }
        iVar6 = FUN_100885600(param_4);
        if (0 < iVar6) {
          iVar6 = 0;
          if (plVar11 == (long *)0x0) {
            do {
              uVar12 = FUN_100885620(param_4,iVar6);
              lVar8 = FUN_1008cd8a0(lVar7,uVar12);
              if (lVar8 != 0) {
                lVar17 = plVar9[4];
                if (lVar17 == 0) {
                  lVar17 = FUN_100884e10();
                  plVar9[4] = lVar17;
                  if (lVar17 == 0) break;
                }
                iVar5 = FUN_1008852e0(lVar17,lVar8);
                if (iVar5 == 0) goto LAB_1008ce973;
              }
              iVar6 = iVar6 + 1;
              iVar5 = FUN_100885600(param_4);
            } while (iVar6 < iVar5);
          }
          else {
            do {
              uVar12 = FUN_100885620(param_4,iVar6);
              lVar8 = FUN_1008cd8a0(lVar7,uVar12);
              if (lVar8 == 0) {
                puVar18 = (undefined4 *)FUN_1008cdb70(0,uVar12,*(uint *)*plVar11 & 0x10);
                if (puVar18 == (undefined4 *)0x0) goto LAB_1008ce973;
                *(undefined8 *)(puVar18 + 4) = *(undefined8 *)(*plVar11 + 0x10);
                *puVar18 = 0xc;
                lVar8 = FUN_1008cd980(0,puVar18,plVar11[1],plVar9);
              }
              lVar17 = plVar9[4];
              if (lVar17 == 0) {
                lVar17 = FUN_100884e10();
                plVar9[4] = lVar17;
                if (lVar17 == 0) break;
              }
              iVar5 = FUN_1008852e0(lVar17,lVar8);
              if (iVar5 == 0) goto LAB_1008ce973;
              iVar6 = iVar6 + 1;
              iVar5 = FUN_100885600(param_4);
            } while (iVar6 < iVar5);
          }
        }
      }
LAB_1008ce910:
      if (local_48 == 2) {
        FUN_100884dd0(local_38);
      }
      *param_1 = plVar9;
      if (*param_2 != 0) {
        uVar12 = FUN_1008cea40(plVar9);
        iVar6 = FUN_100885600(uVar12);
        if (iVar6 < 1) {
          return 0xfffffffe;
        }
      }
LAB_1008ce94a:
      uVar4 = 1;
    }
    break;
  case 6:
    *param_2 = 1;
    uVar4 = 0xfffffffe;
    break;
  case -1:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

