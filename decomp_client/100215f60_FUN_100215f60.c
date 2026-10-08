
undefined8 FUN_100215f60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = FUN_100794960();
  CAppliance::getApplianceId();
  FUN_1007964b0(&local_30,uVar1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100215fde;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100215fde:
  if (*(int *)(local_30 + 4) == 0) {
    uVar1 = 0x80000009;
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to find vm id correspodning to appliance id");
  }
  else {
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = FUN_10015cb20(uVar1,&local_30);
    uVar1 = 0;
    if (lVar2 == 0) {
      uVar1 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar1 = *(undefined8 *)(param_1 + 0x20);
      }
      QObject::connect(&local_40,uVar1,"2afterVmAdded(const GUI::VmId&)",param_1,
                       "1onAfterVmRegistered(const GUI::VmId&)",0);
      if (local_40 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar1 = 0;
      CAbstractTask::setWaitForSubTaskCompletion();
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar1;
}

