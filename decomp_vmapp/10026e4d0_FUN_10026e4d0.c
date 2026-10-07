
void FUN_10026e4d0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 local_12c8 [24];
  undefined1 local_12b0 [24];
  void *local_1298;
  void *pvStack_1290;
  undefined8 local_1288;
  undefined8 local_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  long local_1258;
  code *pcStack_1250;
  code *local_1248;
  ulong uStack_1240;
  long local_1238;
  long *plStack_1230;
  ulong local_1228;
  long *plStack_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  undefined4 local_1198;
  long local_1190;
  undefined8 local_1188;
  undefined4 *local_1180;
  undefined4 local_1178 [2];
  undefined8 local_1170;
  long local_950;
  ulong local_948;
  undefined4 local_940;
  uint local_93c;
  uint local_938;
  undefined1 local_930 [32];
  undefined8 local_910;
  undefined1 local_868 [2104];
  
  lVar7 = FUN_100257d80();
  uVar6 = *(uint *)(param_1 + 0x12e8);
  if ((*(long *)(param_1 + 0x1278) != 0) &&
     ((*(uint *)(*(long *)(param_1 + 0x1278) + 0x10) & 1) != 0)) {
    lVar1 = param_1 + 0xa48;
    FUN_1003fea50(lVar1);
    do {
      FUN_1003fea80(lVar1,param_1 + 0x68);
      iVar5 = FUN_1003fea50(lVar1);
    } while (iVar5 != 0);
  }
  lVar1 = param_1 + 0x8d8;
  FUN_100402c70(lVar1,0);
  lVar11 = (ulong)uVar6 * 0x538;
  if (*(int *)(lVar7 + 0x2debc + lVar11) == 1) {
    uVar8 = FUN_1007dc310();
    iVar5 = *(int *)(lVar7 + 0x2ded4 + lVar11);
    iVar2 = *(int *)(lVar7 + 0x2dec0 + lVar11);
    if (iVar2 == 0) {
      uVar9 = *(ulong *)(param_1 + 0x90);
    }
    else {
      uVar9 = (ulong)*(uint *)(lVar7 + 0x2dec0 + lVar11);
    }
    lVar3 = *(long *)(lVar7 + 0x2dee0 + lVar11);
    uVar6 = *(uint *)(lVar7 + 0x2ded0 + lVar11);
    uVar13 = (ulong)uVar6;
    FUN_10025b2f0(param_1 + 0x68,(iVar5 == 2) + '\x01');
    if (iVar5 - 1U < 2) {
      local_93c = (uint)(iVar5 == 2);
      local_1190 = DAT_1011c3688;
      local_1188 = *(undefined8 *)(*(long *)(DAT_1011c3688 + 0x60) + 0x20);
      local_1180 = local_1178;
      local_1178[0] = 0;
      local_1170 = 0;
      if (iVar2 == 0) {
        local_93c = iVar5 == 2 | 0x200;
        local_940 = 1;
      }
      local_950 = lVar3;
      local_948 = uVar9;
      local_938 = uVar6;
      if (DAT_1011ccc18 != (code *)0x0) {
        if (iVar5 == 1) {
          lVar10 = 3;
        }
        else {
          lVar10 = 5;
        }
        (*DAT_1011ccc18)(*(undefined4 *)(lVar7 + 0x2deb4 + lVar11),0x14,
                         lVar3 << 0x20 | (uVar13 & 0xffffff) << 8 | lVar10 + (ulong)(iVar2 == 0));
        uVar13 = (ulong)local_938;
      }
      local_11f8 = 0;
      uStack_11f0 = 0;
      local_1208 = 0;
      uStack_1200 = 0;
      local_1218 = 0;
      uStack_1210 = 0;
      local_11e8 = 0;
      local_1198 = 0;
      local_1248 = FUN_10026d340;
      pcStack_1250 = FUN_10026d360;
      plStack_1230 = &local_1258;
      plStack_1220 = &local_950;
      local_1228 = (ulong)local_93c;
      local_1238 = local_950 * *(long *)(param_1 + 0x920);
      local_1258 = param_1;
      uStack_1240 = uVar13;
      FUN_1004035a0(lVar1,plStack_1230,*(undefined8 *)(param_1 + 0xa8),8000000);
      local_1228 = local_1228 | 0x1000;
      FUN_10026d390(param_1,&local_1258);
      FUN_10008d470(&local_1190);
    }
    else if (iVar5 == 0xc) {
      if (DAT_1011ccc18 != (code *)0x0) {
        (*DAT_1011ccc18)(*(undefined4 *)(lVar7 + 0x2deb4 + lVar11),0x14,7);
      }
    }
    else if (iVar5 == 0xb) {
      ___bzero(local_930,0x900);
      local_910 = 0xffffffffffffffff;
      if (DAT_1011ccc18 != (code *)0x0) {
        (*DAT_1011ccc18)(*(undefined4 *)(lVar7 + 0x2deb4 + lVar11),0x14,1);
      }
      FUN_1004035a0(lVar1,local_930,*(undefined8 *)(param_1 + 0xa8),13000000);
      FUN_100403020(lVar1,0,0);
      FUN_1004033b0(lVar1,local_930);
      FUN_10008d470(local_868);
    }
    else {
      FUN_1008e3970("","LocalDevices",0,"Unknown type of Hdd operation");
      uVar4 = DAT_1011c3650;
      local_1278 = 0;
      uStack_1270 = 0;
      local_1268 = 0;
      local_1298 = (void *)0x0;
      pvStack_1290 = (void *)0x0;
      local_1288 = 0;
      FUN_10002ddb0(local_12c8,&local_1278);
      FUN_10006a5d0(local_12b0,local_12c8);
      FUN_1000648b0(uVar4,0x80000266,&local_1298,local_12b0);
      FUN_10006a680(local_12b0);
      FUN_10002d9d0(local_12c8);
      if (local_1298 != (void *)0x0) {
        if (pvStack_1290 != local_1298) {
          pvStack_1290 = (void *)((~((long)pvStack_1290 + (-4 - (long)local_1298)) &
                                  0xfffffffffffffffcU) + (long)pvStack_1290);
        }
        operator_delete(local_1298);
      }
      FUN_10002d9d0(&local_1278);
    }
    if ((iVar5 == 2) && (*(int *)(param_1 + 0x12ec) != 0)) {
      uVar8 = FUN_1007dc320(uVar8,0);
      uVar6 = FUN_1007dc330(uVar8);
      uVar12 = *(uint *)(param_1 + 0x12ec) - uVar6;
      if (uVar6 <= *(uint *)(param_1 + 0x12ec) && uVar12 != 0) {
        QThread::usleep((ulong)uVar12);
      }
    }
    *(undefined4 *)(lVar7 + 0x2debc + lVar11) = 2;
    FUN_1002effe0(*(undefined8 *)(param_1 + 0x98));
  }
  return;
}

