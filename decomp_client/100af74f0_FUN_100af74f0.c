
undefined1 FUN_100af74f0(void)

{
  undefined1 uVar1;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  CHwHardDisk::getDeviceId();
  CHwHardDisk::getDeviceId();
  uVar1 = operator<(&local_20,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100af7556;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100af7556:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return uVar1;
}

