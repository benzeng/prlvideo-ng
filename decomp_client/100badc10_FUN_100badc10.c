
undefined8 FUN_100badc10(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  code *pcVar12;
  uint uVar13;
  undefined8 uVar14;
  
  puVar5 = (undefined8 *)0x0;
  if (param_2 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_100bf3540(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)(puVar5 + 7) = 0;
    puVar5[6] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    param_2 = puVar5;
  }
  uVar14 = 0;
  FUN_100bb4190(param_2);
  lVar6 = FUN_100bb4250(param_2);
  lVar7 = FUN_100bb4250(param_2);
  uVar8 = FUN_100bb4250(param_2);
  plVar9 = (long *)FUN_100bb4250(param_2);
  lVar10 = FUN_100bb4250(param_2);
  if (lVar10 != 0) {
    if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
      lVar10 = FUN_100bac3a0(lVar6,param_1 + 0x13);
      if ((lVar10 != 0) && (lVar10 = FUN_100bac3a0(lVar7,param_1 + 0x16), lVar10 != 0))
      goto LAB_100badd5d;
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x120))(param_1,lVar6,param_1 + 0x13,param_2);
      if ((iVar4 != 0) &&
         (iVar4 = (**(code **)(*param_1 + 0x120))(param_1,lVar7,param_1 + 0x16), iVar4 != 0)) {
LAB_100badd5d:
        if (*(int *)(lVar6 + 8) == 0) {
          if (*(int *)(lVar7 + 8) != 0) goto LAB_100badf0e;
        }
        else {
          if (*(int *)(lVar7 + 8) == 0) {
LAB_100badf0e:
            uVar14 = 1;
          }
          else {
            iVar4 = FUN_100bb8d30(uVar8,lVar6,param_2);
            uVar14 = 0;
            if (iVar4 != 0) {
              plVar1 = param_1 + 0xd;
              uVar14 = 0;
              iVar4 = FUN_100bb54a0(0,uVar8,uVar8,plVar1,param_2);
              if ((((iVar4 != 0) &&
                   (iVar4 = FUN_100bba3e0(plVar9,uVar8,lVar6,plVar1,param_2), iVar4 != 0)) &&
                  (iVar4 = FUN_100bb5160(uVar8,plVar9,2), iVar4 != 0)) &&
                 (iVar4 = FUN_100bb8d30(plVar9,lVar7,param_2), iVar4 != 0)) {
                uVar14 = 0;
                iVar4 = FUN_100bb54a0(0,plVar9,plVar9,plVar1,param_2);
                if (iVar4 != 0) {
                  if (((int)plVar9[1] != 0) &&
                     (lVar7 = FUN_100bb6ca0(*plVar9,*plVar9,(int)plVar9[1],0x1b), lVar7 != 0)) {
                    iVar4 = (int)plVar9[1];
                    if (*(int *)((long)plVar9 + 0xc) <= iVar4) {
                      lVar10 = FUN_100bac510(plVar9,iVar4 + 1);
                      if (lVar10 == 0) goto LAB_100badf17;
                      iVar4 = (int)plVar9[1];
                    }
                    *(int *)(plVar9 + 1) = iVar4 + 1;
                    *(long *)(*plVar9 + (long)iVar4 * 8) = lVar7;
                  }
                  iVar4 = FUN_100bb66e0(lVar6,uVar8,plVar9);
                  if (iVar4 != 0) {
                    iVar4 = FUN_100bb54a0(0,lVar6,lVar6,plVar1,param_2);
                    if (iVar4 == 0) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = 0;
                      if (*(int *)(lVar6 + 0x10) != 0) {
                        if ((int)param_1[0xf] == 0) {
                          pcVar12 = FUN_100bb66e0;
                        }
                        else {
                          pcVar12 = FUN_100bb6450;
                        }
                        iVar4 = (*pcVar12)(lVar6,lVar6,plVar1);
                        if (iVar4 == 0) goto LAB_100badf17;
                      }
                      if (*(int *)(lVar6 + 8) != 0) goto LAB_100badf0e;
                    }
                  }
                }
              }
            }
          }
LAB_100badf17:
          if (param_2 == (undefined8 *)0x0) goto LAB_100badff2;
        }
      }
    }
  }
  if (*(int *)((long)param_2 + 0x34) == 0) {
    iVar4 = *(int *)(param_2 + 5);
    *(uint *)(param_2 + 5) = iVar4 - 1U;
    uVar2 = *(uint *)(param_2[4] + (ulong)(iVar4 - 1U) * 4);
    uVar3 = *(uint *)(param_2 + 6);
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      iVar4 = *(int *)(param_2 + 3);
      uVar11 = uVar3 - uVar2;
      *(uint *)(param_2 + 3) = iVar4 - (uVar3 - uVar2);
      if (uVar11 != 0) {
        uVar13 = iVar4 + 0xfU & 0xf;
        if ((uVar11 & 1) != 0) {
          if (uVar13 == 0) {
            param_2[1] = *(undefined8 *)(param_2[1] + 0x180);
            uVar13 = 0xf;
          }
          else {
            uVar13 = uVar13 - 1;
          }
          uVar11 = uVar11 - 1;
        }
        if (uVar3 - 1 != uVar2) {
          do {
            if (uVar13 == 0) {
              param_2[1] = *(undefined8 *)(param_2[1] + 0x180);
              iVar4 = 0xf;
            }
            else {
              iVar4 = uVar13 - 1;
            }
            uVar11 = uVar11 - 2;
            if (iVar4 == 0) {
              param_2[1] = *(undefined8 *)(param_2[1] + 0x180);
              uVar13 = 0xf;
            }
            else {
              uVar13 = iVar4 - 1;
            }
          } while (uVar11 != 0);
        }
      }
    }
    *(uint *)(param_2 + 6) = uVar2;
    *(undefined4 *)(param_2 + 7) = 0;
  }
  else {
    *(int *)((long)param_2 + 0x34) = *(int *)((long)param_2 + 0x34) + -1;
  }
LAB_100badff2:
  if (puVar5 != (undefined8 *)0x0) {
    FUN_100ba8db0();
  }
  return uVar14;
}

