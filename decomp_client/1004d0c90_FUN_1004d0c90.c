
void FUN_1004d0c90(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CVmEdWebAndEMailDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d0d00;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004d0d00:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_38,"CVmEdWebAndEMailDialog","Web Pages:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d0d61;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004d0d61:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_40,"CVmEdWebAndEMailDialog","Email:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d0dc2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004d0dc2:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_48,"CVmEdWebAndEMailDialog","Safari Plugin:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d0e23;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004d0e23:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_50,"CVmEdWebAndEMailDialog",
             "To open links from Safari in Internet Explorer, install the \"Open in Internet Explorer\" plugin."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d0e84;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004d0e84:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_58,"CVmEdWebAndEMailDialog","More Applications...",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d0ee5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004d0ee5:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate
            ((char *)&local_60,"CVmEdWebAndEMailDialog","Store Internet passwords in Mac keychain",0
            );
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d0f46;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004d0f46:
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate
            ((char *)&local_68,"CVmEdWebAndEMailDialog",
             "Passwords are transferred to your Mac keychain, but still autofilled in Internet Explorer and Edge."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d0faa;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004d0faa:
  pQVar1 = *(QString **)(param_1 + 0xa0);
  QCoreApplication::translate((char *)&local_70,"CVmEdWebAndEMailDialog","Install Plugin",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}

