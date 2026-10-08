
void FUN_10063ea90(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CExtendableSubscriptionsDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063eb00;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10063eb00:
  pQVar1 = *(QString **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_38,"CExtendableSubscriptionsDialog","Extend an existing subscription",0)
  ;
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063eb61;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10063eb61:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_40,"CExtendableSubscriptionsDialog","Continue",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063ebc2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10063ebc2:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_48,"CExtendableSubscriptionsDialog","Cancel",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063ec23;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10063ec23:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_50,"CExtendableSubscriptionsDialog",
             "$PD_EDITION_NAME\nNumber of licenses: $NUMBER_OF_LICENSES \nValid until: $DATE",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063ec84;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10063ec84:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_58,"CExtendableSubscriptionsDialog","Register as a new subscription",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063ece5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10063ece5:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate
            ((char *)&local_60,"CExtendableSubscriptionsDialog",
             "Do you want to register a new subscription or extend an existing subscription?",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

