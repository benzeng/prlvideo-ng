
ulong FUN_100866040(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  char cVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint local_44;
  
  if (param_2 == param_4) {
    FUN_100887ce0(0x10,0xd0,0x70,"ec2_mult.c",0x112);
    return 0;
  }
  if ((((param_3 == (long *)0x0) || (param_4 == 0)) || ((int)param_3[1] == 0)) ||
     (iVar4 = FUN_10085c5d0(param_1,param_4), iVar4 != 0)) {
    uVar5 = FUN_10085c1f0(param_1,param_2);
    return uVar5;
  }
  if (*(int *)(param_4 + 0x50) == 0) {
    return 0;
  }
  FUN_10084ca60(param_5);
  lVar6 = FUN_10084cc20(param_5);
  lVar7 = FUN_10084cc20(param_5);
  if (lVar7 == 0) {
    local_44 = 0;
    goto LAB_100866952;
  }
  iVar4 = (int)param_1[0xe];
  if (*(int *)(lVar6 + 0xc) < iVar4) {
    FUN_10084b900(lVar6);
    iVar4 = (int)param_1[0xe];
  }
  local_44 = 0;
  if (*(int *)(lVar7 + 0xc) < iVar4) {
    FUN_10084b900(lVar7);
    iVar4 = (int)param_1[0xe];
  }
  lVar1 = param_2 + 8;
  if (*(int *)(param_2 + 0x14) < iVar4) {
    FUN_10084b900();
    iVar4 = (int)param_1[0xe];
  }
  lVar2 = param_2 + 0x20;
  if (*(int *)(param_2 + 0x2c) < iVar4) {
    FUN_10084b900(lVar2);
  }
  lVar3 = param_4 + 8;
  iVar4 = FUN_100858e10(lVar6,lVar3,param_1 + 0x10);
  if (((iVar4 == 0) || (iVar4 = FUN_10084bbb0(lVar7,1), iVar4 == 0)) ||
     ((iVar4 = (**(code **)(*param_1 + 0x108))(param_1,lVar2,lVar6,param_5), iVar4 == 0 ||
      (iVar4 = (**(code **)(*param_1 + 0x108))(param_1,lVar1,lVar2,param_5), iVar4 == 0))))
  goto LAB_100866952;
  iVar4 = FUN_100858bf0(lVar1,lVar1);
  if (iVar4 == 0) goto LAB_100866952;
  iVar4 = (int)param_3[1];
  lVar9 = *param_3;
  uVar5 = 0x8000000000000000;
  do {
    uVar14 = uVar5 >> 1;
    uVar16 = *(ulong *)(lVar9 + -8 + (long)iVar4 * 8) & uVar5;
    uVar5 = uVar14;
  } while (uVar16 == 0);
  iVar12 = iVar4 + -1;
  if (uVar14 == 0) {
    iVar12 = iVar4 + -2;
  }
  if (-1 < iVar12) {
    if (uVar14 == 0) {
      uVar14 = 0x8000000000000000;
    }
    lVar15 = (long)iVar12;
    do {
      uVar5 = *(ulong *)(lVar9 + lVar15 * 8);
      do {
        uVar16 = uVar14 & uVar5;
        FUN_10084c350(uVar16,lVar6,lVar1,(int)param_1[0xe]);
        FUN_10084c350(uVar16,lVar7,lVar2,(int)param_1[0xe]);
        FUN_10084ca60(param_5);
        uVar8 = FUN_10084cc20(param_5);
        lVar9 = FUN_10084cc20(param_5);
        if (((lVar9 == 0) || (lVar10 = FUN_10084b950(uVar8,lVar3), lVar10 == 0)) ||
           ((iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar1,lVar1,lVar7,param_5), iVar4 == 0
            || ((((iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar2,lVar2,lVar6,param_5),
                  iVar4 == 0 ||
                  (iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar9,lVar1,lVar2,param_5),
                  iVar4 == 0)) || (iVar4 = FUN_100858bf0(lVar2,lVar2,lVar1), iVar4 == 0)) ||
                ((iVar4 = (**(code **)(*param_1 + 0x108))(param_1,lVar2,lVar2,param_5), iVar4 == 0
                 || (iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar1,lVar2,uVar8,param_5),
                    iVar4 == 0)))))))) {
LAB_100866839:
          FUN_10084cb40(param_5);
          goto LAB_100866952;
        }
        iVar4 = FUN_100858bf0(lVar1,lVar1,lVar9);
        FUN_10084cb40(param_5);
        if (iVar4 == 0) goto LAB_100866952;
        FUN_10084ca60(param_5);
        lVar9 = FUN_10084cc20(param_5);
        if ((((lVar9 == 0) ||
             (iVar4 = (**(code **)(*param_1 + 0x108))(param_1,lVar6,lVar6,param_5), iVar4 == 0)) ||
            ((iVar4 = (**(code **)(*param_1 + 0x108))(param_1,lVar9,lVar7,param_5), iVar4 == 0 ||
             (((iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar7,lVar6,lVar9,param_5),
               iVar4 == 0 ||
               (iVar4 = (**(code **)(*param_1 + 0x108))(param_1,lVar6,lVar6,param_5), iVar4 == 0))
              || (iVar4 = (**(code **)(*param_1 + 0x108))(param_1,lVar9,lVar9,param_5), iVar4 == 0))
             )))) || (iVar4 = (**(code **)(*param_1 + 0x100))
                                        (param_1,lVar9,param_1 + 0x16,lVar9,param_5), iVar4 == 0))
        goto LAB_100866839;
        iVar4 = FUN_100858bf0(lVar6,lVar6,lVar9);
        FUN_10084cb40(param_5);
        if (iVar4 == 0) goto LAB_100866952;
        FUN_10084c350(uVar16,lVar6,lVar1,(int)param_1[0xe]);
        FUN_10084c350(uVar16,lVar7,lVar2,(int)param_1[0xe]);
        uVar14 = uVar14 >> 1;
      } while (uVar14 != 0);
      if (lVar15 < 1) break;
      lVar15 = lVar15 + -1;
      lVar9 = *param_3;
      uVar14 = 0x8000000000000000;
    } while( true );
  }
  if (*(int *)(lVar7 + 8) == 0) {
    FUN_10084bbb0(lVar1,0);
    FUN_10084bbb0(lVar2,0);
LAB_10086690e:
    iVar4 = FUN_10085c1f0(param_1,param_2);
    if (iVar4 == 0) goto LAB_100866952;
  }
  else {
    param_4 = param_4 + 0x20;
    if (*(int *)(param_2 + 0x28) == 0) {
      lVar6 = FUN_10084b950(lVar1,lVar3);
      if (lVar6 == 0) goto LAB_100866952;
      iVar4 = FUN_100858bf0(lVar2,lVar3,param_4);
      cVar13 = (iVar4 != 0) * '\x02';
    }
    else {
      FUN_10084ca60(param_5);
      uVar8 = FUN_10084cc20(param_5);
      uVar11 = FUN_10084cc20(param_5);
      lVar9 = FUN_10084cc20(param_5);
      cVar13 = '\0';
      if ((lVar9 != 0) && (iVar4 = FUN_10084bbb0(lVar9,1), cVar13 = '\0', iVar4 != 0)) {
        iVar4 = (**(code **)(*param_1 + 0x100))(param_1,uVar8,lVar7,lVar2,param_5);
        if (iVar4 == 0) {
          cVar13 = '\0';
        }
        else {
          iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar7,lVar7,lVar3,param_5);
          if (iVar4 == 0) {
            cVar13 = '\0';
          }
          else {
            iVar4 = FUN_100858bf0(lVar7,lVar7,lVar6);
            if (iVar4 == 0) {
              cVar13 = '\0';
            }
            else {
              iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar2,lVar2,lVar3,param_5);
              if (iVar4 == 0) {
                cVar13 = '\0';
              }
              else {
                iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar6,lVar2,lVar6,param_5);
                if (iVar4 == 0) {
                  cVar13 = '\0';
                }
                else {
                  iVar4 = FUN_100858bf0(lVar2,lVar2,lVar1);
                  if (iVar4 == 0) {
                    cVar13 = '\0';
                  }
                  else {
                    iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar2,lVar2,lVar7,param_5);
                    if (iVar4 == 0) {
                      cVar13 = '\0';
                    }
                    else {
                      iVar4 = (**(code **)(*param_1 + 0x108))(param_1,uVar11,lVar3,param_5);
                      if (iVar4 == 0) {
                        cVar13 = '\0';
                      }
                      else {
                        iVar4 = FUN_100858bf0(uVar11,uVar11,param_4);
                        if (iVar4 == 0) {
                          cVar13 = '\0';
                        }
                        else {
                          iVar4 = (**(code **)(*param_1 + 0x100))
                                            (param_1,uVar11,uVar11,uVar8,param_5);
                          if (iVar4 == 0) {
                            cVar13 = '\0';
                          }
                          else {
                            iVar4 = FUN_100858bf0(uVar11,uVar11,lVar2);
                            if (iVar4 == 0) {
                              cVar13 = '\0';
                            }
                            else {
                              iVar4 = (**(code **)(*param_1 + 0x100))
                                                (param_1,uVar8,uVar8,lVar3,param_5);
                              if (iVar4 == 0) {
                                cVar13 = '\0';
                              }
                              else {
                                iVar4 = (**(code **)(*param_1 + 0x110))
                                                  (param_1,uVar8,lVar9,uVar8,param_5);
                                if (iVar4 == 0) {
                                  cVar13 = '\0';
                                }
                                else {
                                  iVar4 = (**(code **)(*param_1 + 0x100))
                                                    (param_1,uVar11,uVar8,uVar11,param_5);
                                  if (iVar4 == 0) {
                                    cVar13 = '\0';
                                  }
                                  else {
                                    iVar4 = (**(code **)(*param_1 + 0x100))
                                                      (param_1,lVar1,lVar6,uVar8,param_5);
                                    if (iVar4 == 0) {
                                      cVar13 = '\0';
                                    }
                                    else {
                                      iVar4 = FUN_100858bf0(lVar2,lVar1,lVar3);
                                      if (iVar4 == 0) {
                                        cVar13 = '\0';
                                      }
                                      else {
                                        iVar4 = (**(code **)(*param_1 + 0x100))
                                                          (param_1,lVar2,lVar2,uVar11,param_5);
                                        cVar13 = '\0';
                                        if (iVar4 != 0) {
                                          iVar4 = FUN_100858bf0(lVar2,lVar2,param_4);
                                          cVar13 = (iVar4 != 0) * '\x02';
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
          }
        }
      }
      FUN_10084cb40(param_5);
    }
    if (cVar13 == '\0') goto LAB_100866952;
    if (cVar13 == '\x01') goto LAB_10086690e;
    iVar4 = FUN_10084bbb0(param_2 + 0x38,1);
    if (iVar4 == 0) goto LAB_100866952;
    *(undefined4 *)(param_2 + 0x50) = 1;
  }
  FUN_10084c230(lVar1,0);
  FUN_10084c230(lVar2,0);
  local_44 = 1;
LAB_100866952:
  FUN_10084cb40(param_5);
  return (ulong)local_44;
}

