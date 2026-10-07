
undefined8 FUN_1005c2db0(undefined8 param_1,long param_2)

{
  QArrayData *local_30;
  undefined1 local_22;
  
  QMutex::lock();
  local_30 = (QArrayData *)QString::fromAscii_helper("Snapshots",9);
  FUN_1005bdef0(param_1,param_2 + 0x20,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1005c2e27;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005c2e27:
  QMutex::unlock();
  return param_1;
}

