
QString * FUN_100d8c6e0(QString *param_1)

{
  int *piVar1;
  QString local_38;
  char local_30;
  undefined7 uStack_2f;
  undefined1 local_21;
  
  FUN_100d8c5e0(&local_38);
  param_1->field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper(&local_30,0x1de6f1d);
  QString::append(param_1);
  piVar1 = (int *)CONCAT71(uStack_2f,local_30);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_21 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d8c762;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_2f,local_30),2,8);
  }
LAB_100d8c762:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_30 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_30) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

