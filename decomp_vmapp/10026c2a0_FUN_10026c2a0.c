
int FUN_10026c2a0(long *param_1)

{
  long lVar1;
  int iVar2;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  if ((long *)param_1[5] == (long *)0x0) {
    CVmDevice::getSystemName();
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"[DVDROM] Connect device \"%s\". failed.Image is not opened.",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_10026c4b4;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_10026c4b4:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_10026c4e4;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10026c4e4:
    FUN_10025b310(param_1[1],0);
    return -1;
  }
  iVar2 = (**(code **)(*(long *)param_1[5] + 0x30))();
  if (iVar2 != 0) {
    return 0;
  }
  CVmDevice::getSystemName();
  QString::toUtf8();
  lVar1 = *(long *)(local_48 + 0x10);
  CVmDevice::getUserFriendlyName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[DVDROM] Connecting device \"%s\" known as \"%s\"",
                local_48 + lVar1,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_10026c36a;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10026c36a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) goto LAB_10026c39a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10026c39a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_10026c3ca;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10026c3ca:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_10026c3fa;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10026c3fa:
  iVar2 = (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],param_1 + 3);
  if (iVar2 == 0) {
    *(undefined4 *)((long)param_1 + 0x154) = 1;
    FUN_10025b310(param_1[1],1);
    (**(code **)(*param_1 + 0x20))(param_1,0x62800);
    return 0;
  }
  CVmDevice::getSystemName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[DVDROM] Can not connect device \"%s\". Disconnecting (%d)",
                local_68 + *(long *)(local_68 + 0x10),iVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) goto LAB_10026c78b;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10026c78b:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) goto LAB_10026c7bb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10026c7bb:
  FUN_10026b7f0(param_1,1,0);
  return iVar2;
}

