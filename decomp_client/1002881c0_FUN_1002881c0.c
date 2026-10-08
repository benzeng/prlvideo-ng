
undefined4 FUN_1002881c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  bool bVar5;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  QObject::property((char *)&local_40);
  QVariant::toString();
  if (*(int *)(local_30 + 4) == 0) {
    lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    bVar5 = *(char *)(lVar3 + 0x13c) != '\0';
  }
  else {
    uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_10018c2b0(uVar2);
    CVmConfiguration::getVmSettings();
    CVmSettings::getLockDown();
    CVmLockDown::getHash();
    bVar5 = *(int *)(local_48 + 4) != 0;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100288303;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100288303:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100288333;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100288333:
  QVariant::~QVariant(&local_40);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 - 1U < 2) {
    uVar4 = 0x80000009;
    if (bVar5) {
      uVar4 = 0;
    }
  }
  else if (iVar1 == 0) {
    uVar4 = 0x80000009;
    if (!bVar5) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x80000009;
    if ((iVar1 == 3) && (uVar4 = 0, !bVar5)) {
      CAbstractTask::clearSubTaskList();
    }
  }
  return uVar4;
}

