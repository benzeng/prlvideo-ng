
ulong FUN_1007f55c0(uint *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte *local_40;
  int local_34;
  
  uVar3 = (**(code **)(*(long *)(param_1 + 2) + 0x60))
                    (param_1,0x1150,0x1151,0xffffffff,*(undefined8 *)(param_1 + 0x6e),&local_34);
  if (local_34 == 0) goto LAB_1007f5b2a;
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar4 + 0x3c8) = 0;
  if (*(int *)(lVar4 + 0x3a0) == 0xd) {
    if (((int)*param_1 < 0x301) || ((*(byte *)(*(long *)(lVar4 + 0x3a8) + 0x20) & 4) == 0)) {
      pbVar14 = *(byte **)(param_1 + 0x16);
      lVar4 = FUN_100884d30(FUN_1007f7920);
      if (lVar4 != 0) {
        bVar1 = *pbVar14;
        uVar6 = 9;
        if (bVar1 < 10) {
          uVar6 = (uint)bVar1;
        }
        if (uVar6 != 0) {
          uVar8 = 8;
          if (bVar1 < 9) {
            uVar8 = bVar1 - 1;
          }
          lVar5 = 0;
          if ((uVar8 + 1 & 3) != 0) {
            lVar5 = 0;
            do {
              *(byte *)(*(long *)(param_1 + 0x20) + 0x3d0 + lVar5) = pbVar14[lVar5 + 1];
              lVar5 = lVar5 + 1;
            } while ((uVar8 + 1 & 3) != (uint)lVar5);
          }
          if (2 < uVar8) {
            lVar12 = 0;
            do {
              *(byte *)(lVar12 + 0x3d0 + *(long *)(param_1 + 0x20) + lVar5) =
                   pbVar14[lVar12 + lVar5 + 1];
              *(byte *)(lVar12 + 0x3d1 + *(long *)(param_1 + 0x20) + lVar5) =
                   pbVar14[lVar12 + lVar5 + 2];
              *(byte *)(lVar12 + 0x3d2 + *(long *)(param_1 + 0x20) + lVar5) =
                   pbVar14[lVar12 + lVar5 + 3];
              *(byte *)(lVar12 + 0x3d3 + *(long *)(param_1 + 0x20) + lVar5) =
                   pbVar14[lVar12 + lVar5 + 4];
              lVar12 = lVar12 + 4;
            } while ((-4 - uVar8) + (int)lVar5 + (int)lVar12 != -3);
          }
        }
        uVar10 = (ulong)uVar6;
        lVar5 = uVar10 + 1;
        pbVar7 = pbVar14 + uVar10 + 1;
        if (((int)*param_1 < 0x303) || ((*param_1 & 0xffffff00) != 0x300)) {
LAB_1007f58c6:
          uVar10 = (ulong)CONCAT11(*pbVar7,pbVar14[lVar5 + 1]);
          if (uVar10 + 2 + lVar5 == uVar3) {
            if (uVar10 != 0) {
              uVar3 = 0;
              pbVar14 = pbVar14 + lVar5 + 2;
              do {
                uVar11 = (ulong)CONCAT11(*pbVar14,pbVar14[1]);
                if (uVar10 < uVar3 + 2 + uVar11) {
                  if ((*(byte *)((long)param_1 + 0x1ab) & 0x20) == 0) {
                    FUN_1007fd650(param_1,2,0x32);
                    uVar9 = 0x84;
                    uVar13 = 0x820;
                    goto LAB_1007f5b01;
                  }
LAB_1007f5a62:
                  FUN_100888070();
                  break;
                }
                local_40 = pbVar14 + 2;
                lVar5 = FUN_1008a1150(0,&local_40,uVar11);
                pbVar7 = local_40;
                if (lVar5 == 0) {
                  if ((*(byte *)((long)param_1 + 0x1ab) & 0x20) != 0) goto LAB_1007f5a62;
                  FUN_1007fd650(param_1,2,0x32);
                  uVar9 = 0xd;
                  uVar13 = 0x82c;
                  goto LAB_1007f5b01;
                }
                if (local_40 != pbVar14 + uVar11 + 2) {
                  FUN_1007fd650(param_1,2,0x32);
                  uVar9 = 0x83;
                  uVar13 = 0x834;
                  goto LAB_1007f5b01;
                }
                iVar2 = FUN_1008852e0(lVar4,lVar5);
                if (iVar2 == 0) {
                  uVar9 = 0x41;
                  uVar13 = 0x838;
                  goto LAB_1007f5b01;
                }
                uVar3 = uVar3 + uVar11 + 2;
                pbVar14 = pbVar7;
              } while (uVar3 < uVar10);
            }
            lVar5 = *(long *)(param_1 + 0x20);
            *(undefined4 *)(lVar5 + 0x3c8) = 1;
            *(uint *)(lVar5 + 0x3cc) = uVar6;
            if (*(long *)(lVar5 + 0x3e0) != 0) {
              FUN_100885590(*(long *)(lVar5 + 0x3e0),FUN_1008a11b0);
              lVar5 = *(long *)(param_1 + 0x20);
            }
            *(long *)(lVar5 + 0x3e0) = lVar4;
            uVar3 = 1;
            goto LAB_1007f5b2a;
          }
          FUN_1007fd650(param_1,2,0x32);
          FUN_100887ce0(0x14,0x87,0x9f,"s3_clnt.c",0x816);
        }
        else {
          uVar11 = (ulong)CONCAT11(pbVar14[uVar10 + 1],pbVar14[uVar10 + 2]);
          if (uVar3 < uVar11 + 5 + uVar10) {
            FUN_1007fd650(param_1,2,0x32);
            uVar9 = 0x92;
            uVar13 = 0x7fd;
          }
          else {
            if (((pbVar14[uVar10 + 2] & 1) == 0) &&
               (iVar2 = FUN_100803780(param_1,pbVar14 + uVar10 + 3,uVar11), iVar2 != 0)) {
              lVar5 = uVar11 + 3 + uVar10;
              pbVar7 = pbVar14 + lVar5;
              goto LAB_1007f58c6;
            }
            FUN_1007fd650(param_1,2,0x32);
            uVar9 = 0x168;
            uVar13 = 0x803;
          }
LAB_1007f5b01:
          FUN_100887ce0(0x14,0x87,uVar9,"s3_clnt.c",uVar13);
        }
        uVar3 = 0;
        param_1[0x12] = 5;
        if (lVar4 != 0) {
          FUN_100885590(lVar4,FUN_1008a11b0);
        }
        goto LAB_1007f5b2a;
      }
      uVar9 = 0x41;
      uVar13 = 0x7e9;
    }
    else {
      FUN_1007fd650(param_1,2,10);
      uVar9 = 0xe8;
      uVar13 = 0x7e1;
    }
LAB_1007f5882:
    FUN_100887ce0(0x14,0x87,uVar9,"s3_clnt.c",uVar13);
  }
  else {
    if (*(int *)(lVar4 + 0x3a0) != 0xe) {
      FUN_1007fd650(param_1,2,10);
      uVar9 = 0x106;
      uVar13 = 0x7d8;
      goto LAB_1007f5882;
    }
    *(undefined4 *)(lVar4 + 0x3c4) = 1;
    uVar3 = 1;
    if ((*(long *)(lVar4 + 0x1b8) == 0) || (iVar2 = FUN_1007fa710(param_1), iVar2 != 0))
    goto LAB_1007f5b2a;
  }
  param_1[0x12] = 5;
  uVar3 = 0;
LAB_1007f5b2a:
  return uVar3 & 0xffffffff;
}

