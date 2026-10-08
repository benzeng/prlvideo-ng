
undefined8 FUN_1001a6a80(undefined8 param_1)

{
  char cVar1;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  QLineEdit::text();
  FUN_1001c22d0(&local_38);
  cVar1 = operator==(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a6aed;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1001a6aed:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a6b1d;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1001a6b1d:
  if (cVar1 == '\0') {
    QLineEdit::text();
  }
  else {
    FUN_1001c20d0(param_1);
  }
  return param_1;
}

