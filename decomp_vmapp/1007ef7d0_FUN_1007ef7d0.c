
ulong FUN_1007ef7d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *local_40;
  int local_34;
  
  uVar3 = (**(code **)(*(long *)(param_1 + 2) + 0x60))
                    (param_1,0x2180,0x2181,0xffffffff,*(undefined8 *)(param_1 + 0x6e),&local_34);
  if (local_34 == 0) goto LAB_1007efc2e;
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(lVar4 + 0x3a0) == 0xb) {
    local_40 = *(byte **)(param_1 + 0x16);
    lVar4 = FUN_100884e10();
    if (lVar4 != 0) {
      uVar9 = (ulong)local_40[2] | (ulong)local_40[1] << 8 | (ulong)*local_40 << 0x10;
      pbVar12 = local_40 + 3;
      if (uVar9 + 3 == uVar3) {
        if (uVar9 == 0) {
LAB_1007ef983:
          local_40 = pbVar12;
          iVar1 = FUN_100885600(lVar4);
          if (iVar1 < 1) {
            if (*param_1 == 0x300) {
              uVar6 = 0xb0;
              uVar10 = 0xcc9;
            }
            else {
              if ((param_1[0x50] & 3U) != 3) {
                if (*(long *)(*(long *)(param_1 + 0x20) + 0x1b8) != 0) {
                  iVar1 = FUN_1007fa710(param_1);
                  lVar5 = 0;
                  if (iVar1 == 0) {
                    uVar2 = 0x50;
                    goto LAB_1007efb5c;
                  }
                }
                goto LAB_1007efc63;
              }
              uVar6 = 199;
              uVar10 = 0xcd0;
            }
            FUN_100887ce0(0x14,0x89,uVar6,"s3_srvr.c",uVar10);
            uVar2 = 0x28;
            lVar5 = 0;
          }
          else {
            iVar1 = FUN_100812590(param_1,lVar4);
            if (0 < iVar1) {
LAB_1007efc63:
              if (*(long *)(*(long *)(param_1 + 0x4c) + 0xb0) != 0) {
                FUN_1008a17f0();
              }
              uVar6 = FUN_100885450(lVar4);
              lVar5 = *(long *)(param_1 + 0x4c);
              *(undefined8 *)(lVar5 + 0xb0) = uVar6;
              *(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)(param_1 + 0x60);
              plVar7 = *(long **)(lVar5 + 0xa8);
              if (plVar7 == (long *)0x0) {
                plVar7 = (long *)FUN_1008123f0();
                lVar5 = *(long *)(param_1 + 0x4c);
                *(long **)(lVar5 + 0xa8) = plVar7;
                if (plVar7 == (long *)0x0) {
                  FUN_100887ce0(0x14,0x89,0x41,"s3_srvr.c",0xcef);
                  param_1[0x12] = 5;
                  goto LAB_1007efc15;
                }
              }
              if (*plVar7 != 0) {
                FUN_100885590(*plVar7,FUN_1008a17f0);
                lVar5 = *(long *)(param_1 + 0x4c);
              }
              **(long **)(lVar5 + 0xa8) = lVar4;
              uVar3 = 1;
              goto LAB_1007efc2e;
            }
            uVar2 = FUN_1007fe5b0(*(undefined8 *)(param_1 + 0x60));
            FUN_100887ce0(0x14,0x89,0xb2,"s3_srvr.c",0xcde);
            lVar5 = 0;
          }
        }
        else {
          uVar8 = (ulong)local_40[5] | (ulong)local_40[4] << 8 | (ulong)local_40[3] << 0x10;
          uVar11 = 0;
          uVar3 = uVar8 + 3;
          local_40 = local_40 + 6;
          while (uVar3 <= uVar9) {
            lVar5 = FUN_1008a1790(0,&local_40,uVar8);
            if (lVar5 == 0) {
              FUN_100887ce0(0x14,0x89,0xd,"s3_srvr.c",0xcb3);
              param_1[0x12] = 5;
              goto LAB_1007efc15;
            }
            if (local_40 != pbVar12 + uVar8 + 3) {
              FUN_100887ce0(0x14,0x89,0x87,"s3_srvr.c",0xcb9);
              goto LAB_1007efaea;
            }
            iVar1 = FUN_1008852e0(lVar4,lVar5);
            if (iVar1 == 0) {
              FUN_100887ce0(0x14,0x89,0x41,"s3_srvr.c",0xcbd);
              param_1[0x12] = 5;
              goto LAB_1007efc0d;
            }
            uVar11 = uVar11 + uVar8 + 3;
            pbVar12 = local_40;
            if (uVar9 <= uVar11) goto LAB_1007ef983;
            uVar8 = (ulong)local_40[2] | (ulong)local_40[1] << 8 | (ulong)*local_40 << 0x10;
            local_40 = local_40 + 3;
            uVar3 = uVar11 + 3 + uVar8;
          }
          FUN_100887ce0(0x14,0x89,0x87,"s3_srvr.c",0xcac);
          lVar5 = 0;
LAB_1007efaea:
          uVar2 = 0x32;
        }
      }
      else {
        local_40 = pbVar12;
        FUN_100887ce0(0x14,0x89,0x9f,"s3_srvr.c",0xca4);
        uVar2 = 0x32;
        lVar5 = 0;
      }
      goto LAB_1007efb5c;
    }
    FUN_100887ce0(0x14,0x89,0x41,"s3_srvr.c",0xc9d);
    param_1[0x12] = 5;
  }
  else {
    if (*(int *)(lVar4 + 0x3a0) == 0x10) {
      if ((param_1[0x50] & 3U) != 3) {
        if ((*param_1 < 0x301) || (*(int *)(lVar4 + 0x418) == 0)) {
          *(undefined4 *)(lVar4 + 0x3c4) = 1;
          uVar3 = 1;
          goto LAB_1007efc2e;
        }
        uVar6 = 0xe9;
        uVar10 = 0xc8d;
        goto LAB_1007efa02;
      }
      FUN_100887ce0(0x14,0x89,199,"s3_srvr.c",0xc84);
      uVar2 = 0x28;
    }
    else {
      uVar6 = 0x106;
      uVar10 = 0xc97;
LAB_1007efa02:
      FUN_100887ce0(0x14,0x89,uVar6,"s3_srvr.c",uVar10);
      uVar2 = 10;
    }
    lVar5 = 0;
    lVar4 = 0;
LAB_1007efb5c:
    FUN_1007fd650(param_1,2,uVar2);
    param_1[0x12] = 5;
    if (lVar5 != 0) {
LAB_1007efc0d:
      FUN_1008a17f0(lVar5);
    }
  }
LAB_1007efc15:
  uVar3 = 0xffffffff;
  if (lVar4 != 0) {
    FUN_100885590(lVar4,FUN_1008a17f0);
  }
LAB_1007efc2e:
  return uVar3 & 0xffffffff;
}

