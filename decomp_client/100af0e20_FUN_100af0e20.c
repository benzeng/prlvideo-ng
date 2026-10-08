
undefined8
FUN_100af0e20(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_68 = (QArrayData *)QString::fromAscii_helper("%1|%2|%3|%4|%5|%6",0x11);
  QString::arg(&local_60,&local_68,param_2,0,0x20);
  QString::arg(&local_58,&local_60,param_3,4,0x10,0x30);
  QString::arg(&local_50,&local_58,param_4,4,0x10,0x30);
  QString::arg(&local_48,&local_50,param_5,0,0x20);
  QString::arg(&local_40,&local_48,param_6,0,0x20);
  QString::arg(param_1,&local_40,param_7,0,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af0f2a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100af0f2a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af0f5a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100af0f5a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af0f8a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100af0f8a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af0fba;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100af0fba:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af0fea;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100af0fea:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return param_1;
}

