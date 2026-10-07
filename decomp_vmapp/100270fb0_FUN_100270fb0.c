
void FUN_100270fb0(long *param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  
  FUN_1002578b0(param_1,7,0,0);
  plVar4 = param_1 + 0xd;
  FUN_10025ae40(plVar4,param_2);
  *param_1 = (long)&PTR_FUN_100baf650;
  param_1[1] = (long)&PTR_metaObject_100baf6d8;
  param_1[0xd] = (long)&PTR_FUN_100baf750;
  uVar1 = CVmDevice::getIndex();
  *(undefined4 *)((long)param_1 + 0x8c) = uVar1;
  param_1[0x12] = 0;
  plVar3 = param_1 + 0x13;
  FUN_100406040(plVar3);
  QMutex::QMutex((QMutex *)(param_1 + 0x19),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x1a),0);
  param_1[0x1b] = (long)PTR_shared_null_100ba20d0;
  iVar2 = CVmDevice::getIndex();
  if (iVar2 != 0) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "pFloppyDisk->getIndex() == 0","../Storage/FloppyDrive/AppFdd.cpp",0x24,
                  "CFddDevice",plVar3,plVar4);
  }
  uVar1 = CVmDevice::getIndex();
  FUN_1008e3970("","LocalDevices",0,"[Floppy%d] Initializing",uVar1);
  FUN_100257c20(param_1);
  iVar2 = CVmDevice::getConnected();
  if (iVar2 == 1) {
    iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
    if (iVar2 < 0) {
      FUN_10006a060(local_50);
      uVar1 = (**(code **)(*param_2 + 0x68))(param_2);
      FUN_10006a860(local_50,uVar1,0);
      uVar1 = CVmDevice::getIndex();
      FUN_10006a860(local_50,uVar1,1);
      local_68 = (void *)0x0;
      pvStack_60 = (void *)0x0;
      local_58 = 0;
      FUN_1000648b0(DAT_1011c3650,0x80000263,&local_68,local_50);
      if (local_68 != (void *)0x0) {
        if (pvStack_60 != local_68) {
          pvStack_60 = (void *)((~((long)pvStack_60 + (-4 - (long)local_68)) & 0xfffffffffffffffcU)
                               + (long)pvStack_60);
        }
        operator_delete(local_68);
      }
      FUN_10006a680(local_50);
    }
  }
  return;
}

