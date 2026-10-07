
void FUN_1004b48a0(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  QString local_40;
  undefined1 local_33;
  
  *param_1 = 0;
  *(undefined **)(param_1 + 2) = PTR_shared_null_100ba20d0;
  puVar1 = PTR_shared_null_100ba2188;
  *(undefined **)(param_1 + 8) = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 0xc),0);
  *(undefined **)(param_1 + 0xe) = puVar1;
  QReadWriteLock::lockForWrite();
  DAT_1011bc000 = param_1;
  *(undefined8 *)(param_1 + 10) = param_2;
  QString::fromUtf8_helper((char *)&local_40,0xa320a0);
  QString::operator=((QString *)(param_1 + 2),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_33 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1004b4951;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004b4951:
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  QReadWriteLock::unlock();
  return;
}

