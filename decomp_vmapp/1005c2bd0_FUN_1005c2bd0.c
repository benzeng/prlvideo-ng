
undefined8 FUN_1005c2bd0(undefined8 param_1,long param_2)

{
  QArrayData *local_30;
  undefined1 local_22;
  
  QMutex::lock();
  local_30 = (QArrayData *)QString::fromAscii_helper("Disk_Parameters",0xf);
  FUN_1005bdef0(param_1,param_2 + 0x20,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1005c2c47;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005c2c47:
  QMutex::unlock();
  return param_1;
}

