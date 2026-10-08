
ulong FUN_100c2e0b0(undefined8 *param_1,int param_2,long param_3,int param_4,int *param_5)

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
  
  uVar3 = FUN_100c26510();
  iVar1 = FUN_100c27160(param_1,uVar3);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = FUN_100c26610(param_1);
    param_2 = 2;
    if (iVar1 < 0x514) {
      iVar1 = FUN_100c26610(param_1);
      param_2 = 3;
      if (iVar1 < 0x352) {
        iVar1 = FUN_100c26610(param_1);
        param_2 = 4;
        if (iVar1 < 0x28a) {
          iVar1 = FUN_100c26610(param_1);
          param_2 = 5;
          if (iVar1 < 0x226) {
            iVar1 = FUN_100c26610(param_1);
            param_2 = 6;
            if (iVar1 < 0x1c2) {
              iVar1 = FUN_100c26610(param_1);
              param_2 = 7;
              if (iVar1 < 400) {
                iVar1 = FUN_100c26610(param_1);
                param_2 = 8;
                if (iVar1 < 0x15e) {
                  iVar1 = FUN_100c26610(param_1);
                  param_2 = 9;
                  if (iVar1 < 300) {
                    iVar1 = FUN_100c26610(param_1);
                    param_2 = 0xc;
                    if (iVar1 < 0xfa) {
                      iVar1 = FUN_100c26610(param_1);
                      param_2 = 0xf;
                      if (iVar1 < 200) {
                        iVar1 = FUN_100c26610(param_1);
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
      lVar4 = FUN_100c2b7e0(param_1,*(undefined2 *)(&DAT_101daa540 + lVar8 * 2));
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
  if ((param_3 == 0) && (lVar8 = FUN_100c27a20(), lVar8 == 0)) {
    return 0xffffffff;
  }
  FUN_100c27c60(lVar8);
  if (*(int *)(param_1 + 2) == 0) {
LAB_100c2e334:
    lVar6 = FUN_100c27e20(lVar8);
    uVar3 = FUN_100c27e20(lVar8);
    puVar5 = (undefined8 *)FUN_100c27e20(lVar8);
    uVar9 = 0xffffffff;
    lVar4 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      lVar7 = FUN_100c26b50(lVar6,param_1);
      lVar4 = 0;
      if (lVar7 != 0) {
        iVar1 = FUN_100c2ba20(lVar6,1);
        iVar10 = 0;
        lVar4 = 0;
        if (iVar1 != 0) {
          if (*(int *)(lVar6 + 8) != 0) {
            do {
              iVar10 = iVar10 + 1;
              iVar1 = FUN_100c27360(lVar6,iVar10);
            } while (iVar1 == 0);
            iVar1 = FUN_100c2b450(uVar3,lVar6,iVar10);
            uVar9 = 0xffffffff;
            lVar4 = 0;
            if (iVar1 != 0) {
              lVar7 = FUN_100c330d0();
              lVar4 = 0;
              if ((lVar7 != 0) &&
                 (iVar1 = FUN_100c331e0(lVar7,param_1,lVar8), lVar4 = lVar7, iVar1 != 0)) {
                if (0 < param_2) {
                  if (param_5 == (int *)0x0) {
                    local_74 = 0;
                    do {
                      iVar1 = FUN_100c2af60(puVar5,lVar6);
                      if (((iVar1 == 0) || (iVar1 = FUN_100c2b920(puVar5,1), iVar1 == 0)) ||
                         (iVar1 = FUN_100c23e40(puVar5,puVar5,uVar3,param_1,lVar8,lVar7), iVar1 == 0
                         )) goto LAB_100c2e675;
                      if (((*(int *)(puVar5 + 1) != 1) || (*(long *)*puVar5 != 1)) ||
                         (*(int *)(puVar5 + 2) != 0)) {
                        iVar2 = FUN_100c27160(puVar5,lVar6);
                        iVar1 = iVar10;
                        while (iVar2 != 0) {
                          iVar1 = iVar1 + -1;
                          if (iVar1 == 0) goto LAB_100c2e66e;
                          iVar2 = FUN_100c29cc0(puVar5,puVar5,puVar5,param_1,lVar8);
                          if (iVar2 == 0) goto LAB_100c2e675;
                          if (((*(int *)(puVar5 + 1) == 1) && (*(long *)*puVar5 == 1)) &&
                             (*(int *)(puVar5 + 2) == 0)) goto LAB_100c2e66e;
                          iVar2 = FUN_100c27160(puVar5,lVar6);
                        }
                      }
                      local_74 = local_74 + 1;
                    } while (local_74 < param_2);
                  }
                  else {
                    local_74 = 0;
                    do {
                      iVar1 = FUN_100c2af60(puVar5,lVar6);
                      if (((iVar1 == 0) || (iVar1 = FUN_100c2b920(puVar5,1), iVar1 == 0)) ||
                         (iVar1 = FUN_100c23e40(puVar5,puVar5,uVar3,param_1,lVar8,lVar7), iVar1 == 0
                         )) goto LAB_100c2e675;
                      if (((*(int *)(puVar5 + 1) != 1) || (*(long *)*puVar5 != 1)) ||
                         (*(int *)(puVar5 + 2) != 0)) {
                        iVar2 = FUN_100c27160(puVar5,lVar6);
                        iVar1 = iVar10;
                        while (iVar2 != 0) {
                          iVar1 = iVar1 + -1;
                          if (iVar1 == 0) goto LAB_100c2e66e;
                          iVar2 = FUN_100c29cc0(puVar5,puVar5,puVar5,param_1,lVar8);
                          if (iVar2 == 0) goto LAB_100c2e675;
                          if (((*(int *)(puVar5 + 1) == 1) && (*(long *)*puVar5 == 1)) &&
                             (*(int *)(puVar5 + 2) == 0)) goto LAB_100c2e66e;
                          iVar2 = FUN_100c27160(puVar5,lVar6);
                        }
                      }
                      if (*param_5 == 2) {
                        iVar1 = (**(code **)(param_5 + 4))(1,local_74);
                        if (iVar1 == 0) goto LAB_100c2e675;
                      }
                      else {
                        if (*param_5 != 1) goto LAB_100c2e675;
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
            goto LAB_100c2e675;
          }
          uVar9 = 0;
        }
      }
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_100c27e20(lVar8);
    uVar9 = 0xffffffff;
    lVar4 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_100c26b50(puVar5,param_1);
      *(undefined4 *)(puVar5 + 2) = 0;
      param_1 = puVar5;
      goto LAB_100c2e334;
    }
  }
LAB_100c2e685:
  FUN_100c27d40(lVar8);
  if (param_3 == 0) {
    FUN_100c27ab0(lVar8);
  }
LAB_100c2e6a0:
  if (lVar4 != 0) {
    FUN_100c33190(lVar4);
  }
  return uVar9;
LAB_100c2e66e:
  uVar9 = 0;
LAB_100c2e675:
  if (lVar8 == 0) goto LAB_100c2e6a0;
  goto LAB_100c2e685;
}

