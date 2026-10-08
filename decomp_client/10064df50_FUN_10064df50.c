
void FUN_10064df50(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QCoreApplication::translate((char *)&local_38,"CAccountSignInPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064dfc2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10064dfc2:
  puVar2 = PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x18));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e00a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10064e00a:
  pQVar1 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_48,"CAccountSignInPage","I am a new user",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e06b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10064e06b:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_50,"CAccountSignInPage","I have a password:",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e0cc;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10064e0cc:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate((char *)&local_58,"CAccountSignInPage","Sign In",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e12d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10064e12d:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_60,"CAccountSignInPage","Password:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e18e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10064e18e:
  local_68 = (QArrayData *)puVar2;
  QLineEdit::setText(*(QString **)(param_1 + 0x70));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e1cf;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10064e1cf:
  pQVar1 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate((char *)&local_70,"CAccountSignInPage","Email:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e230;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10064e230:
  local_78 = (QArrayData *)puVar2;
  QLineEdit::setText(*(QString **)(param_1 + 0x88));
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e274;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10064e274:
  pQVar1 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate
            ((char *)&local_80,"CAccountSignInPage",
             "<html><style>a { color: #aaddf0; }</style><body><a href=\"link\">Forgot password?</a></body></html>"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e2d8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10064e2d8:
  pQVar1 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate
            ((char *)&local_88,"CAccountSignInPage","Sign in with your existing account:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e33c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10064e33c:
  pQVar1 = *(QString **)(param_1 + 200);
  QCoreApplication::translate((char *)&local_90,"CAccountSignInPage","Facebook",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064e3a9;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10064e3a9:
  pQVar1 = *(QString **)(param_1 + 0xd0);
  QCoreApplication::translate((char *)&local_98,"CAccountSignInPage","Google",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
  return;
}

