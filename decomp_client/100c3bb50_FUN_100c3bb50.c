
bool FUN_100c3bb50(long param_1,long param_2)

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
  
  FUN_100c37270(param_1 + 0x60,FUN_100c3b6f0,FUN_100c3b730,FUN_100c3b7b0);
  if (param_1 == 0) {
    return false;
  }
  local_48 = (long *)FUN_100bf3540(0x38,"ec_mult.c",0x67);
  if (local_48 == (long *)0x0) {
    FUN_100c62ee0(0x10,0xc4,0x41,"ec_mult.c",0x69);
    return false;
  }
  *local_48 = param_1;
  local_48[1] = 8;
  local_48[2] = 0;
  local_48[3] = 4;
  local_48[5] = 0;
  local_48[4] = 0;
  *(undefined4 *)(local_48 + 6) = 1;
  lVar3 = FUN_100c36bc0(param_1);
  if (lVar3 == 0) {
    FUN_100c62ee0(0x10,0xbc,0x71,"ec_mult.c",0x2f9);
    local_50 = 0;
    local_38 = 0;
    lVar4 = 0;
    local_40 = (long *)0x0;
    bVar14 = false;
LAB_100c3c157:
    if (param_2 != 0) {
LAB_100c3c162:
      FUN_100c27d40(param_2);
    }
    if (local_50 != 0) {
      FUN_100c27ab0(local_50);
    }
    if (local_48 == (long *)0x0) goto LAB_100c3c1e5;
  }
  else {
    local_50 = 0;
    if (param_2 != 0) {
LAB_100c3bc25:
      FUN_100c27c60(param_2);
      lVar4 = FUN_100c27e20(param_2);
      if ((lVar4 == 0) || (iVar1 = FUN_100c36bd0(param_1,lVar4,param_2), iVar1 == 0)) {
        local_38 = 0;
        local_40 = (long *)0x0;
        lVar4 = 0;
        bVar14 = false;
      }
      else {
        if (*(int *)(lVar4 + 8) != 0) {
          uVar2 = FUN_100c26610(lVar4);
          bVar5 = 6;
          if (uVar2 < 2000) {
            lVar6 = 5;
            if (uVar2 < 800) {
              bVar5 = 4;
              if ((uVar2 < 300) && (bVar5 = 3, uVar2 < 0x46)) {
                bVar5 = (0x13 < uVar2) + 1;
              }
              goto LAB_100c3bcaf;
            }
          }
          else {
LAB_100c3bcaf:
            lVar6 = (ulong)(4 < bVar5) * 2 + 4;
          }
          uVar7 = (long)(int)uVar2 + 7U >> 3;
          bVar5 = (byte)(lVar6 + -1);
          uVar12 = uVar7 << (bVar5 & 0x3f);
          local_40 = (long *)FUN_100bf3540((int)uVar12 * 8 + 8,"ec_mult.c",0x325);
          if (local_40 == (long *)0x0) {
            uVar11 = 0x327;
LAB_100c3c13f:
            FUN_100c62ee0(0x10,0xbc,0x41,"ec_mult.c",uVar11);
            local_38 = 0;
            lVar4 = 0;
            bVar14 = false;
          }
          else {
            local_40[uVar12] = 0;
            lVar4 = FUN_100c368e0(param_1);
            uVar8 = 0;
            if (uVar12 != 0) {
              do {
                local_40[uVar8] = lVar4;
                if (lVar4 == 0) {
                  uVar11 = 0x32f;
                  goto LAB_100c3c13f;
                }
                uVar8 = uVar8 + 1;
                lVar4 = FUN_100c368e0(param_1);
              } while (uVar8 < uVar12);
            }
            if ((lVar4 == 0) || (local_38 = FUN_100c368e0(param_1), local_38 == 0)) {
              FUN_100c62ee0(0x10,0xbc,0x41,"ec_mult.c",0x335);
              local_38 = 0;
              bVar14 = false;
            }
            else {
              iVar1 = FUN_100c369b0(local_38,lVar3);
              bVar14 = false;
              if (iVar1 != 0) {
                if (uVar7 != 0) {
                  uVar8 = 0;
                  local_60 = local_40;
                  do {
                    iVar1 = FUN_100c37700(param_1,lVar4,local_38,param_2);
                    if ((iVar1 == 0) || (iVar1 = FUN_100c369b0(*local_60,local_38), iVar1 == 0)) {
LAB_100c3c251:
                      bVar14 = false;
                      goto LAB_100c3c157;
                    }
                    plVar10 = local_60 + 1;
                    uVar13 = 1;
                    if (lVar6 + -1 != 0) {
                      do {
                        plVar9 = plVar10;
                        iVar1 = FUN_100c37690(param_1,*plVar9,lVar4,*local_60,param_2);
                        if (iVar1 == 0) {
                          bVar14 = false;
                          goto LAB_100c3c157;
                        }
                        uVar13 = uVar13 + 1;
                        plVar10 = local_60 + 2;
                        local_60 = plVar9;
                      } while (uVar13 < (ulong)(1L << (bVar5 & 0x3f)));
                    }
                    if ((uVar8 < uVar7 - 1) &&
                       ((((iVar1 = FUN_100c37700(param_1,local_38,lVar4,param_2), iVar1 == 0 ||
                          (iVar1 = FUN_100c37700(param_1,local_38,local_38,param_2), iVar1 == 0)) ||
                         (iVar1 = FUN_100c37700(param_1,local_38,local_38,param_2), iVar1 == 0)) ||
                        (((iVar1 = FUN_100c37700(param_1,local_38,local_38,param_2), iVar1 == 0 ||
                          (iVar1 = FUN_100c37700(param_1,local_38,local_38,param_2), iVar1 == 0)) ||
                         ((iVar1 = FUN_100c37700(param_1,local_38,local_38,param_2), iVar1 == 0 ||
                          (iVar1 = FUN_100c37700(param_1,local_38,local_38,param_2), iVar1 == 0)))))
                        ))) goto LAB_100c3c251;
                    uVar8 = uVar8 + 1;
                    local_60 = plVar10;
                  } while (uVar8 < uVar7);
                }
                iVar1 = FUN_100c378f0(param_1,uVar12,local_40,param_2);
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
                  iVar1 = FUN_100c36810(param_1 + 0x60,local_48,FUN_100c3b6f0,FUN_100c3b730,
                                        FUN_100c3b7b0);
                  bVar14 = iVar1 != 0;
                  if (bVar14) {
                    local_48 = (long *)0x0;
                  }
                  local_40 = (long *)0x0;
                }
              }
            }
          }
          goto LAB_100c3c157;
        }
        FUN_100c62ee0(0x10,0xbc,0x72,"ec_mult.c",0x30b);
        bVar14 = false;
        local_40 = (long *)0x0;
        lVar4 = 0;
        local_38 = 0;
      }
      goto LAB_100c3c162;
    }
    param_2 = FUN_100c27a20();
    bVar14 = false;
    local_50 = param_2;
    if (param_2 != 0) goto LAB_100c3bc25;
    local_40 = (long *)0x0;
    lVar4 = 0;
    local_38 = 0;
  }
  iVar1 = FUN_100bf2cf0(local_48 + 6,0xffffffff,0x24,"ec_mult.c",0x89);
  if (iVar1 < 1) {
    plVar10 = (long *)local_48[4];
    if (plVar10 != (long *)0x0) {
      if (*plVar10 != 0) {
        do {
          plVar10 = plVar10 + 1;
          FUN_100c36280();
        } while (*plVar10 != 0);
        plVar10 = (long *)local_48[4];
      }
      FUN_100bf3910(plVar10);
    }
    FUN_100bf3910(local_48);
  }
LAB_100c3c1e5:
  if (local_40 != (long *)0x0) {
    lVar3 = *local_40;
    plVar10 = local_40;
    while (lVar3 != 0) {
      plVar10 = plVar10 + 1;
      FUN_100c36280();
      lVar3 = *plVar10;
    }
    FUN_100bf3910(local_40);
  }
  if (lVar4 != 0) {
    FUN_100c36280(lVar4);
  }
  if (local_38 != 0) {
    FUN_100c36280();
  }
  return bVar14;
}

