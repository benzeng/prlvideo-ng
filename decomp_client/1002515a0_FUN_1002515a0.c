
void FUN_1002515a0(long param_1,int param_2)

{
  long lVar1;
  QString local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  lVar1 = QObject::sender();
  if (-1 < param_2) {
    local_28.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar1 + 0x20);
    if (1 < *(int *)local_28.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
      local_1b = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(param_1 + 0x68),&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_1a = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_1a) goto LAB_100251611;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_100251611:
  CTaskInstallProductUpdate::onInstallBundleFinished((int)param_1);
  return;
}

