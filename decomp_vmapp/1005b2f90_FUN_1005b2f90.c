
undefined1 FUN_1005b2f90(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  QString local_20;
  undefined1 local_12;
  
  FUN_1005b1f10(&local_20,param_1,param_2);
  uVar1 = QFile::exists(&local_20);
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

