
undefined8 FUN_100295080(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  
  iVar4 = FUN_1002ef640(param_1[8]);
  if (iVar4 - 1U < 2) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "runState != ASYNCDEV_STATE_RUNNING && runState != ASYNCDEV_STATE_STOPPING",
                  "../Ahci/sata_hdd.cpp",0x136,"disconnect_image");
  }
  if (param_1[0x2838] != 0) {
    FUN_1003fe070(param_1 + 0x2725);
    FUN_100401be0(param_1 + 0x26f7);
    FUN_1003fad20(param_1 + 0x2839,param_1[0x2838]);
  }
  (**(code **)(*param_1 + 0xf8))(param_1,0,0);
  param_1[0x2838] = 0;
  FUN_10025b310(param_1 + 0xd,0);
  *(undefined1 *)((long)param_1 + 0xfed) = 0;
  lVar3 = param_1[0x1fe];
  QMutex::lock();
  plVar2 = (long *)param_1[0x10];
  if (plVar2 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
  }
  CVmDevice::getSystemName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[hdd::sata:%u] device  was disconnected\"%s\"",(short)lVar3,
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100295200;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100295200:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100295230;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100295230:
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
  return 0;
}

