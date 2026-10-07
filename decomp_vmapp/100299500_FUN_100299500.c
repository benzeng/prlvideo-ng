
undefined8 FUN_100299500(long *param_1)

{
  undefined8 uVar1;
  QArrayData *pQVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (DAT_1011b55f8 < 2) goto LAB_100299666;
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  (**(code **)(*param_1 + 0xe0))(&local_38,param_1);
  QString::toLocal8Bit();
  pQVar2 = local_30 + *(long *)(local_30 + 0x10);
  (**(code **)(*param_1 + 0xd8))(&local_48,param_1);
  QString::toLocal8Bit();
  FUN_1008e3970("AudioAS","LocalDevices",2,"[CSoundDevice] [%s] Disconnecting (device: \"%s\" (%s))"
                ,uVar1,pQVar2,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002995d6;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002995d6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100299606;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100299606:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100299636;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100299636:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100299666;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100299666:
  QMutex::lock();
  FUN_100299430(param_1,0);
  QMutex::unlock();
  return 0;
}

