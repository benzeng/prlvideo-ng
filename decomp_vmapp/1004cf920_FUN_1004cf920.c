
undefined8 * FUN_1004cf920(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int *piVar2;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  lVar1 = *param_3;
  if ((*(int *)(lVar1 + 4) < 2) || (*(short *)(lVar1 + *(long *)(lVar1 + 0x10)) != 0x2f)) {
    *param_1 = 0;
    return param_1;
  }
  QString::QString(&local_38,0x2f);
  QString::section(&local_40,param_3,&local_38,1,1,0);
  piVar2 = (int *)CONCAT71(local_38.field0_0x0._1_7_,local_38.field0_0x0._0_1_);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004cf9b4;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_38.field0_0x0._1_7_,local_38.field0_0x0._0_1_),2,8);
  }
LAB_1004cf9b4:
  FUN_1004ceb50(param_1,param_2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_38.field0_0x0._0_1_ = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

