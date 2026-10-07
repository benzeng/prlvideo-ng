
undefined1 FUN_10055f420(undefined8 param_1)

{
  undefined1 uVar1;
  QString local_20;
  undefined1 local_12;
  
  FUN_10055eec0(&local_20,param_1);
  uVar1 = QFile::remove(&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return uVar1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return uVar1;
}

