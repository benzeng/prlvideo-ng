
void FUN_1005fcd50(QString *param_1)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  long local_28;
  undefined1 local_19;
  
  uVar1 = FUN_1005c11e0(param_1[8].field0_0x0);
  QObject::connect(&local_28,uVar1,"2vmConvertingProgress(uint)",param_1,
                   "1onConvertVmProgress(uint)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  QMetaObject::tr((char *)&local_38,"",0x1e0667b);
  lVar2 = FUN_1005c11d0(param_1[8].field0_0x0);
  local_40 = *(QArrayData **)(lVar2 + 0x178);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_19 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  CAbstractProgressOperation::setName(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fce39;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005fce39:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fce69;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005fce69:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fce99;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005fce99:
  QMetaObject::tr((char *)&local_48,"",0x1dc156b);
  CAbstractProgressOperation::setDescription(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

