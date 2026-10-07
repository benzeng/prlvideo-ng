
undefined4 FUN_1002c7030(undefined8 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  QString::QString(&local_28,0x7c);
  QString::section(&local_30,param_1,&local_28,2,2,0);
  piVar1 = (int *)CONCAT71(local_28.field0_0x0._1_7_,local_28.field0_0x0._0_1_);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_19 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002c709c;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_28.field0_0x0._1_7_,local_28.field0_0x0._0_1_),2,8);
  }
LAB_1002c709c:
  uVar2 = QString::toUInt((bool *)&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar2;
      }
      local_28.field0_0x0._0_1_ = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar2;
}

