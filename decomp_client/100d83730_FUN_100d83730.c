
undefined8 FUN_100d83730(undefined8 param_1)

{
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  FUN_100d81f90(&local_30);
  QString::arg(&local_20,&local_28,&local_30,0,0x20);
  local_38 = (QArrayData *)QString::fromAscii_helper("licenses.xml",0xc);
  QString::arg(param_1,&local_20,&local_38,0,0x20);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d837d0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d837d0:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d83800;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100d83800:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d83830;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d83830:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

