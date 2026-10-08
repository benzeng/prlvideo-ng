
void FUN_10064b5c0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = QAbstractButton::isChecked();
  uVar2 = FUN_10063f730(param_1);
  if (cVar1 != '\0') {
    FUN_100678db0(uVar2);
    return;
  }
  QLineEdit::text();
  QString::trimmed();
  QLineEdit::text();
  FUN_100679900(uVar2,0,&local_30,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064b678;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10064b678:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064b6a8;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10064b6a8:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

