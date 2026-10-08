
byte FUN_100da1d40(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromLatin1_helper("IOUSBMassStorage",0x10);
  bVar1 = FUN_100da19d0(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100da1da1;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100da1da1:
  local_30 = (QArrayData *)QString::fromLatin1_helper("IOUSBAttachedSCSI",0x11);
  bVar2 = FUN_100da19d0(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100da1df5;
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100da1df5:
  return bVar1 | bVar2;
}

