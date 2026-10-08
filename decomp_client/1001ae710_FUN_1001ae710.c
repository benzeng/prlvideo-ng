
ushort FUN_1001ae710(undefined8 param_1,char *param_2)

{
  int *piVar1;
  ushort uVar2;
  QArrayData *local_40;
  char local_31;
  QString local_30;
  undefined1 local_21;
  
  QString::QString(&local_30,0x7c);
  QString::section(&local_40,param_1,&local_30,1,1,0);
  piVar1 = (int *)CONCAT71(local_30.field0_0x0._1_7_,local_30.field0_0x0._0_1_);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_21 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001ae781;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_30.field0_0x0._1_7_,local_30.field0_0x0._0_1_),2,8);
  }
LAB_1001ae781:
  uVar2 = QString::toUInt((bool *)&local_40,(int)&local_31);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1001ae7c5;
      local_30.field0_0x0._0_1_ = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001ae7c5:
  if (param_2 != (char *)0x0) {
    *param_2 = local_31;
  }
  return -(ushort)(local_31 == '\0') | uVar2;
}

