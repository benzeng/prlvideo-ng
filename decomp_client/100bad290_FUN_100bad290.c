
int FUN_100bad290(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  ulong *puVar2;
  byte *pbVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  bool bVar19;
  
  lVar11 = param_1[0x1a];
  if (lVar11 != 0) {
    if ((*(long *)(lVar11 + 8) != 0) && ((*(byte *)(lVar11 + 0x1c) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar11 + 0x1c) & 1) == 0) {
      *(undefined8 *)(lVar11 + 8) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(lVar11 + 0x20) != 0) && ((*(byte *)(lVar11 + 0x34) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar11 + 0x34) & 1) == 0) {
      *(undefined8 *)(lVar11 + 0x20) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(lVar11 + 0x38) != 0) && ((*(byte *)(lVar11 + 0x4c) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar11 + 0x4c) & 1) == 0) {
      *(undefined8 *)(lVar11 + 0x38) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar11 + 0x58) & 1) != 0) {
      FUN_100bf3910(lVar11);
    }
    param_1[0x1a] = 0;
  }
  plVar10 = (long *)param_1[0x1b];
  if (plVar10 != (long *)0x0) {
    if ((*plVar10 != 0) && ((*(byte *)((long)plVar10 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)((long)plVar10 + 0x14) & 1) == 0) {
      *plVar10 = 0;
    }
    else {
      FUN_100bf3910(plVar10);
    }
    param_1[0x1b] = 0;
  }
  puVar17 = (undefined8 *)0x0;
  if (param_5 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)FUN_100bf3540(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar17 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)(puVar17 + 7) = 0;
    puVar17[6] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    param_5 = puVar17;
  }
  iVar6 = 0;
  iVar18 = 0;
  puVar8 = (undefined4 *)FUN_100bf3540(0x60,"../src/snlic/sn_crypto_helper_17.c",0x101);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
    goto LAB_100bad88f;
  }
  *puVar8 = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  *(undefined8 *)(puVar8 + 0xc) = 0;
  *(undefined8 *)(puVar8 + 10) = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  *(undefined8 *)(puVar8 + 0x12) = 0;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0xe) = 0;
  puVar8[0x16] = 1;
  iVar5 = FUN_100bb3c30(puVar8,param_2,param_5);
  iVar18 = iVar6;
  if ((iVar5 == 0) ||
     (puVar9 = (undefined8 *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136),
     puVar9 == (undefined8 *)0x0)) goto LAB_100bad88f;
  *(undefined4 *)((long)puVar9 + 0x14) = 1;
  *(undefined4 *)(puVar9 + 2) = 0;
  puVar9[1] = 0;
  *puVar9 = 0;
  iVar6 = FUN_100bb4020(puVar9,&PTR_DAT_102300338,puVar8 + 2,puVar8,param_5);
  if (iVar6 == 0) goto LAB_100bad88f;
  param_1[0x1a] = (long)puVar8;
  param_1[0x1b] = (long)puVar9;
  iVar18 = *(int *)(param_2 + 1);
  if ((long)iVar18 != 0) {
    pbVar3 = (byte *)*param_2;
    iVar6 = FUN_100bac6c0(*(undefined8 *)(pbVar3 + (long)iVar18 * 8 + -8));
    if (((0 < iVar18) && (2 < iVar6 + (iVar18 + -1) * 0x40)) && ((*pbVar3 & 1) != 0)) {
      FUN_100bb4190(param_5);
      plVar10 = (long *)FUN_100bb4250(param_5);
      iVar18 = 0;
      if (plVar10 != (long *)0x0) {
        lVar11 = FUN_100bac3a0(param_1 + 0xd,param_2);
        if (lVar11 != 0) {
          *(undefined4 *)(param_1 + 0xf) = 0;
          iVar18 = 0;
          iVar6 = FUN_100bb54a0(0,plVar10,param_3,param_2,param_5);
          if (iVar6 != 0) {
            if ((int)plVar10[2] != 0) {
              if (*(int *)(param_2 + 2) == 0) {
                pcVar13 = FUN_100bb66e0;
              }
              else {
                pcVar13 = FUN_100bb6450;
              }
              iVar6 = (*pcVar13)(plVar10,plVar10,param_2);
              if (iVar6 == 0) goto LAB_100bad5fd;
            }
            if (*(code **)(*param_1 + 0x118) == (code *)0x0) {
              lVar11 = FUN_100bac3a0(param_1 + 0x13,plVar10);
              bVar19 = lVar11 == 0;
            }
            else {
              iVar6 = (**(code **)(*param_1 + 0x118))(param_1,param_1 + 0x13,plVar10,param_5);
              bVar19 = iVar6 == 0;
            }
            if (!bVar19) {
              plVar1 = param_1 + 0x16;
              iVar18 = 0;
              iVar6 = FUN_100bb54a0(0,plVar1,param_4);
              if (iVar6 != 0) {
                if ((int)param_1[0x18] != 0) {
                  if (*(int *)(param_2 + 2) == 0) {
                    pcVar13 = FUN_100bb66e0;
                  }
                  else {
                    pcVar13 = FUN_100bb6450;
                  }
                  iVar6 = (*pcVar13)(plVar1,plVar1,param_2);
                  if (iVar6 == 0) goto LAB_100bad5fd;
                }
                if (((*(code **)(*param_1 + 0x118) == (code *)0x0) ||
                    (iVar6 = (**(code **)(*param_1 + 0x118))(param_1,plVar1,plVar1,param_5),
                    iVar6 != 0)) && (iVar6 = FUN_100bb8c20(plVar10,3), iVar6 != 0)) {
                  iVar18 = (int)plVar10[2];
                  uVar7 = ~-(uint)(iVar18 == 0) | 1;
                  uVar16 = uVar7;
                  if (iVar18 == (int)param_1[0xf]) {
                    iVar6 = (int)plVar10[1];
                    lVar11 = (long)iVar6;
                    if ((iVar6 <= (int)param_1[0xe]) &&
                       (uVar12 = -(uint)(iVar18 == 0) | 1, uVar16 = uVar12,
                       (int)param_1[0xe] <= iVar6)) {
                      lVar15 = (long)(iVar6 + -1) << 3;
                      do {
                        uVar16 = 0;
                        if (lVar11 < 1) break;
                        puVar2 = (ulong *)(*plVar10 + lVar15);
                        uVar4 = *(ulong *)(param_1[0xd] + lVar15);
                        uVar16 = uVar7;
                        if (uVar4 < *puVar2) break;
                        lVar11 = lVar11 + -1;
                        lVar15 = lVar15 + -8;
                        uVar16 = uVar12;
                      } while (uVar4 <= *puVar2);
                    }
                  }
                  *(uint *)(param_1 + 0x19) = (uint)(uVar16 == 0);
                  iVar18 = 1;
                }
              }
            }
          }
        }
      }
LAB_100bad5fd:
      if (*(int *)((long)param_5 + 0x34) == 0) {
        iVar6 = *(int *)(param_5 + 5);
        *(uint *)(param_5 + 5) = iVar6 - 1U;
        uVar16 = *(uint *)(param_5[4] + (ulong)(iVar6 - 1U) * 4);
        uVar7 = *(uint *)(param_5 + 6);
        if (uVar16 <= uVar7 && uVar7 - uVar16 != 0) {
          iVar6 = *(int *)(param_5 + 3);
          uVar12 = uVar7 - uVar16;
          *(uint *)(param_5 + 3) = iVar6 - (uVar7 - uVar16);
          if (uVar12 != 0) {
            uVar14 = iVar6 + 0xfU & 0xf;
            if ((uVar12 & 1) != 0) {
              if (uVar14 == 0) {
                param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
                uVar14 = 0xf;
              }
              else {
                uVar14 = uVar14 - 1;
              }
              uVar12 = uVar12 - 1;
            }
            if (uVar7 - 1 != uVar16) {
              do {
                if (uVar14 == 0) {
                  param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
                  iVar6 = 0xf;
                }
                else {
                  iVar6 = uVar14 - 1;
                }
                uVar12 = uVar12 - 2;
                if (iVar6 == 0) {
                  param_5[1] = *(undefined8 *)(param_5[1] + 0x180);
                  uVar14 = 0xf;
                }
                else {
                  uVar14 = iVar6 - 1;
                }
              } while (uVar12 != 0);
            }
          }
        }
        *(uint *)(param_5 + 6) = uVar16;
        *(undefined4 *)(param_5 + 7) = 0;
      }
      else {
        *(int *)((long)param_5 + 0x34) = *(int *)((long)param_5 + 0x34) + -1;
      }
      puVar8 = (undefined4 *)0x0;
      if (iVar18 != 0) goto LAB_100bad88f;
      puVar8 = (undefined4 *)param_1[0x1a];
    }
  }
  if (puVar8 != (undefined4 *)0x0) {
    if ((*(long *)(puVar8 + 2) != 0) && ((*(byte *)(puVar8 + 7) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(puVar8 + 7) & 1) == 0) {
      *(undefined8 *)(puVar8 + 2) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(puVar8 + 8) != 0) && ((*(byte *)(puVar8 + 0xd) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(puVar8 + 0xd) & 1) == 0) {
      *(undefined8 *)(puVar8 + 8) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(puVar8 + 0xe) != 0) && ((*(byte *)(puVar8 + 0x13) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(puVar8 + 0x13) & 1) == 0) {
      *(undefined8 *)(puVar8 + 0xe) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(byte *)(puVar8 + 0x16) & 1) != 0) {
      FUN_100bf3910(puVar8);
    }
  }
  param_1[0x1a] = 0;
  plVar10 = (long *)param_1[0x1b];
  if (plVar10 != (long *)0x0) {
    if ((*plVar10 != 0) && ((*(byte *)((long)plVar10 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)((long)plVar10 + 0x14) & 1) == 0) {
      *plVar10 = 0;
    }
    else {
      FUN_100bf3910(plVar10);
    }
  }
  param_1[0x1b] = 0;
  puVar8 = (undefined4 *)0x0;
  iVar18 = 0;
LAB_100bad88f:
  if (puVar17 != (undefined8 *)0x0) {
    FUN_100ba8db0(puVar17);
  }
  if (puVar8 != (undefined4 *)0x0) {
    if ((*(long *)(puVar8 + 2) != 0) && ((*(byte *)(puVar8 + 7) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(puVar8 + 7) & 1) == 0) {
      *(undefined8 *)(puVar8 + 2) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(puVar8 + 8) != 0) && ((*(byte *)(puVar8 + 0xd) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(puVar8 + 0xd) & 1) == 0) {
      *(undefined8 *)(puVar8 + 8) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(puVar8 + 0xe) != 0) && ((*(byte *)(puVar8 + 0x13) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(puVar8 + 0x13) & 1) == 0) {
      *(undefined8 *)(puVar8 + 0xe) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(byte *)(puVar8 + 0x16) & 1) != 0) {
      FUN_100bf3910(puVar8);
    }
  }
  return iVar18;
}

