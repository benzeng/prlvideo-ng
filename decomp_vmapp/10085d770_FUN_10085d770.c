
ulong FUN_10085d770(long *param_1,long param_2,long param_3,long param_4,long param_5)

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
    uVar6 = FUN_10085c500(param_1,param_2,param_3,param_5);
    return uVar6;
  }
  iVar4 = FUN_10085c5d0(param_1,param_3);
  lVar7 = param_4;
  if ((iVar4 != 0) || (iVar4 = FUN_10085c5d0(param_1,param_4), lVar7 = param_3, iVar4 != 0)) {
    uVar6 = FUN_10085b7b0(param_2,lVar7);
    return uVar6;
  }
  pcVar2 = *(code **)(*param_1 + 0x100);
  pcVar3 = *(code **)(*param_1 + 0x108);
  lVar7 = 0;
  if ((param_5 == 0) && (lVar7 = FUN_10084c820(), param_5 = lVar7, lVar7 == 0)) {
    return 0;
  }
  FUN_10084ca60(param_5);
  puVar8 = (undefined8 *)FUN_10084cc20(param_5);
  uVar9 = FUN_10084cc20(param_5);
  uVar10 = FUN_10084cc20(param_5);
  uVar11 = FUN_10084cc20(param_5);
  uVar12 = FUN_10084cc20(param_5);
  lVar13 = FUN_10084cc20(param_5);
  lVar14 = FUN_10084cc20(param_5);
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
      goto LAB_10085d953;
      goto LAB_10085daea;
    }
    uVar6 = 0;
  }
  else {
    lVar15 = FUN_10084b950(uVar9,param_3 + 8);
    if (lVar15 == 0) {
      uVar6 = 0;
    }
    else {
      lVar15 = FUN_10084b950(uVar10,param_3 + 0x20);
      if (lVar15 != 0) {
LAB_10085d953:
        if (*(int *)(param_3 + 0x50) == 0) {
          iVar4 = (*pcVar3)(param_1,puVar8,param_3 + 0x38,param_5);
          if (iVar4 == 0) {
            uVar6 = 0;
            goto LAB_10085daf0;
          }
          iVar4 = (*pcVar2)(param_1,uVar11,param_4 + 8,puVar8,param_5);
          if (((iVar4 != 0) &&
              (iVar4 = (*pcVar2)(param_1,puVar8,puVar8,param_3 + 0x38,param_5), iVar4 != 0)) &&
             (iVar4 = (*pcVar2)(param_1,uVar12,param_4 + 0x20,puVar8,param_5), iVar4 != 0))
          goto LAB_10085da1f;
        }
        else {
          lVar15 = FUN_10084b950(uVar11,param_4 + 8);
          if ((lVar15 != 0) && (lVar15 = FUN_10084b950(uVar12,param_4 + 0x20), lVar15 != 0)) {
LAB_10085da1f:
            plVar1 = param_1 + 0xd;
            iVar4 = FUN_10084ea80(lVar13,uVar9,uVar11);
            if (iVar4 != 0) {
              iVar4 = FUN_10084ea80(lVar14,uVar10,uVar12,plVar1);
              if (iVar4 == 0) {
                uVar6 = 0;
              }
              else if (*(int *)(lVar13 + 8) == 0) {
                if (*(int *)(lVar14 + 8) == 0) {
                  FUN_10084cb40(param_5);
                  uVar5 = FUN_10085c500(param_1,param_2,param_3,param_5);
                  uVar6 = (ulong)uVar5;
                  goto LAB_10085daf8;
                }
                FUN_10084bbb0(param_2 + 0x38,0);
                *(undefined4 *)(param_2 + 0x50) = 0;
                uVar6 = 1;
              }
              else {
                iVar4 = FUN_10084e9b0(uVar9,uVar9,uVar11,plVar1);
                if (iVar4 == 0) {
                  uVar6 = 0;
                }
                else {
                  iVar4 = FUN_10084e9b0(uVar10,uVar10,uVar12,plVar1);
                  if (iVar4 == 0) {
                    uVar6 = 0;
                  }
                  else if (*(int *)(param_3 + 0x50) == 0) {
                    if (*(int *)(param_4 + 0x50) == 0) {
                      iVar4 = (*pcVar2)(param_1,puVar8,param_3 + 0x38,param_4 + 0x38,param_5);
                      if (iVar4 != 0) goto LAB_10085dbcd;
                      uVar6 = 0;
                    }
                    else {
                      lVar15 = FUN_10084b950(puVar8,param_3 + 0x38);
                      if (lVar15 == 0) {
                        uVar6 = 0;
                      }
                      else {
LAB_10085dbcd:
                        iVar4 = (*pcVar2)(param_1,param_2 + 0x38,puVar8,lVar13,param_5);
                        if (iVar4 != 0) goto LAB_10085dbed;
                        uVar6 = 0;
                      }
                    }
                  }
                  else if (*(int *)(param_4 + 0x50) == 0) {
                    lVar15 = FUN_10084b950(puVar8,param_4 + 0x38);
                    if (lVar15 != 0) goto LAB_10085dbcd;
                    uVar6 = 0;
                  }
                  else {
                    lVar15 = FUN_10084b950(param_2 + 0x38,lVar13);
                    if (lVar15 == 0) {
                      uVar6 = 0;
                    }
                    else {
LAB_10085dbed:
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
                            iVar4 = FUN_10084ea80(param_2 + 8,puVar8,uVar11,plVar1);
                            if (iVar4 == 0) {
                              uVar6 = 0;
                            }
                            else {
                              iVar4 = FUN_10084ec70(puVar8,param_2 + 8,plVar1);
                              if (iVar4 == 0) {
                                uVar6 = 0;
                              }
                              else {
                                iVar4 = FUN_10084ea80(puVar8,uVar11,puVar8,plVar1);
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
                                        iVar4 = FUN_10084ea80(puVar8,puVar8,uVar9,plVar1);
                                        if (iVar4 == 0) {
                                          uVar6 = 0;
                                        }
                                        else {
                                          uVar6 = 0;
                                          if (((*(int *)(puVar8 + 1) < 1) ||
                                              ((*(byte *)*puVar8 & 1) == 0)) ||
                                             (iVar4 = FUN_100847940(puVar8,puVar8,plVar1),
                                             iVar4 != 0)) {
                                            iVar4 = FUN_10084fef0(param_2 + 0x20,puVar8);
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
              goto LAB_10085daf0;
            }
          }
        }
      }
LAB_10085daea:
      uVar6 = 0;
    }
  }
LAB_10085daf0:
  FUN_10084cb40(param_5);
LAB_10085daf8:
  if (lVar7 != 0) {
    FUN_10084c8b0();
  }
  return uVar6;
}

