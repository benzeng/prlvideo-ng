
undefined8 FUN_1007d2760(undefined8 param_1)

{
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("%1.%2",5);
  local_30 = (QArrayData *)QString::fromAscii_helper("Gui Usage",9);
  QString::arg(&local_20,&local_28,&local_30,0,0x20);
  QString::arg(param_1,&local_20,0xc,0,10,0x20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007d27fe;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1007d27fe:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007d282e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007d282e:
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

