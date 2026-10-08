
void FUN_100637b40(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CRegisteredKeysDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100637bb0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100637bb0:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_38,"CRegisteredKeysDialog","<b>Registered keys:<b>",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100637c11;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100637c11:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_40,"CRegisteredKeysDialog",
             "According to EULA you may use one copy of the Software activated by a license key on a single Authorized Device owned, leased, or otherwise controlled by you, at a single time."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100637c72;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100637c72:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_48,"CRegisteredKeysDialog","I will use the key in compliance with EULA",
             0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100637cd3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100637cd3:
  pQVar1 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_50,"CRegisteredKeysDialog","Continue",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100637d34;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100637d34:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_58,"CRegisteredKeysDialog","Cancel",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

