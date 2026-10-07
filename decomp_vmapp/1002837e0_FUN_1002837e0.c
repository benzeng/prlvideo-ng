
undefined8 FUN_1002837e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QMutex::lock();
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  FUN_10025b310(param_1,0);
  FUN_100401be0(param_1 + 0x148);
  if (*(long *)(param_1 + 0x140) != 0) {
    CVmDevice::getSystemName();
    FUN_1003fad20(&local_38,*(undefined8 *)(param_1 + 0x140));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002838a3;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1002838a3:
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  CVmDevice::getSystemName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[HDD:scsi] Disconnected device \"%s\" ",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100283926;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100283926:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100283956;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100283956:
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  QMutex::unlock();
  return 0;
}

