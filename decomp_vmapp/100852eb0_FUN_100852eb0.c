
ulong FUN_100852eb0(undefined8 *param_1,int param_2,long param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  bool bVar11;
  int local_74;
  
  uVar3 = FUN_10084b310();
  iVar1 = FUN_10084bf60(param_1,uVar3);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = FUN_10084b410(param_1);
    param_2 = 2;
    if (iVar1 < 0x514) {
      iVar1 = FUN_10084b410(param_1);
      param_2 = 3;
      if (iVar1 < 0x352) {
        iVar1 = FUN_10084b410(param_1);
        param_2 = 4;
        if (iVar1 < 0x28a) {
          iVar1 = FUN_10084b410(param_1);
          param_2 = 5;
          if (iVar1 < 0x226) {
            iVar1 = FUN_10084b410(param_1);
            param_2 = 6;
            if (iVar1 < 0x1c2) {
              iVar1 = FUN_10084b410(param_1);
              param_2 = 7;
              if (iVar1 < 400) {
                iVar1 = FUN_10084b410(param_1);
                param_2 = 8;
                if (iVar1 < 0x15e) {
                  iVar1 = FUN_10084b410(param_1);
                  param_2 = 9;
                  if (iVar1 < 300) {
                    iVar1 = FUN_10084b410(param_1);
                    param_2 = 0xc;
                    if (iVar1 < 0xfa) {
                      iVar1 = FUN_10084b410(param_1);
                      param_2 = 0xf;
                      if (iVar1 < 200) {
                        iVar1 = FUN_10084b410(param_1);
                        param_2 = (uint)(iVar1 < 0x96) * 9 + 0x12;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 1) < 1) {
    return 0;
  }
  if ((*(ulong *)*param_1 & 1) == 0) {
    bVar11 = false;
    if ((*(int *)(param_1 + 1) == 1) && (bVar11 = false, *(ulong *)*param_1 == 2)) {
      bVar11 = *(int *)(param_1 + 2) == 0;
    }
    return (ulong)bVar11;
  }
  lVar8 = 1;
  if (param_4 != 0) {
    do {
      lVar4 = FUN_1008505e0(param_1,*(undefined2 *)(&DAT_100b558a0 + lVar8 * 2));
      if (lVar4 == 0) {
        return 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < 0x800);
    if (param_5 != (int *)0x0) {
      if (*param_5 == 2) {
        iVar1 = (**(code **)(param_5 + 4))(1,0xffffffff);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
      }
      else {
        if (*param_5 != 1) {
          return 0xffffffff;
        }
        if (*(code **)(param_5 + 4) != (code *)0x0) {
          (**(code **)(param_5 + 4))(1,0xffffffff,*(undefined8 *)(param_5 + 2));
        }
      }
    }
  }
  lVar8 = param_3;
  if ((param_3 == 0) && (lVar8 = FUN_10084c820(), lVar8 == 0)) {
    return 0xffffffff;
  }
  FUN_10084ca60(lVar8);
  if (*(int *)(param_1 + 2) == 0) {
LAB_100853134:
    lVar6 = FUN_10084cc20(lVar8);
    uVar3 = FUN_10084cc20(lVar8);
    puVar5 = (undefined8 *)FUN_10084cc20(lVar8);
    uVar9 = 0xffffffff;
    lVar4 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      lVar7 = FUN_10084b950(lVar6,param_1);
      lVar4 = 0;
      if (lVar7 != 0) {
        iVar1 = FUN_100850820(lVar6,1);
        iVar10 = 0;
        lVar4 = 0;
        if (iVar1 != 0) {
          if (*(int *)(lVar6 + 8) != 0) {
            do {
              iVar10 = iVar10 + 1;
              iVar1 = FUN_10084c160(lVar6,iVar10);
            } while (iVar1 == 0);
            iVar1 = FUN_100850250(uVar3,lVar6,iVar10);
            uVar9 = 0xffffffff;
            lVar4 = 0;
            if (iVar1 != 0) {
              lVar7 = FUN_100857ed0();
              lVar4 = 0;
              if ((lVar7 != 0) &&
                 (iVar1 = FUN_100857fe0(lVar7,param_1,lVar8), lVar4 = lVar7, iVar1 != 0)) {
                if (0 < param_2) {
                  if (param_5 == (int *)0x0) {
                    local_74 = 0;
                    do {
                      iVar1 = FUN_10084fd60(puVar5,lVar6);
                      if (((iVar1 == 0) || (iVar1 = FUN_100850720(puVar5,1), iVar1 == 0)) ||
                         (iVar1 = FUN_100848c40(puVar5,puVar5,uVar3,param_1,lVar8,lVar7), iVar1 == 0
                         )) goto LAB_100853475;
                      if (((*(int *)(puVar5 + 1) != 1) || (*(long *)*puVar5 != 1)) ||
                         (*(int *)(puVar5 + 2) != 0)) {
                        iVar2 = FUN_10084bf60(puVar5,lVar6);
                        iVar1 = iVar10;
                        while (iVar2 != 0) {
                          iVar1 = iVar1 + -1;
                          if (iVar1 == 0) goto LAB_10085346e;
                          iVar2 = FUN_10084eac0(puVar5,puVar5,puVar5,param_1,lVar8);
                          if (iVar2 == 0) goto LAB_100853475;
                          if (((*(int *)(puVar5 + 1) == 1) && (*(long *)*puVar5 == 1)) &&
                             (*(int *)(puVar5 + 2) == 0)) goto LAB_10085346e;
                          iVar2 = FUN_10084bf60(puVar5,lVar6);
                        }
                      }
                      local_74 = local_74 + 1;
                    } while (local_74 < param_2);
                  }
                  else {
                    local_74 = 0;
                    do {
                      iVar1 = FUN_10084fd60(puVar5,lVar6);
                      if (((iVar1 == 0) || (iVar1 = FUN_100850720(puVar5,1), iVar1 == 0)) ||
                         (iVar1 = FUN_100848c40(puVar5,puVar5,uVar3,param_1,lVar8,lVar7), iVar1 == 0
                         )) goto LAB_100853475;
                      if (((*(int *)(puVar5 + 1) != 1) || (*(long *)*puVar5 != 1)) ||
                         (*(int *)(puVar5 + 2) != 0)) {
                        iVar2 = FUN_10084bf60(puVar5,lVar6);
                        iVar1 = iVar10;
                        while (iVar2 != 0) {
                          iVar1 = iVar1 + -1;
                          if (iVar1 == 0) goto LAB_10085346e;
                          iVar2 = FUN_10084eac0(puVar5,puVar5,puVar5,param_1,lVar8);
                          if (iVar2 == 0) goto LAB_100853475;
                          if (((*(int *)(puVar5 + 1) == 1) && (*(long *)*puVar5 == 1)) &&
                             (*(int *)(puVar5 + 2) == 0)) goto LAB_10085346e;
                          iVar2 = FUN_10084bf60(puVar5,lVar6);
                        }
                      }
                      if (*param_5 == 2) {
                        iVar1 = (**(code **)(param_5 + 4))(1,local_74);
                        if (iVar1 == 0) goto LAB_100853475;
                      }
                      else {
                        if (*param_5 != 1) goto LAB_100853475;
                        if (*(code **)(param_5 + 4) != (code *)0x0) {
                          (**(code **)(param_5 + 4))(1,local_74,*(undefined8 *)(param_5 + 2));
                        }
                      }
                      local_74 = local_74 + 1;
                    } while (local_74 < param_2);
                  }
                }
                uVar9 = 1;
              }
            }
            goto LAB_100853475;
          }
          uVar9 = 0;
        }
      }
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_10084cc20(lVar8);
    uVar9 = 0xffffffff;
    lVar4 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_10084b950(puVar5,param_1);
      *(undefined4 *)(puVar5 + 2) = 0;
      param_1 = puVar5;
      goto LAB_100853134;
    }
  }
LAB_100853485:
  FUN_10084cb40(lVar8);
  if (param_3 == 0) {
    FUN_10084c8b0(lVar8);
  }
LAB_1008534a0:
  if (lVar4 != 0) {
    FUN_100857f90(lVar4);
  }
  return uVar9;
LAB_10085346e:
  uVar9 = 0;
LAB_100853475:
  if (lVar8 == 0) goto LAB_1008534a0;
  goto LAB_100853485;
}

