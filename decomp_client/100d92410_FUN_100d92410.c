
QString * FUN_100d92410(QString *param_1)

{
  int *piVar1;
  QString local_30;
  char local_28;
  undefined7 uStack_27;
  undefined1 local_19;
  
  FUN_100d86380(&local_30);
  param_1->field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_19 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper(&local_28,0x1efebf8);
  QString::append(param_1);
  piVar1 = (int *)CONCAT71(uStack_27,local_28);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_19 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d92490;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_27,local_28),2,8);
  }
LAB_100d92490:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_28 = '\0';
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

