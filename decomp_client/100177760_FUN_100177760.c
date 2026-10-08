
undefined8 FUN_100177760(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("{C056BC11-223F-FC56-5578-662764A7CDBE}",0x26);
  local_38 = (QArrayData *)QString::fromAscii_helper("%1\n",3);
  QString::arg(&local_30,&local_38,param_2,0,0x20);
  uVar1 = FUN_100175d50(param_1,&local_28,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001777f8;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001777f8:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100177828;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100177828:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar1;
}

