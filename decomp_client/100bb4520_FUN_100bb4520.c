
long * FUN_100bb4520(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong *puVar19;
  code *pcVar20;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  long *local_48;
  long *local_40;
  
  FUN_100bb4190(param_4);
  plVar9 = (long *)FUN_100bb4250(param_4);
  plVar10 = (long *)FUN_100bb4250(param_4);
  plVar11 = (long *)FUN_100bb4250(param_4);
  plVar12 = (long *)FUN_100bb4250(param_4);
  local_40 = (long *)FUN_100bb4250(param_4);
  plVar13 = (long *)FUN_100bb4250(param_4);
  plVar14 = (long *)FUN_100bb4250(param_4);
  local_48 = (long *)0x0;
  if (plVar14 == (long *)0x0) goto LAB_100bb506c;
  plVar15 = param_1;
  if (param_1 == (long *)0x0) {
    plVar15 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    local_48 = (long *)0x0;
    if (plVar15 == (long *)0x0) goto LAB_100bb506c;
    *(undefined4 *)((long)plVar15 + 0x14) = 1;
    *(undefined4 *)(plVar15 + 2) = 0;
    plVar15[1] = 0;
    *plVar15 = 0;
  }
  if ((0 < *(int *)((long)plVar11 + 0xc)) || (lVar16 = FUN_100bac510(plVar11,1), lVar16 != 0)) {
    *(undefined4 *)(plVar11 + 2) = 0;
    *(undefined8 *)*plVar11 = 1;
    *(undefined4 *)(plVar11 + 1) = 1;
  }
  *(undefined4 *)(plVar13 + 1) = 0;
  *(undefined4 *)(plVar13 + 2) = 0;
  lVar16 = FUN_100bac3a0(plVar10,param_2);
  local_48 = (long *)0x0;
  if (lVar16 != 0) {
    lVar16 = FUN_100bac3a0(plVar9,param_3);
    local_48 = (long *)0x0;
    if (lVar16 != 0) {
      *(undefined4 *)(plVar9 + 2) = 0;
      if ((int)plVar10[2] == 0) {
        iVar7 = (int)plVar10[1];
        lVar16 = (long)iVar7;
        if (iVar7 == (int)plVar9[1]) {
          lVar18 = (long)(iVar7 + -1) * 8;
          puVar22 = (ulong *)(*plVar9 + lVar18);
          puVar19 = (ulong *)(lVar18 + *plVar10);
          do {
            if (lVar16 < 1) goto LAB_100bb46d0;
            uVar23 = *puVar22;
            lVar16 = lVar16 + -1;
            puVar22 = puVar22 + -1;
            uVar24 = *puVar19;
            puVar19 = puVar19 + -1;
          } while (uVar24 == uVar23);
          if (uVar23 <= uVar24) goto LAB_100bb46d0;
        }
        else if ((int)plVar9[1] <= iVar7) goto LAB_100bb46d0;
      }
      else {
LAB_100bb46d0:
        local_48 = (long *)0x0;
        iVar7 = FUN_100bb54a0(0,plVar10,plVar10,plVar9,param_4);
        if (iVar7 == 0) goto LAB_100bb5023;
        if ((int)plVar10[2] != 0) {
          if ((int)plVar9[2] == 0) {
            pcVar20 = FUN_100bb66e0;
          }
          else {
            pcVar20 = FUN_100bb6450;
          }
          iVar7 = (*pcVar20)(plVar10,plVar10,plVar9);
          local_48 = (long *)0x0;
          if (iVar7 == 0) goto LAB_100bb5023;
        }
      }
      iVar7 = (int)param_3[1];
      if ((((long)iVar7 < 1) || ((*(byte *)*param_3 & 1) == 0)) ||
         (iVar3 = FUN_100bac6c0(*(undefined8 *)((byte *)*param_3 + (long)iVar7 * 8 + -8)),
         0x800 < iVar3 + (iVar7 + -1) * 0x40)) {
        iVar7 = (int)plVar10[1];
        if (iVar7 == 0) goto LAB_100bb4f11;
        iVar3 = -1;
        do {
          iVar26 = iVar3;
          plVar25 = plVar13;
          plVar13 = plVar11;
          plVar11 = plVar9;
          plVar9 = plVar10;
          local_48 = (long *)0x0;
          iVar3 = (int)plVar11[1];
          iVar4 = iVar3 + -1;
          iVar5 = 0;
          if ((long)iVar3 != 0) {
            iVar5 = FUN_100bac6c0(*(undefined8 *)(*plVar11 + -8 + (long)iVar3 * 8));
            iVar5 = iVar5 + iVar4 * 0x40;
          }
          iVar7 = iVar7 + -1;
          iVar6 = FUN_100bac6c0(*(undefined8 *)(*plVar9 + (long)iVar7 * 8));
          if (iVar5 == iVar6 + iVar7 * 0x40) {
            iVar7 = *(int *)((long)plVar12 + 0xc);
joined_r0x000100bb4ba5:
            if ((iVar7 < 1) && (lVar16 = FUN_100bac510(plVar12,1), lVar16 == 0)) goto LAB_100bb5023;
            *(undefined4 *)(plVar12 + 2) = 0;
            *(undefined8 *)*plVar12 = 1;
            *(undefined4 *)(plVar12 + 1) = 1;
            plVar10 = plVar11;
LAB_100bb4bdc:
            iVar7 = FUN_100bb6450(local_40,plVar10,plVar9);
LAB_100bb4be5:
            if (iVar7 == 0) goto LAB_100bb5023;
            if ((int)plVar12[1] == 1) goto LAB_100bb4880;
            iVar7 = FUN_100bb67a0(plVar11,plVar12,plVar13,param_4);
LAB_100bb47bb:
            local_48 = (long *)0x0;
            plVar10 = plVar11;
            if (iVar7 == 0) goto LAB_100bb5023;
          }
          else {
            iVar5 = 0;
            if (iVar3 != 0) {
              iVar5 = FUN_100bac6c0(*(undefined8 *)(*plVar11 + (long)iVar4 * 8));
              iVar5 = iVar5 + iVar4 * 0x40;
            }
            iVar3 = FUN_100bac6c0(*(undefined8 *)(*plVar9 + (long)iVar7 * 8));
            if (iVar5 != iVar3 + 1 + iVar7 * 0x40) {
              iVar7 = FUN_100bb54a0(plVar12,local_40,plVar11,plVar9,param_4);
              goto LAB_100bb4be5;
            }
            iVar7 = FUN_100bb6570(plVar14,plVar9);
            if (iVar7 == 0) goto LAB_100bb5023;
            iVar7 = (int)plVar11[1];
            lVar16 = (long)iVar7;
            if (iVar7 == (int)plVar14[1]) {
              lVar18 = (long)(iVar7 + -1) * 8;
              puVar22 = (ulong *)(*plVar14 + lVar18);
              puVar19 = (ulong *)(lVar18 + *plVar11);
              do {
                if (lVar16 < 1) goto LAB_100bb47c8;
                uVar23 = *puVar22;
                lVar16 = lVar16 + -1;
                puVar22 = puVar22 + -1;
                uVar24 = *puVar19;
                puVar19 = puVar19 + -1;
              } while (uVar24 == uVar23);
              if (uVar24 <= uVar23) {
LAB_100bb4ba1:
                iVar7 = *(int *)((long)plVar12 + 0xc);
                goto joined_r0x000100bb4ba5;
              }
            }
            else if (iVar7 < (int)plVar14[1]) goto LAB_100bb4ba1;
LAB_100bb47c8:
            iVar7 = FUN_100bb6450(local_40,plVar11);
            if ((iVar7 == 0) || (iVar7 = FUN_100bb66e0(plVar12,plVar14,plVar9), iVar7 == 0))
            goto LAB_100bb5023;
            iVar7 = (int)plVar11[1];
            lVar16 = (long)iVar7;
            if (iVar7 == (int)plVar12[1]) {
              lVar18 = (long)(iVar7 + -1) * 8;
              puVar22 = (ulong *)(*plVar12 + lVar18);
              puVar19 = (ulong *)(lVar18 + *plVar11);
              do {
                if (lVar16 < 1) goto LAB_100bb4954;
                uVar23 = *puVar22;
                lVar16 = lVar16 + -1;
                puVar22 = puVar22 + -1;
                uVar24 = *puVar19;
                puVar19 = puVar19 + -1;
              } while (uVar24 == uVar23);
              if (uVar23 < uVar24) {
LAB_100bb4954:
                if ((0 < *(int *)((long)plVar12 + 0xc)) ||
                   (lVar16 = FUN_100bac510(plVar12,1), lVar16 != 0)) {
                  *(undefined4 *)(plVar12 + 2) = 0;
                  *(undefined8 *)*plVar12 = 3;
                  *(undefined4 *)(plVar12 + 1) = 1;
                  plVar10 = local_40;
                  goto LAB_100bb4bdc;
                }
                goto LAB_100bb5023;
              }
            }
            else if ((int)plVar12[1] <= iVar7) goto LAB_100bb4954;
            if ((*(int *)((long)plVar12 + 0xc) < 1) &&
               (lVar16 = FUN_100bac510(plVar12,1), lVar16 == 0)) goto LAB_100bb5023;
            *(undefined4 *)(plVar12 + 2) = 0;
            *(undefined8 *)*plVar12 = 2;
            *(undefined4 *)(plVar12 + 1) = 1;
LAB_100bb4880:
            local_48 = (long *)0x0;
            lVar16 = *(long *)*plVar12;
            if (lVar16 == 4) {
              if ((int)plVar12[2] != 0) goto LAB_100bb48d3;
              iVar7 = FUN_100bb5160(plVar11,plVar13,2);
              goto LAB_100bb47bb;
            }
            if (lVar16 == 2) {
              if ((int)plVar12[2] == 0) {
                iVar7 = FUN_100bb6570(plVar11,plVar13);
                goto LAB_100bb47bb;
              }
LAB_100bb48d3:
              lVar16 = FUN_100bac3a0(plVar11,plVar13);
              if (lVar16 == 0) goto LAB_100bb5023;
              plVar10 = plVar11;
              if ((int)plVar11[1] != 0) {
                if (*(long *)*plVar12 == 0) {
                  *(undefined4 *)(plVar11 + 1) = 0;
                  *(undefined4 *)(plVar11 + 2) = 0;
                }
                else {
                  lVar16 = FUN_100bb6ca0(*plVar11,*plVar11);
                  if (lVar16 != 0) {
                    iVar7 = (int)plVar11[1];
                    if (*(int *)((long)plVar11 + 0xc) <= iVar7) {
                      lVar18 = FUN_100bac510(plVar11,iVar7 + 1);
                      if (lVar18 == 0) goto LAB_100bb5023;
                      iVar7 = (int)plVar11[1];
                    }
                    *(int *)(plVar11 + 1) = iVar7 + 1;
                    *(long *)(*plVar11 + (long)iVar7 * 8) = lVar16;
                  }
                }
              }
            }
            else if ((lVar16 != 1) || (plVar10 = plVar13, (int)plVar12[2] != 0)) goto LAB_100bb48d3;
          }
          local_48 = (long *)0x0;
          iVar7 = FUN_100bb66e0(plVar11,plVar10,plVar25);
          if (iVar7 == 0) goto LAB_100bb5023;
          iVar7 = (int)local_40[1];
          plVar10 = local_40;
          iVar3 = -iVar26;
          local_40 = plVar25;
        } while (iVar7 != 0);
        if (0 < iVar26) goto LAB_100bb4f11;
      }
      else {
        if ((int)plVar10[1] != 0) {
          uVar23 = 0;
LAB_100bb4c04:
          do {
            iVar3 = (int)uVar23;
            iVar7 = (int)(((uint)(iVar3 >> 0x1f) >> 0x1a) + iVar3) >> 6;
            if (((int)plVar10[1] <= iVar7) ||
               ((*(ulong *)(*plVar10 + (long)iVar7 * 8) >> (uVar23 & 0x3f) & 1) == 0)) {
              uVar23 = (ulong)(iVar3 + 1);
              iVar7 = (int)plVar11[1];
              if (iVar7 < 1) {
LAB_100bb4d96:
                if (iVar7 == 0) {
                  *(undefined4 *)(plVar11 + 1) = 0;
                  *(undefined4 *)(plVar11 + 2) = 0;
                  goto LAB_100bb4c04;
                }
                if (iVar7 < 1) goto LAB_100bb4c04;
              }
              else if ((*(byte *)*plVar11 & 1) != 0) {
                iVar7 = FUN_100bb5b30(plVar11,plVar11,param_3);
                local_48 = (long *)0x0;
                if (iVar7 != 0) {
                  iVar7 = (int)plVar11[1];
                  goto LAB_100bb4d96;
                }
                goto LAB_100bb5023;
              }
              lVar16 = *plVar11;
              lVar18 = (long)iVar7 + 1;
              uVar24 = 0;
              do {
                uVar2 = *(ulong *)(lVar16 + -0x10 + lVar18 * 8);
                *(ulong *)(lVar16 + -0x10 + lVar18 * 8) = uVar2 >> 1 | uVar24;
                uVar24 = uVar2 << 0x3f;
                lVar18 = lVar18 + -1;
              } while (1 < lVar18);
              plVar12 = (long *)(lVar16 + (long)(iVar7 + -1) * 8);
              iVar7 = iVar7 + 1;
              do {
                if (*plVar12 != 0) break;
                plVar12 = plVar12 + -1;
                *(int *)(plVar11 + 1) = iVar7 + -2;
                iVar7 = iVar7 + -1;
              } while (1 < iVar7);
              goto LAB_100bb4c04;
            }
            uVar24 = 0;
            if (0 < iVar3) {
              iVar7 = FUN_100bb5e40(plVar10,plVar10,uVar23);
              uVar24 = 0;
              local_48 = (long *)0x0;
              if (iVar7 == 0) goto LAB_100bb5023;
            }
LAB_100bb4c70:
            iVar26 = (int)uVar24;
            iVar3 = (int)(((uint)(iVar26 >> 0x1f) >> 0x1a) + iVar26) >> 6;
            iVar7 = (int)plVar9[1];
            if ((iVar7 <= iVar3) ||
               ((*(ulong *)(*plVar9 + (long)iVar3 * 8) >> (uVar24 & 0x3f) & 1) == 0)) {
              uVar24 = (ulong)(iVar26 + 1);
              iVar7 = (int)plVar13[1];
              if (iVar7 < 1) {
LAB_100bb4cd2:
                if (iVar7 == 0) {
                  *(undefined4 *)(plVar13 + 1) = 0;
                  *(undefined4 *)(plVar13 + 2) = 0;
                }
                else if (0 < iVar7) goto LAB_100bb4cd8;
              }
              else {
                if ((*(byte *)*plVar13 & 1) != 0) {
                  iVar7 = FUN_100bb5b30(plVar13,plVar13,param_3);
                  local_48 = (long *)0x0;
                  if (iVar7 != 0) {
                    iVar7 = (int)plVar13[1];
                    goto LAB_100bb4cd2;
                  }
                  goto LAB_100bb5023;
                }
LAB_100bb4cd8:
                lVar16 = *plVar13;
                lVar18 = (long)iVar7 + 1;
                uVar23 = 0;
                do {
                  uVar2 = *(ulong *)(lVar16 + -0x10 + lVar18 * 8);
                  *(ulong *)(lVar16 + -0x10 + lVar18 * 8) = uVar2 >> 1 | uVar23;
                  uVar23 = uVar2 << 0x3f;
                  lVar18 = lVar18 + -1;
                } while (1 < lVar18);
                plVar12 = (long *)(lVar16 + (long)(iVar7 + -1) * 8);
                iVar7 = iVar7 + 1;
                do {
                  if (*plVar12 != 0) break;
                  plVar12 = plVar12 + -1;
                  *(int *)(plVar13 + 1) = iVar7 + -2;
                  iVar7 = iVar7 + -1;
                } while (1 < iVar7);
              }
              goto LAB_100bb4c70;
            }
            if (0 < iVar26) {
              iVar7 = FUN_100bb5e40(plVar9,plVar9,uVar24);
              local_48 = (long *)0x0;
              if (iVar7 == 0) goto LAB_100bb5023;
              iVar7 = (int)plVar9[1];
            }
            if ((int)plVar10[1] == iVar7) {
              lVar16 = (long)iVar7;
              lVar18 = (long)(iVar7 + -1) * 8;
              puVar22 = (ulong *)(*plVar9 + lVar18);
              puVar19 = (ulong *)(lVar18 + *plVar10);
              do {
                if (lVar16 < 1) goto LAB_100bb4eb2;
                uVar23 = *puVar22;
                lVar16 = lVar16 + -1;
                puVar22 = puVar22 + -1;
                uVar24 = *puVar19;
                puVar19 = puVar19 + -1;
              } while (uVar24 == uVar23);
              if (uVar23 <= uVar24) goto LAB_100bb4eb2;
LAB_100bb4e85:
              iVar7 = FUN_100bb5b30(plVar13,plVar13,plVar11);
              plVar12 = plVar9;
              plVar14 = plVar10;
            }
            else {
              if ((int)plVar10[1] < iVar7) goto LAB_100bb4e85;
LAB_100bb4eb2:
              iVar7 = FUN_100bb5b30(plVar11,plVar11,plVar13);
              plVar12 = plVar10;
              plVar14 = plVar9;
            }
            local_48 = (long *)0x0;
            if (iVar7 == 0) goto LAB_100bb5023;
            iVar7 = FUN_100bb61f0(plVar12,plVar12,plVar14);
            local_48 = (long *)0x0;
            if (iVar7 == 0) goto LAB_100bb5023;
            uVar23 = 0;
          } while ((int)plVar10[1] != 0);
        }
LAB_100bb4f11:
        iVar7 = FUN_100bb6450(plVar13,param_3,plVar13);
        local_48 = (long *)0x0;
        if (iVar7 == 0) goto LAB_100bb5023;
      }
      local_48 = (long *)0x0;
      if ((((int)plVar9[1] == 1) && (local_48 = (long *)0x0, *(long *)*plVar9 == 1)) &&
         (local_48 = (long *)0x0, (int)plVar9[2] == 0)) {
        if ((int)plVar13[2] == 0) {
          iVar7 = (int)plVar13[1];
          lVar16 = (long)iVar7;
          if (iVar7 == (int)param_3[1]) {
            lVar18 = (long)(iVar7 + -1) * 8;
            puVar22 = (ulong *)(*param_3 + lVar18);
            puVar19 = (ulong *)(lVar18 + *plVar13);
            do {
              if (lVar16 < 1) goto LAB_100bb4fc7;
              uVar23 = *puVar22;
              lVar16 = lVar16 + -1;
              puVar22 = puVar22 + -1;
              uVar24 = *puVar19;
              puVar19 = puVar19 + -1;
            } while (uVar24 == uVar23);
            if (uVar23 < uVar24) goto LAB_100bb4fc7;
          }
          else if ((int)param_3[1] <= iVar7) goto LAB_100bb4fc7;
          lVar16 = FUN_100bac3a0(plVar15,plVar13);
          local_48 = (long *)0x0;
          if (lVar16 != 0) goto LAB_100bb501b;
        }
        else {
LAB_100bb4fc7:
          local_48 = (long *)0x0;
          iVar7 = FUN_100bb54a0(0,plVar15,plVar13,param_3,param_4);
          if (iVar7 != 0) {
            if ((int)plVar15[2] != 0) {
              if ((int)param_3[2] == 0) {
                pcVar20 = FUN_100bb66e0;
              }
              else {
                pcVar20 = FUN_100bb6450;
              }
              iVar7 = (*pcVar20)(plVar15,plVar15);
              local_48 = (long *)0x0;
              if (iVar7 == 0) goto LAB_100bb5023;
            }
LAB_100bb501b:
            local_48 = plVar15;
          }
        }
      }
    }
  }
LAB_100bb5023:
  if (((plVar15 != (long *)0x0) && (param_1 == (long *)0x0)) && (local_48 == (long *)0x0)) {
    if ((*plVar15 != 0) && ((*(byte *)((long)plVar15 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)((long)plVar15 + 0x14) & 1) == 0) {
      *plVar15 = 0;
    }
    else {
      FUN_100bf3910(plVar15);
    }
  }
LAB_100bb506c:
  if (*(int *)(param_4 + 0x34) == 0) {
    uVar8 = *(int *)(param_4 + 0x28) - 1;
    *(uint *)(param_4 + 0x28) = uVar8;
    uVar8 = *(uint *)(*(long *)(param_4 + 0x20) + (ulong)uVar8 * 4);
    uVar1 = *(uint *)(param_4 + 0x30);
    if (uVar8 <= uVar1 && uVar1 - uVar8 != 0) {
      iVar7 = *(int *)(param_4 + 0x18);
      uVar17 = uVar1 - uVar8;
      *(uint *)(param_4 + 0x18) = iVar7 - (uVar1 - uVar8);
      if (uVar17 != 0) {
        uVar21 = iVar7 + 0xfU & 0xf;
        if ((uVar17 & 1) != 0) {
          if (uVar21 == 0) {
            *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x180);
            uVar21 = 0xf;
          }
          else {
            uVar21 = uVar21 - 1;
          }
          uVar17 = uVar17 - 1;
        }
        if (uVar1 - 1 != uVar8) {
          do {
            if (uVar21 == 0) {
              *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x180);
              iVar7 = 0xf;
            }
            else {
              iVar7 = uVar21 - 1;
            }
            uVar17 = uVar17 - 2;
            if (iVar7 == 0) {
              *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x180);
              uVar21 = 0xf;
            }
            else {
              uVar21 = iVar7 - 1;
            }
          } while (uVar17 != 0);
        }
      }
    }
    *(uint *)(param_4 + 0x30) = uVar8;
    *(undefined4 *)(param_4 + 0x38) = 0;
  }
  else {
    *(int *)(param_4 + 0x34) = *(int *)(param_4 + 0x34) + -1;
  }
  return local_48;
}

