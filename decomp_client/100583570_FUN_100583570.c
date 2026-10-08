
void FUN_100583570(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CCreateProfileDialog","Choose base profile",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005835e0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005835e0:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_38,"CCreateProfileDialog","Profile name:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100583641;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100583641:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_40,"CCreateProfileDialog","Base profile:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

