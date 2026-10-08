
void FUN_1002623a0(long param_1,int param_2,int param_3)

{
  long lVar1;
  QString local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  if ((param_2 == 0) && (-1 < param_3)) {
    QObject::sender();
    lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220a0c0);
    local_20.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar1 + 0x58);
    if (1 < *(int *)local_20.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + 1;
      local_13 = *(int *)local_20.field0_0x0 != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(param_1 + 0x68),&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_20.field0_0x0 != 0) {
          return;
        }
        local_12 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
  return;
}

