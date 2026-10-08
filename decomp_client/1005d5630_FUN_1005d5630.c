
void FUN_1005d5630(long param_1,QString *param_2)

{
  undefined8 uVar1;
  QString *pQVar2;
  undefined *puVar3;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QCoreApplication::translate((char *)&local_38,"CNewVmWizExpressWinOptionsPagePD","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d56a5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005d56a5:
  QComboBox::clear();
  puVar3 = PTR_shared_null_1021e15e8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_40 = PTR_shared_null_1021e15e8;
  QCoreApplication::translate
            ((char *)&local_48,"CNewVmWizExpressWinOptionsPagePD","64-bit Windows",0);
  FUN_1000341d0(&local_40,&local_48);
  QCoreApplication::translate
            ((char *)&local_50,"CNewVmWizExpressWinOptionsPagePD","32-bit Windows",0);
  FUN_1000341d0(&local_40);
  QComboBox::insertItems((int)uVar1,(QStringList *)0x0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d5756;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d5756:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d5786;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005d5786:
  FUN_100039a80(&local_40);
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_58,"CNewVmWizExpressWinOptionsPagePD","Versions:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d57f0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005d57f0:
  QComboBox::clear();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_60 = puVar3;
  QCoreApplication::translate
            ((char *)&local_68,"CNewVmWizExpressWinOptionsPagePD","Choose your Windows version...",0
            );
  FUN_1000341d0(&local_60);
  QComboBox::insertItems((int)uVar1,(QStringList *)0x0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d586e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005d586e:
  FUN_100039a80(&local_60);
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_70,"CNewVmWizExpressWinOptionsPagePD",
             "This version requires no product key.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d58d8;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005d58d8:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_78,"CNewVmWizExpressWinOptionsPagePD",
             "This version requires a product key",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d5939;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005d5939:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_80,"CNewVmWizExpressWinOptionsPagePD","Express installation",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d599a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005d599a:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_88,"CNewVmWizExpressWinOptionsPagePD",
             "Dashes will be added automatically",0);
  QLineEdit::setPlaceholderText(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d59fb;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005d59fb:
  pQVar2 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_90,"CNewVmWizExpressWinOptionsPagePD",
             "<style>a { color: #aaddf0; }</style><a href=\"%1\">Buy Windows 10 Home</a>",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d5a65;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005d5a65:
  pQVar2 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate
            ((char *)&local_98,"CNewVmWizExpressWinOptionsPagePD",
             "If you do not have a product key for Windows 10, you can buy it online from Microsoft Store:"
             ,0);
  QLabel::setText(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d5ad2;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005d5ad2:
  pQVar2 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate
            ((char *)&local_a0,"CNewVmWizExpressWinOptionsPagePD",
             "<style>a { color: #aaddf0; }</style><a href=\"%1\">Buy Windows 10 Pro</a>",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d5b3f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005d5b3f:
  puVar3 = PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x90));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      UNLOCK();
      if (*(int *)puVar3 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
  return;
}

