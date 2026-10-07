
bool FUN_100860950(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  long *local_60;
  long local_50;
  long *local_48;
  long *local_40;
  long local_38;
  
  FUN_10085c070(param_1 + 0x60,FUN_1008604f0,FUN_100860530,FUN_1008605b0);
  if (param_1 == 0) {
    return false;
  }
  local_48 = (long *)FUN_10081ddd0(0x38,"ec_mult.c",0x67);
  if (local_48 == (long *)0x0) {
    FUN_100887ce0(0x10,0xc4,0x41,"ec_mult.c",0x69);
    return false;
  }
  *local_48 = param_1;
  local_48[1] = 8;
  local_48[2] = 0;
  local_48[3] = 4;
  local_48[5] = 0;
  local_48[4] = 0;
  *(undefined4 *)(local_48 + 6) = 1;
  lVar3 = FUN_10085b9c0(param_1);
  if (lVar3 == 0) {
    FUN_100887ce0(0x10,0xbc,0x71,"ec_mult.c",0x2f9);
    local_50 = 0;
    local_38 = 0;
    lVar4 = 0;
    local_40 = (long *)0x0;
    bVar14 = false;
LAB_100860f57:
    if (param_2 != 0) {
LAB_100860f62:
      FUN_10084cb40(param_2);
    }
    if (local_50 != 0) {
      FUN_10084c8b0(local_50);
    }
    if (local_48 == (long *)0x0) goto LAB_100860fe5;
  }
  else {
    local_50 = 0;
    if (param_2 != 0) {
LAB_100860a25:
      FUN_10084ca60(param_2);
      lVar4 = FUN_10084cc20(param_2);
      if ((lVar4 == 0) || (iVar1 = FUN_10085b9d0(param_1,lVar4,param_2), iVar1 == 0)) {
        local_38 = 0;
        local_40 = (long *)0x0;
        lVar4 = 0;
        bVar14 = false;
      }
      else {
        if (*(int *)(lVar4 + 8) != 0) {
          uVar2 = FUN_10084b410(lVar4);
          bVar5 = 6;
          if (uVar2 < 2000) {
            lVar6 = 5;
            if (uVar2 < 800) {
              bVar5 = 4;
              if ((uVar2 < 300) && (bVar5 = 3, uVar2 < 0x46)) {
                bVar5 = (0x13 < uVar2) + 1;
              }
              goto LAB_100860aaf;
            }
          }
          else {
LAB_100860aaf:
            lVar6 = (ulong)(4 < bVar5) * 2 + 4;
          }
          uVar7 = (long)(int)uVar2 + 7U >> 3;
          bVar5 = (byte)(lVar6 + -1);
          uVar12 = uVar7 << (bVar5 & 0x3f);
          local_40 = (long *)FUN_10081ddd0((int)uVar12 * 8 + 8,"ec_mult.c",0x325);
          if (local_40 == (long *)0x0) {
            uVar11 = 0x327;
LAB_100860f3f:
            FUN_100887ce0(0x10,0xbc,0x41,"ec_mult.c",uVar11);
            local_38 = 0;
            lVar4 = 0;
            bVar14 = false;
          }
          else {
            local_40[uVar12] = 0;
            lVar4 = FUN_10085b6e0(param_1);
            uVar8 = 0;
            if (uVar12 != 0) {
              do {
                local_40[uVar8] = lVar4;
                if (lVar4 == 0) {
                  uVar11 = 0x32f;
                  goto LAB_100860f3f;
                }
                uVar8 = uVar8 + 1;
                lVar4 = FUN_10085b6e0(param_1);
              } while (uVar8 < uVar12);
            }
            if ((lVar4 == 0) || (local_38 = FUN_10085b6e0(param_1), local_38 == 0)) {
              FUN_100887ce0(0x10,0xbc,0x41,"ec_mult.c",0x335);
              local_38 = 0;
              bVar14 = false;
            }
            else {
              iVar1 = FUN_10085b7b0(local_38,lVar3);
              bVar14 = false;
              if (iVar1 != 0) {
                if (uVar7 != 0) {
                  uVar8 = 0;
                  local_60 = local_40;
                  do {
                    iVar1 = FUN_10085c500(param_1,lVar4,local_38,param_2);
                    if ((iVar1 == 0) || (iVar1 = FUN_10085b7b0(*local_60,local_38), iVar1 == 0)) {
LAB_100861051:
                      bVar14 = false;
                      goto LAB_100860f57;
                    }
                    plVar10 = local_60 + 1;
                    uVar13 = 1;
                    if (lVar6 + -1 != 0) {
                      do {
                        plVar9 = plVar10;
                        iVar1 = FUN_10085c490(param_1,*plVar9,lVar4,*local_60,param_2);
                        if (iVar1 == 0) {
                          bVar14 = false;
                          goto LAB_100860f57;
                        }
                        uVar13 = uVar13 + 1;
                        plVar10 = local_60 + 2;
                        local_60 = plVar9;
                      } while (uVar13 < (ulong)(1L << (bVar5 & 0x3f)));
                    }
                    if ((uVar8 < uVar7 - 1) &&
                       ((((iVar1 = FUN_10085c500(param_1,local_38,lVar4,param_2), iVar1 == 0 ||
                          (iVar1 = FUN_10085c500(param_1,local_38,local_38,param_2), iVar1 == 0)) ||
                         (iVar1 = FUN_10085c500(param_1,local_38,local_38,param_2), iVar1 == 0)) ||
                        (((iVar1 = FUN_10085c500(param_1,local_38,local_38,param_2), iVar1 == 0 ||
                          (iVar1 = FUN_10085c500(param_1,local_38,local_38,param_2), iVar1 == 0)) ||
                         ((iVar1 = FUN_10085c500(param_1,local_38,local_38,param_2), iVar1 == 0 ||
                          (iVar1 = FUN_10085c500(param_1,local_38,local_38,param_2), iVar1 == 0)))))
                        ))) goto LAB_100861051;
                    uVar8 = uVar8 + 1;
                    local_60 = plVar10;
                  } while (uVar8 < uVar7);
                }
                iVar1 = FUN_10085c6f0(param_1,uVar12,local_40,param_2);
                if (iVar1 == 0) {
                  bVar14 = false;
                }
                else {
                  *local_48 = param_1;
                  local_48[1] = 8;
                  local_48[2] = uVar7;
                  local_48[3] = lVar6;
                  local_48[4] = (long)local_40;
                  local_48[5] = uVar12;
                  iVar1 = FUN_10085b610(param_1 + 0x60,local_48,FUN_1008604f0,FUN_100860530,
                                        FUN_1008605b0);
                  bVar14 = iVar1 != 0;
                  if (bVar14) {
                    local_48 = (long *)0x0;
                  }
                  local_40 = (long *)0x0;
                }
              }
            }
          }
          goto LAB_100860f57;
        }
        FUN_100887ce0(0x10,0xbc,0x72,"ec_mult.c",0x30b);
        bVar14 = false;
        local_40 = (long *)0x0;
        lVar4 = 0;
        local_38 = 0;
      }
      goto LAB_100860f62;
    }
    param_2 = FUN_10084c820();
    bVar14 = false;
    local_50 = param_2;
    if (param_2 != 0) goto LAB_100860a25;
    local_40 = (long *)0x0;
    lVar4 = 0;
    local_38 = 0;
  }
  iVar1 = FUN_10081d580(local_48 + 6,0xffffffff,0x24,"ec_mult.c",0x89);
  if (iVar1 < 1) {
    plVar10 = (long *)local_48[4];
    if (plVar10 != (long *)0x0) {
      if (*plVar10 != 0) {
        do {
          plVar10 = plVar10 + 1;
          FUN_10085b080();
        } while (*plVar10 != 0);
        plVar10 = (long *)local_48[4];
      }
      FUN_10081e1a0(plVar10);
    }
    FUN_10081e1a0(local_48);
  }
LAB_100860fe5:
  if (local_40 != (long *)0x0) {
    lVar3 = *local_40;
    plVar10 = local_40;
    while (lVar3 != 0) {
      plVar10 = plVar10 + 1;
      FUN_10085b080();
      lVar3 = *plVar10;
    }
    FUN_10081e1a0(local_40);
  }
  if (lVar4 != 0) {
    FUN_10085b080(lVar4);
  }
  if (local_38 != 0) {
    FUN_10085b080();
  }
  return bVar14;
}

