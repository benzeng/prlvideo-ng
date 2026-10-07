
int FUN_1006905d0(long *param_1,code *param_2,long *param_3,undefined8 param_4,long *param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  void *pvVar13;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  int iVar20;
  long *plVar21;
  bool bVar22;
  char *in_stack_ffffffffffffff50;
  undefined4 uVar23;
  long local_70;
  undefined4 local_44;
  long local_40;
  long local_38;
  ulong uVar14;
  
  uVar12 = FUN_100697940(param_1[4]);
  local_44 = 0;
  uVar1 = *(uint *)(param_3 + 2);
  if (param_2 == (code *)0x0) {
    in_stack_ffffffffffffff50 = "CopyBlocks";
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","CompareCb","DiskImageComp.cpp",
                  0xacc,"CopyBlocks");
  }
  if ((uVar1 == 0) || (param_5[2] == 0)) {
    iVar20 = 0;
    FUN_1008e3970("","dimg",0,"Info: no any free or used blocks in the image");
  }
  else {
    pvVar13 = _valloc(uVar12 & 0xffffffff);
    if (pvVar13 == (void *)0x0) {
      FUN_1008e3970("","dimg",0,"Error allocating memory to copy block");
      iVar20 = -0x7ffffffe;
    }
    else {
      plVar21 = (long *)*param_5;
      iVar20 = 0;
      if (plVar21 != param_5 + 1) {
        plVar3 = (long *)*param_3;
        param_3 = param_3 + 1;
        iVar20 = 0;
        if (param_3 != plVar3) {
          iVar20 = 0;
          local_70 = 0;
          iVar11 = 0;
          plVar16 = plVar21;
          while( true ) {
            plVar21 = (long *)*param_3;
            plVar18 = param_3;
            if ((long *)*param_3 == (long *)0x0) {
              do {
                plVar15 = (long *)plVar18[2];
                bVar22 = (long *)*plVar15 == plVar18;
                plVar18 = plVar15;
              } while (bVar22);
            }
            else {
              do {
                plVar15 = plVar21;
                plVar21 = (long *)plVar15[1];
              } while ((long *)plVar15[1] != (long *)0x0);
            }
            cVar7 = (*param_2)(plVar16[4],plVar15[4]);
            plVar21 = plVar16;
            if (cVar7 == '\0') break;
            plVar21 = (long *)*param_3;
            plVar18 = plVar21;
            plVar15 = param_3;
            if (plVar21 == (long *)0x0) {
              do {
                plVar17 = (long *)plVar15[2];
                bVar22 = (long *)*plVar17 == plVar15;
                plVar15 = plVar17;
              } while (bVar22);
            }
            else {
              do {
                plVar17 = plVar18;
                plVar18 = (long *)plVar17[1];
              } while ((long *)plVar17[1] != (long *)0x0);
            }
            if (local_70 == plVar17[4]) {
LAB_1006907d0:
              plVar21 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
              cVar7 = (**(code **)(*plVar21 + 0x48))
                                (plVar21,pvVar13,uVar12,&local_44,
                                 *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1) *
                                 plVar16[4]);
              uVar6 = local_44;
              uVar23 = (undefined4)((ulong)in_stack_ffffffffffffff50 >> 0x20);
              plVar21 = (long *)*param_3;
              if (cVar7 == '\0') {
                plVar18 = param_3;
                if (plVar21 == (long *)0x0) {
                  do {
                    plVar15 = (long *)plVar18[2];
                    bVar22 = (long *)*plVar15 == plVar18;
                    plVar18 = plVar15;
                  } while (bVar22);
                }
                else {
                  do {
                    plVar15 = plVar21;
                    plVar21 = (long *)plVar15[1];
                  } while ((long *)plVar15[1] != (long *)0x0);
                }
                lVar5 = plVar15[4];
                uVar10 = (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) +
                                     0xb0))();
                in_stack_ffffffffffffff50 = (char *)CONCAT44(uVar23,uVar10);
                FUN_1008e3970("","dimg",0,
                              "Error writing block %llu [Size requeted %u Size got %u] at copy. [%d]"
                              ,lVar5,uVar12,uVar6,in_stack_ffffffffffffff50);
                iVar20 = -0x7ffdefd9;
              }
              else {
                plVar18 = param_3;
                if (plVar21 == (long *)0x0) {
                  do {
                    plVar15 = (long *)plVar18[2];
                    bVar22 = (long *)*plVar15 == plVar18;
                    plVar18 = plVar15;
                  } while (bVar22);
                }
                else {
                  do {
                    plVar15 = plVar21;
                    plVar21 = (long *)plVar15[1];
                  } while ((long *)plVar15[1] != (long *)0x0);
                }
                local_40 = plVar15[5];
                local_38 = plVar16[4];
                FUN_100693d50(param_4,&local_40);
                uVar14 = (ulong)(uint)(iVar11 * 1000) / (ulong)uVar1;
                puVar19 = param_6;
                while( true ) {
                  pcVar4 = (code *)*puVar19;
                  if ((pcVar4 == (code *)0x0) && (puVar19[4] == 0)) goto LAB_100690a10;
                  iVar8 = (int)uVar14;
                  if ((-1 < iVar8) && (1 < *(uint *)(puVar19 + 2))) {
                    iVar2 = *(int *)((long)puVar19 + 0x14);
                    if (iVar8 < *(int *)((long)puVar19 + 0x14)) {
                      *(int *)((long)puVar19 + 0x14) = iVar8;
                      goto LAB_100690a10;
                    }
                    *(int *)((long)puVar19 + 0x14) = iVar8;
                    uVar9 = (uint)(iVar8 - iVar2) / *(uint *)(puVar19 + 2) + *(int *)(puVar19 + 3);
                    uVar14 = (ulong)uVar9;
                    *(uint *)(puVar19 + 3) = uVar9;
                  }
                  if (pcVar4 != (code *)0x0) break;
                  puVar19 = (undefined8 *)puVar19[4];
                }
                cVar7 = (*pcVar4)(uVar14,puVar19[1]);
                if (cVar7 == '\0') {
                  FUN_1008e3970("","dimg",0,"Compact interrupted at copy process by user");
                  iVar20 = -0x7ffdefc8;
                }
              }
            }
            else {
              plVar18 = plVar21;
              plVar15 = param_3;
              if (plVar21 == (long *)0x0) {
                do {
                  plVar17 = (long *)plVar15[2];
                  bVar22 = (long *)*plVar17 == plVar15;
                  plVar15 = plVar17;
                } while (bVar22);
              }
              else {
                do {
                  plVar17 = plVar18;
                  plVar18 = (long *)plVar17[1];
                } while ((long *)plVar17[1] != (long *)0x0);
              }
              local_70 = plVar17[4];
              plVar18 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
              plVar15 = param_3;
              if (plVar21 == (long *)0x0) {
                do {
                  plVar17 = (long *)plVar15[2];
                  bVar22 = (long *)*plVar17 == plVar15;
                  plVar15 = plVar17;
                } while (bVar22);
              }
              else {
                do {
                  plVar17 = plVar21;
                  plVar21 = (long *)plVar17[1];
                } while ((long *)plVar17[1] != (long *)0x0);
              }
              cVar7 = (**(code **)(*plVar18 + 0x40))
                                (plVar18,pvVar13,uVar12,&local_44,
                                 *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1) *
                                 plVar17[4]);
              uVar6 = local_44;
              uVar23 = (undefined4)((ulong)in_stack_ffffffffffffff50 >> 0x20);
              if (cVar7 != '\0') goto LAB_1006907d0;
              plVar21 = (long *)*param_3;
              plVar18 = param_3;
              if ((long *)*param_3 == (long *)0x0) {
                do {
                  plVar15 = (long *)plVar18[2];
                  bVar22 = (long *)*plVar15 == plVar18;
                  plVar18 = plVar15;
                } while (bVar22);
              }
              else {
                do {
                  plVar15 = plVar21;
                  plVar21 = (long *)plVar15[1];
                } while ((long *)plVar15[1] != (long *)0x0);
              }
              lVar5 = plVar15[4];
              uVar10 = (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) +
                                   0xb0))();
              in_stack_ffffffffffffff50 = (char *)CONCAT44(uVar23,uVar10);
              FUN_1008e3970("","dimg",0,
                            "Error reading block %llu [Size requeted %u Size got %u] at copy. [%d]",
                            lVar5,uVar12,uVar6,in_stack_ffffffffffffff50);
              iVar20 = -0x7ffdefd7;
            }
