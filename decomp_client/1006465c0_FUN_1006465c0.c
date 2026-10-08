
void FUN_1006465c0(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CActivationPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100646630;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100646630:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_38,"CActivationPage",
             "Please enter your activation key. You can find it on the Parallels&nbsp;Desktop box or in the confirmation email if you purchased the product online."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100646691;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100646691:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate
            ((char *)&local_40,"CActivationPage","%n day(s) left to expire your license.",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006466f2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006466f2:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate((char *)&local_48,"CActivationPage","Activation key",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

