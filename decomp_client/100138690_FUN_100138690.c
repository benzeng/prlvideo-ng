
void FUN_100138690(QKeyEvent *param_1)

{
  char cVar1;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (param_1[0x30] == (QKeyEvent)0x0) {
    QLineEdit::keyPressEvent(param_1);
    return;
  }
  QLineEdit::text();
  QString::left((int)&local_38);
  QLineEdit::keyPressEvent(param_1);
  QLineEdit::text();
  QString::operator=(&local_30,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100138722;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100138722:
  if (*(int *)(local_30.field0_0x0 + 4) < 9) {
LAB_100138783:
    QString::replace((int)&local_30,0,(QString *)0x9);
    QLineEdit::cursorPosition();
    QLineEdit::setText((QString *)param_1);
    QLineEdit::setCursorPosition((int)param_1);
  }
  else {
    QString::left((int)&local_48);
    cVar1 = operator==(&local_48,&local_38);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10013877e;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_10013877e:
    if (cVar1 == '\0') goto LAB_100138783;
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001387e7;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1001387e7:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

