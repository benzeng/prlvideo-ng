
undefined8 FUN_10026c890(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar5 = *(long *)(param_1 + 8);
  QMutex::lock();
  plVar2 = *(long **)(lVar5 + 0x18);
  if (plVar2 == (long *)0x0) {
    QMutex::unlock();
    uVar4 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
    uVar4 = 0;
    if (plVar2[2] != 0) {
      uVar4 = ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21f8,0);
    }
  }
  CVmDevice::getUserFriendlyName();
  CVmDevice::getSystemName();
  QString::operator=((QString *)(param_1 + 0x18),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026c961;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10026c961:
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar5 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar5 = FUN_1004080e0((QString *)(param_1 + 0x18));
    *(long *)(param_1 + 0x28) = lVar5;
  }
  if (lVar5 == 0) {
    lVar5 = FUN_10026bd40(uVar4,*(undefined4 *)(param_1 + 0x14));
    *(long *)(param_1 + 0x28) = lVar5;
    if (lVar5 != 0) goto LAB_10026c9a1;
    CVmDevice::getSystemName();
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,
                  "[DVDROM] Can not initialize for device \"%s\". Disconnecting.",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026ca51;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10026ca51:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026ca81;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10026ca81:
    uVar4 = 0x80000263;
    FUN_10026b7f0(param_1,1,0);
  }
  else {
LAB_10026c9a1:
    *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar3 = FUN_10026c2a0(param_1,uVar4);
      uVar4 = 0x80000263;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
      FUN_10025b310(*(undefined8 *)(param_1 + 8),1);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026cac6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10026cac6:
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return uVar4;
}

