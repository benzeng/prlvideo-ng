
undefined8 FUN_100177920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("{C056BC11-223F-FC56-5578-662764A7CDBE}",0x26);
  local_48 = (QArrayData *)QString::fromAscii_helper("%1\n%2",5);
  QString::arg(&local_40,&local_48,param_2,0,0x20);
  QString::arg(&local_38,&local_40,param_3,0,0x20);
  uVar1 = FUN_100175d50(param_1,&local_30,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001779d5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001779d5:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100177a05;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100177a05:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100177a35;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100177a35:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar1;
}

