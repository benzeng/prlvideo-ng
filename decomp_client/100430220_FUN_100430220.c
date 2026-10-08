
void FUN_100430220(long param_1,QString *param_2)

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
  
  QCoreApplication::translate((char *)&local_30,"CVmEdSetPasswordDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100430290;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100430290:
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x18));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004302d8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004302d8:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_40,"CVmEdSetPasswordDialog","Set user credentials",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100430339;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100430339:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_48,"CVmEdSetPasswordDialog","User Name:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10043039a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10043039a:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_50,"CVmEdSetPasswordDialog","Password:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004303fb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004303fb:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_58,"CVmEdSetPasswordDialog","Show password",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10043045c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10043045c:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_60,"CVmEdSetPasswordDialog","Password must be at least 6 symbols long",0
            );
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