LAB_100690a10:
            plVar21 = (long *)*param_3;
            plVar18 = param_3;
            if ((long *)*param_3 == (long *)0x0) {
              do {
                param_3 = (long *)plVar18[2];
                bVar22 = (long *)*param_3 == plVar18;
                plVar18 = param_3;
              } while (bVar22);
            }
            else {
              do {
                param_3 = plVar21;
                plVar21 = (long *)param_3[1];
              } while ((long *)param_3[1] != (long *)0x0);
            }
            plVar18 = (long *)plVar16[1];
            if ((long *)plVar16[1] == (long *)0x0) {
              do {
                plVar21 = (long *)plVar16[2];
                bVar22 = (long *)*plVar21 != plVar16;
                plVar16 = plVar21;
              } while (bVar22);
            }
            else {
              do {
                plVar21 = plVar18;
                plVar18 = (long *)*plVar21;
              } while ((long *)*plVar21 != (long *)0x0);
            }
            if (((plVar21 == param_5 + 1) || (param_3 == plVar3)) ||
               (iVar11 = iVar11 + 1, plVar16 = plVar21, iVar20 < 0)) break;
          }
        }
      }
      plVar3 = (long *)*param_5;
      while (plVar3 != plVar21) {
        plVar16 = plVar3;
        plVar18 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          do {
            plVar15 = (long *)plVar16[2];
            bVar22 = (long *)*plVar15 != plVar16;
            plVar16 = plVar15;
          } while (bVar22);
        }
        else {
          do {
            plVar15 = plVar18;
            plVar18 = (long *)*plVar15;
          } while ((long *)*plVar15 != (long *)0x0);
        }
        if ((long *)*param_5 == plVar3) {
          *param_5 = (long)plVar15;
        }
        param_5[2] = param_5[2] + -1;
        FUN_1000e86c0(param_5[1],plVar3);
        operator_delete(plVar3);
        plVar3 = plVar15;
      }
      _free(pvVar13);
    }
  }
  return iVar20;
}

