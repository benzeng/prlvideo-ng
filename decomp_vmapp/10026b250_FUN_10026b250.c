
void FUN_10026b250(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = CVmClusteredDevice::getStackIndex();
  FUN_1002578b0(param_1,2,uVar1,0);
  FUN_10025ae40(param_1 + 0xd,param_2);
  *param_1 = &PTR_FUN_101115b50;
  param_1[1] = &PTR_metaObject_101115bc8;
  param_1[0xd] = &PTR_FUN_101115c40;
  lVar5 = DAT_1011c3698;
  uVar2 = CVmClusteredDevice::getStackIndex();
  lVar3 = FUN_1000e9a40(*(undefined8 *)(lVar5 + 0x1158),0xad,0);
  if (lVar3 == 0) {
    FUN_1000e9b50(*(undefined8 *)(lVar5 + 0x1158),0xad,4,0x100000,0,0x801);
  }
  FUN_1000a4cd0(lVar5,0xad,uVar2,0);
  uVar4 = FUN_1000e99d0(*(undefined8 *)(lVar5 + 0x1158),0xad,uVar2 & 0xffff);
  param_1[0x12] = uVar4;
  lVar5 = FUN_1002f0000(2,uVar2 >> 1 & 0xffff,0xffff);
  param_1[0x13] = lVar5;
  if (lVar5 == 0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to open main queue for channel %u",uVar2 >> 1);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_48);
    FUN_10002d9d0(&local_48);
  }
  return;
}

