
undefined8 FUN_100dd7f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  QArrayData *local_28;
  
  QString::toUtf8();
  uVar1 = _DADiskCreateFromBSDName(param_2,param_3,local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar1;
}

