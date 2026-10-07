
undefined8
FUN_1005d19f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  QArrayData *local_60;
  QDir local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3.hds",0xc);
  QFileInfo::dir();
  QDir::dirName();
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  QString::arg(&local_38,&local_40,param_4,0,10,0x20);
  FUN_1007d6a70(&local_60,param_3);
  QString::arg(param_1,&local_38,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d1ac8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005d1ac8:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d1af8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005d1af8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d1b28;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005d1b28:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d1b58;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d1b58:
  QDir::~QDir(local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return param_1;
}

