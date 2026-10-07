
void FUN_10025f3b0(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = CVmDevice::getIndex();
  FUN_1002578b0(param_1,5,uVar1,0);
  FUN_10025ae40(param_1 + 0xd,param_2);
  *param_1 = (long)&PTR_FUN_100baeb50;
  param_1[1] = (long)&PTR_metaObject_100baebf8;
  param_1[0xd] = (long)&PTR_FUN_100baec70;
  param_1[0x12] = (long)&PTR_FUN_100baeca0;
  uVar2 = CVmDevice::getIndex();
  *(uint *)(param_1 + 0x13) = uVar2;
  lVar4 = FUN_100257d80(param_1);
  param_1[0x14] = lVar4 + 0x31cb0 + (ulong)uVar2 * 0x2060;
  param_1[0x15] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x16),0);
  if (2 < DAT_1011b55f8) {
    uVar1 = CVmDevice::getIndex();
    FUN_1008e3970("","LocalDevices",3,"[Serial%d] Initializing",uVar1);
  }
  lVar4 = FUN_1002f0000(5,(short)param_1[0x13],0xffff);
  param_1[0x17] = lVar4;
  if (lVar4 == 0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to open main queue for serialport %u",
                  (int)param_1[0x13]);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000001,&local_48);
    FUN_10002d9d0(&local_48);
  }
  else {
    FUN_100257c20(param_1);
    iVar3 = CVmDevice::getConnected();
    if (iVar3 == 1) {
      iVar3 = (**(code **)(*param_1 + 0x68))(param_1);
      if (iVar3 < 0) {
        FUN_10006a060(local_60);
        uVar1 = CVmDevice::getIndex();
        FUN_10006a860(local_60,uVar1,0);
        local_78 = (void *)0x0;
        pvStack_70 = (void *)0x0;
        local_68 = 0;
        FUN_1000648b0(DAT_1011c3650,iVar3,&local_78,local_60);
        if (local_78 != (void *)0x0) {
          if (pvStack_70 != local_78) {
            pvStack_70 = (void *)((~((long)pvStack_70 + (-4 - (long)local_78)) & 0xfffffffffffffffcU
                                  ) + (long)pvStack_70);
          }
          operator_delete(local_78);
        }
        FUN_10006a680(local_60);
      }
    }
  }
  return;
}

