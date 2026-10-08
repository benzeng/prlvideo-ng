
undefined8 FUN_100d02d20(long param_1,QString *param_2)

{
  QString local_30;
  QFileInfo local_28 [15];
  undefined1 local_19;
  
  QFileInfo::QFileInfo(local_28,param_2);
  QFileInfo::baseName();
  if (*(int *)(local_30.field0_0x0 + 4) != 0) {
    QString::operator=((QString *)(param_1 + 0xd8),&local_30);
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d02d93;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100d02d93:
  QFileInfo::~QFileInfo(local_28);
  return 0x8000000;
}

