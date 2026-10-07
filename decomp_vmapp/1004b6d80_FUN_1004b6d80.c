
void FUN_1004b6d80(long param_1)

{
  QString local_40;
  undefined1 local_32;
  
  QMutex::lock();
  FUN_1005271d0(*(undefined8 *)(param_1 + 0x10));
  QMutex::unlock();
  QMutex::lock();
  FUN_1004b7fa0(*(undefined8 *)(param_1 + 0x20));
  QMutex::unlock();
  FUN_1004bb4a0(*(undefined8 *)(param_1 + 0x30));
  QMutex::lock();
  QString::fromUtf8_helper((char *)&local_40,0xa320a0);
  QString::operator=((QString *)(param_1 + 0x40),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1004b6e61;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004b6e61:
  QMutex::unlock();
  return;
}

