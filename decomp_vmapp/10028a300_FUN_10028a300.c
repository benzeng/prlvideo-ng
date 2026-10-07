
undefined8 FUN_10028a300(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  
  iVar5 = FUN_1002ef640(*(undefined8 *)(param_1 + 0x40));
  if (iVar5 - 1U < 2) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "runState != ASYNCDEV_STATE_RUNNING && runState != ASYNCDEV_STATE_STOPPING",
                  "../Scsi/Lsi/hdd.cpp",0x7d,"disconnect_image");
  }
  if (*(long *)(param_1 + 0x3a2b8) != 0) {
    *(undefined8 *)(param_1 + 0x3a3b0) = 0;
    *(undefined8 *)(param_1 + 0x3a3a8) = 0;
    *(undefined8 *)(param_1 + 0x3a3a0) = 0;
    *(undefined8 *)(param_1 + 0x3a398) = 0;
    *(undefined8 *)(param_1 + 0x3a390) = 0;
    *(undefined8 *)(param_1 + 0x3a388) = 0;
    *(undefined8 *)(param_1 + 0x3a380) = 0;
    *(undefined8 *)(param_1 + 0x3a378) = 0;
    *(undefined8 *)(param_1 + 0x3a370) = 0;
    *(undefined8 *)(param_1 + 0x3a368) = 0;
    *(undefined8 *)(param_1 + 0x3a360) = 0;
    *(undefined8 *)(param_1 + 0x3a358) = 0;
    *(undefined8 *)(param_1 + 0x3a350) = 0;
    *(undefined8 *)(param_1 + 0x3a348) = 0;
    *(undefined8 *)(param_1 + 0x3a340) = 0;
    *(undefined8 *)(param_1 + 0x3a338) = 0;
    *(undefined8 *)(param_1 + 0x3a390) = 0x2020202020202020;
    *(undefined8 *)(param_1 + 0x3a388) = 0x2020202020202020;
    *(undefined8 *)(param_1 + 0x3a380) = 0x2020202020202020;
    *(undefined8 *)(param_1 + 0x3a378) = 0x2020202020202020;
    *(undefined8 *)(param_1 + 0x3a370) = 0x2020202020202020;
    *(undefined8 *)(param_1 + 0x3a368) = 0x2020202020202020;
    *(undefined8 *)(param_1 + 0x3a360) = 0x2020202020202020;
    *(undefined8 *)(param_1 + 0x3a358) = 0x2020202020202020;
    *(undefined4 *)(param_1 + 0x3a398) = 0x20202020;
    FUN_10059f090(param_1 + 0x3a2c0);
    FUN_100401be0(param_1 + 0x3a148);
    FUN_1003fad20(param_1 + 0x3a3b8,*(undefined8 *)(param_1 + 0x3a2b8));
  }
  if (*(int *)(*(long *)(param_1 + 0x98) + 0x1098) == 2) {
    FUN_10028cd70(*(undefined4 *)(param_1 + 0x90));
  }
  *(undefined8 *)(param_1 + 0x3a2b8) = 0;
  FUN_10025b310(param_1 + 0x68,0);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x90);
  QMutex::lock();
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    QMutex::unlock();
  }
  CVmDevice::getSystemName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[hdd::scsi:%u] device  was disconnected\"%s\"",uVar2,
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10028a58a;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10028a58a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_10028a5ba;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10028a5ba:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return 0;
}

