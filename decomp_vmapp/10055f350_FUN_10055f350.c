
undefined1 FUN_10055f350(undefined8 param_1)

{
  undefined1 uVar1;
  QString local_28;
  QFileInfo local_20 [15];
  undefined1 local_11;
  
  FUN_10055eec0(&local_28,param_1);
  QFileInfo::QFileInfo(local_20,&local_28);
  uVar1 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_20);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar1;
}

