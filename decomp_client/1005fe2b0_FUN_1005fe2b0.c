
undefined8 FUN_1005fe2b0(undefined8 param_1,long param_2)

{
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  QString::arg(&local_28,&local_30,*(uint *)(param_2 + 0x10) >> 8 & 0xff,0,10,0x20);
  QString::arg(param_1,&local_28,*(undefined4 *)(param_2 + 0x10),0,10,0x20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fe344;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005fe344:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

