
undefined8 FUN_100581860(undefined8 param_1,long param_2)

{
  QString QVar1;
  char cVar2;
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  local_20.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x18);
  if (1 < *(int *)local_20.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + 1;
    local_11 = *(int *)local_20.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_20);
  cVar2 = QFile::exists(&local_20);
  if ((cVar2 == '\0') ||
     (cVar2 = QFile::remove(&local_20), QVar1.field0_0x0 = local_20.field0_0x0, cVar2 != '\0'))
  goto LAB_10058197e;
  if (1 < *(int *)local_20.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + 1;
    local_11 = *(int *)local_20.field0_0x0 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"%s file remove failed at rollback",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100581930;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100581930:
  if (*(int *)QVar1.field0_0x0 != -1) {
    if (*(int *)QVar1.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_11 = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100581960;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_100581960:
  FUN_1008e3970("","vdisk",0,"You now have trash on disk. Sorry.");
LAB_10058197e:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return 0;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return 0;
}

