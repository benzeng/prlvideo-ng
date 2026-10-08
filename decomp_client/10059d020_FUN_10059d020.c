
undefined4 FUN_10059d020(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  QString::QString(&local_30,0x2e);
  QString::section(&local_38,param_1,&local_30,param_2,param_2,0);
  piVar1 = (int *)CONCAT71(local_30.field0_0x0._1_7_,local_30.field0_0x0._0_1_);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_21 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10059d08a;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_30.field0_0x0._1_7_,local_30.field0_0x0._0_1_),2,8);
  }
LAB_10059d08a:
  uVar2 = QString::toInt((bool *)&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar2;
      }
      local_30.field0_0x0._0_1_ = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar2;
}

