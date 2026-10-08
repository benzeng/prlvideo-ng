
void FUN_1003968b0(long param_1,QString *param_2)

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
  
  QCoreApplication::translate((char *)&local_30,"CAboutDialogCentralWidget","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100396920;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100396920:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_38,"CAboutDialogCentralWidget","Build @",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100396981;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100396981:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_40,"CAboutDialogCentralWidget",s__1_101df0e4e,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003969e2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003969e2:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_48,"CAboutDialogCentralWidget",
             "This product is protected by United States and international copyright laws. The product underlying technology, patents, and trademarks are listed at <a href=\"%1\"><span style=\" text-decoration: underline; color:%2;\">http://www.parallels.com/trademarks</span></a>"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100396a43;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100396a43:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate
            ((char *)&local_50,"CAboutDialogCentralWidget","Licensing Information:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100396aa4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100396aa4:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate((char *)&local_58,"CAboutDialogCentralWidget","Licensed to: %1",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100396b05;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100396b05:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate
            ((char *)&local_60,"CAboutDialogCentralWidget","Next license renewal: %1",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100396b66;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100396b66:
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate
            ((char *)&local_68,"CAboutDialogCentralWidget","This is an %1 copy of %2.",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100396bca;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100396bca:
  pQVar1 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate
            ((char *)&local_70,"CAboutDialogCentralWidget",
             "Support Information:<br/><a href=\"%1\"><span style=\" text-decoration: underline; color:%2;\">%1</span></a>"
             ,0);
  QLabel::setText(pQVar1);
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

