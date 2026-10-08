
ulong FUN_100c38970(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_3 == param_4) {
    uVar6 = FUN_100c37700(param_1,param_2,param_3,param_5);
    return uVar6;
  }
  iVar4 = FUN_100c377d0(param_1,param_3);
  lVar7 = param_4;
  if ((iVar4 != 0) || (iVar4 = FUN_100c377d0(param_1,param_4), lVar7 = param_3, iVar4 != 0)) {
    uVar6 = FUN_100c369b0(param_2,lVar7);
    return uVar6;
  }
  pcVar2 = *(code **)(*param_1 + 0x100);
  pcVar3 = *(code **)(*param_1 + 0x108);
  lVar7 = 0;
  if ((param_5 == 0) && (lVar7 = FUN_100c27a20(), param_5 = lVar7, lVar7 == 0)) {
    return 0;
  }
  FUN_100c27c60(param_5);
  puVar8 = (undefined8 *)FUN_100c27e20(param_5);
  uVar9 = FUN_100c27e20(param_5);
  uVar10 = FUN_100c27e20(param_5);
  uVar11 = FUN_100c27e20(param_5);
  uVar12 = FUN_100c27e20(param_5);
  lVar13 = FUN_100c27e20(param_5);
  lVar14 = FUN_100c27e20(param_5);
  if (lVar14 == 0) {
    uVar6 = 0;
  }
  else if (*(int *)(param_4 + 0x50) == 0) {
    iVar4 = (*pcVar3)(param_1,puVar8,param_4 + 0x38,param_5);
    if (iVar4 != 0) {
      iVar4 = (*pcVar2)(param_1,uVar9,param_3 + 8,puVar8,param_5);
      if (((iVar4 != 0) &&
          (iVar4 = (*pcVar2)(param_1,puVar8,puVar8,param_4 + 0x38,param_5), iVar4 != 0)) &&
         (iVar4 = (*pcVar2)(param_1,uVar10,param_3 + 0x20,puVar8,param_5), iVar4 != 0))
      goto LAB_100c38b53;
      goto LAB_100c38cea;
    }
    uVar6 = 0;
  }
  else {
    lVar15 = FUN_100c26b50(uVar9,param_3 + 8);
    if (lVar15 == 0) {
      uVar6 = 0;
    }
    else {
      lVar15 = FUN_100c26b50(uVar10,param_3 + 0x20);
      if (lVar15 != 0) {
LAB_100c38b53:
        if (*(int *)(param_3 + 0x50) == 0) {
          iVar4 = (*pcVar3)(param_1,puVar8,param_3 + 0x38,param_5);
          if (iVar4 == 0) {
            uVar6 = 0;
            goto LAB_100c38cf0;
          }
          iVar4 = (*pcVar2)(param_1,uVar11,param_4 + 8,puVar8,param_5);
          if (((iVar4 != 0) &&
              (iVar4 = (*pcVar2)(param_1,puVar8,puVar8,param_3 + 0x38,param_5), iVar4 != 0)) &&
             (iVar4 = (*pcVar2)(param_1,uVar12,param_4 + 0x20,puVar8,param_5), iVar4 != 0))
          goto LAB_100c38c1f;
        }
        else {
          lVar15 = FUN_100c26b50(uVar11,param_4 + 8);
          if ((lVar15 != 0) && (lVar15 = FUN_100c26b50(uVar12,param_4 + 0x20), lVar15 != 0)) {
LAB_100c38c1f:
            plVar1 = param_1 + 0xd;
            iVar4 = FUN_100c29c80(lVar13,uVar9,uVar11);
            if (iVar4 != 0) {
              iVar4 = FUN_100c29c80(lVar14,uVar10,uVar12,plVar1);
              if (iVar4 == 0) {
                uVar6 = 0;
              }
              else if (*(int *)(lVar13 + 8) == 0) {
                if (*(int *)(lVar14 + 8) == 0) {
                  FUN_100c27d40(param_5);
                  uVar5 = FUN_100c37700(param_1,param_2,param_3,param_5);
                  uVar6 = (ulong)uVar5;
                  goto LAB_100c38cf8;
                }
                FUN_100c26db0(param_2 + 0x38,0);
                *(undefined4 *)(param_2 + 0x50) = 0;
                uVar6 = 1;
              }
              else {
                iVar4 = FUN_100c29bb0(uVar9,uVar9,uVar11,plVar1);
                if (iVar4 == 0) {
                  uVar6 = 0;
                }
                else {
                  iVar4 = FUN_100c29bb0(uVar10,uVar10,uVar12,plVar1);
                  if (iVar4 == 0) {
                    uVar6 = 0;
                  }
                  else if (*(int *)(param_3 + 0x50) == 0) {
                    if (*(int *)(param_4 + 0x50) == 0) {
                      iVar4 = (*pcVar2)(param_1,puVar8,param_3 + 0x38,param_4 + 0x38,param_5);
                      if (iVar4 != 0) goto LAB_100c38dcd;
                      uVar6 = 0;
                    }
                    else {
                      lVar15 = FUN_100c26b50(puVar8,param_3 + 0x38);
                      if (lVar15 == 0) {
                        uVar6 = 0;
                      }
                      else {
LAB_100c38dcd:
                        iVar4 = (*pcVar2)(param_1,param_2 + 0x38,puVar8,lVar13,param_5);
                        if (iVar4 != 0) goto LAB_100c38ded;
                        uVar6 = 0;
                      }
                    }
                  }
                  else if (*(int *)(param_4 + 0x50) == 0) {
                    lVar15 = FUN_100c26b50(puVar8,param_4 + 0x38);
                    if (lVar15 != 0) goto LAB_100c38dcd;
                    uVar6 = 0;
                  }
                  else {
                    lVar15 = FUN_100c26b50(param_2 + 0x38,lVar13);
                    if (lVar15 == 0) {
                      uVar6 = 0;
                    }
                    else {
LAB_100c38ded:
                      *(undefined4 *)(param_2 + 0x50) = 0;
                      iVar4 = (*pcVar3)(param_1,puVar8,lVar14,param_5);
                      if (iVar4 == 0) {
                        uVar6 = 0;
                      }
                      else {
                        iVar4 = (*pcVar3)(param_1,uVar12,lVar13,param_5);
                        if (iVar4 == 0) {
                          uVar6 = 0;
                        }
                        else {
                          iVar4 = (*pcVar2)(param_1,uVar11,uVar9,uVar12,param_5);
                          if (iVar4 == 0) {
                            uVar6 = 0;
                          }
                          else {
                            iVar4 = FUN_100c29c80(param_2 + 8,puVar8,uVar11,plVar1);
                            if (iVar4 == 0) {
                              uVar6 = 0;
                            }
                            else {
                              iVar4 = FUN_100c29e70(puVar8,param_2 + 8,plVar1);
                              if (iVar4 == 0) {
                                uVar6 = 0;
                              }
                              else {
                                iVar4 = FUN_100c29c80(puVar8,uVar11,puVar8,plVar1);
                                if (iVar4 == 0) {
                                  uVar6 = 0;
                                }
                                else {
                                  iVar4 = (*pcVar2)(param_1,puVar8,puVar8,lVar14,param_5);
                                  if (iVar4 == 0) {
                                    uVar6 = 0;
                                  }
                                  else {
                                    iVar4 = (*pcVar2)(param_1,lVar13,uVar12,lVar13,param_5);
                                    if (iVar4 == 0) {
                                      uVar6 = 0;
                                    }
                                    else {
                                      iVar4 = (*pcVar2)(param_1,uVar9,uVar10,lVar13,param_5);
                                      if (iVar4 == 0) {
                                        uVar6 = 0;
                                      }
                                      else {
                                        iVar4 = FUN_100c29c80(puVar8,puVar8,uVar9,plVar1);
                                        if (iVar4 == 0) {
                                          uVar6 = 0;
                                        }
                                        else {
                                          uVar6 = 0;
                                          if (((*(int *)(puVar8 + 1) < 1) ||
                                              ((*(byte *)*puVar8 & 1) == 0)) ||
                                             (iVar4 = FUN_100c22b40(puVar8,puVar8,plVar1),
                                             iVar4 != 0)) {
                                            iVar4 = FUN_100c2b0f0(param_2 + 0x20,puVar8);
                                            uVar6 = (ulong)(iVar4 != 0);
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
                    }
                  }
                }
              }
              goto LAB_100c38cf0;
            }
          }
        }
      }
LAB_100c38cea:
      uVar6 = 0;
    }
  }
LAB_100c38cf0:
  FUN_100c27d40(param_5);
LAB_100c38cf8:
  if (lVar7 != 0) {
    FUN_100c27ab0();
  }
  return uVar6;
}

