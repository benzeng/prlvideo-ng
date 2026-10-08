
undefined8 FUN_100cfa540(long param_1,long *param_2)

{
  QString local_38;
  QFileInfo local_30 [8];
  QString local_28;
  undefined1 local_19;
  
  (**(code **)(*param_2 + 0x50))(&local_28);
  QFileInfo::QFileInfo(local_30,&local_28);
  QFileInfo::baseName();
  QString::operator=(&local_28,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100cfa5b1;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100cfa5b1:
  if (*(int *)(local_28.field0_0x0 + 4) != 0) {
    QString::operator=((QString *)(param_1 + 0xd8),&local_28);
  }
  QFileInfo::~QFileInfo(local_30);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return 0x8000000;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return 0x8000000;
}

