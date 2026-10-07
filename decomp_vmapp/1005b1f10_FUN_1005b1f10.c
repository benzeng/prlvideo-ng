
undefined8 FUN_1005b1f10(undefined8 param_1,long *param_2,undefined8 param_3)

{
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QDir local_30 [15];
  undefined1 local_21;
  
  (**(code **)(*param_2 + 0x178))(&local_38);
  QDir::QDir(local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b1f6f;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1005b1f6f:
  QDir::absolutePath();
  QDir::dirName();
  FUN_1005ae540(param_1,&local_40,&local_48,param_3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b1fcc;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005b1fcc:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b1ffc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005b1ffc:
  QDir::~QDir(local_30);
  return param_1;
}

