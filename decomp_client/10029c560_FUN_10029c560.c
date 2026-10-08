
void FUN_10029c560(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  QArrayData *local_40;
  char local_31;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1458);
  if (lVar2 == 0) {
    return;
  }
  local_30 = *(QArrayData **)(lVar2 + 0x80);
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Problem Report ID: %s",local_28 + *(long *)(local_28 + 0x10))
  ;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10029c60d;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10029c60d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10029c63d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10029c63d:
  local_31 = '\x01';
  local_40 = *(QArrayData **)(lVar2 + 0x80);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_19 = *(int *)local_40 != 0;
    UNLOCK();
  }
  uVar1 = QString::toLongLong((bool *)&local_40,(int)&local_31);
  *(undefined4 *)((long)param_1 + 0x34) = uVar1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10029c6a3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10029c6a3:
  if (local_31 == '\0') {
    *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

