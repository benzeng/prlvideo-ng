
undefined8 FUN_1001b3760(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  QString::QString(&local_38,0x7c);
  QString::section(&local_40,param_2,&local_38,5,0xffffffff,0);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001b37d1;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1001b37d1:
  QString::QString(&local_30,0x40);
  QString::section(param_1,&local_40,&local_30,1,0xffffffff,0);
  piVar1 = (int *)CONCAT71(local_30.field0_0x0._1_7_,local_30.field0_0x0._0_1_);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_21 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001b382d;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_30.field0_0x0._1_7_,local_30.field0_0x0._0_1_),2,8);
  }
LAB_1001b382d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_30.field0_0x0._0_1_ = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

