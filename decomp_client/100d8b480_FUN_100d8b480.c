
undefined8 FUN_100d8b480(undefined8 param_1)

{
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("prl_naptd.pcproxy.pid",0x15);
  local_30 = (QArrayData *)
             QString::fromAscii_helper("%1/Library/Parallels/Parallels Desktop/%2",0x29);
  FUN_100d898d0(&local_38);
  QString::arg(&local_28,&local_30,&local_38,0,0x20);
  QString::arg(param_1,&local_28,&local_20,0,0x20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d8b520;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d8b520:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d8b550;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d8b550:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d8b580;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d8b580:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return param_1;
}

