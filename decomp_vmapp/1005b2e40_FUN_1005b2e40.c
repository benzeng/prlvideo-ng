
undefined8 FUN_1005b2e40(undefined8 param_1,long *param_2,undefined8 param_3)

{
  QString local_40;
  QDir local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  (**(code **)(*param_2 + 0x178))(&local_40);
  QDir::QDir(local_38,&local_40);
  QDir::dirName();
  FUN_1005ae1a0(param_1,&local_30,param_3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b2ebb;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005b2ebb:
  QDir::~QDir(local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

