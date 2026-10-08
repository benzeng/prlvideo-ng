
void FUN_100a4a490(undefined8 *param_1,undefined8 param_2)

{
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_100a4a020();
  *param_1 = &PTR_FUN_1022384a0;
  QMutex::QMutex((QMutex *)(param_1 + 3),0);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = PTR_shared_null_1021e1288;
  param_1[6] = PTR_shared_null_1021e12f0;
  FUN_100a4d110(&local_48);
  QDir::toNativeSeparators(&local_40);
  QString::operator=((QString *)(param_1 + 5),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a4a537;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100a4a537:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_100a4a567;
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a4a567:
  param_1[2] = param_2;
  return;
}

