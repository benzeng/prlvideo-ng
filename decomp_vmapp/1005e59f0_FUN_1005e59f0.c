
undefined1 FUN_1005e59f0(long param_1,QString *param_2)

{
  undefined1 uVar1;
  QString local_30;
  undefined1 local_22;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar1 = 0;
  }
  else if (*(long *)(*(long *)(param_1 + 0x68) + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    QFileInfo::absoluteFilePath();
    QString::operator=(param_2,&local_30);
    uVar1 = 1;
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_22 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_22) goto LAB_1005e5a7f;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1005e5a7f:
  QMutex::unlock();
  return uVar1;
}

