
void FUN_1003943d0(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
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
  
  QCoreApplication::translate((char *)&local_38,"CAboutDialog","About %1",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100394442;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100394442:
  puVar2 = PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x38));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10039448a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10039448a:
  local_48 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x60));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003944cb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003944cb:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_50,"CAboutDialog","Product Name",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10039452c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10039452c:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_58,"CAboutDialog","Product Name Minor",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10039458d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10039458d:
  local_60 = (QArrayData *)puVar2;
  QAbstractButton::setText(*(QString **)(param_1 + 0x98));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003945d1;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003945d1:
  local_68 = (QArrayData *)puVar2;
  QAbstractButton::setText(*(QString **)(param_1 + 0xa0));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100394615;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100394615:
  pQVar1 = *(QString **)(param_1 + 0xa8);
  QCoreApplication::translate((char *)&local_70,"CAboutDialog","Follow Parallels on:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100394679;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100394679:
  pQVar1 = *(QString **)(param_1 + 200);
  QCoreApplication::translate
            ((char *)&local_78,"CAboutDialog",
             "<span style=\"color:red\">NEW!</span> @@PRODUCT_NAME %1 for Mac is available!",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003946dd;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003946dd:
  pQVar1 = *(QString **)(param_1 + 0xe8);
  QCoreApplication::translate((char *)&local_80,"CAboutDialog","Learn more...",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100394741;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100394741:
  pQVar1 = *(QString **)(param_1 + 0x120);
  QCoreApplication::translate((char *)&local_88,"CAboutDialog","Send Feedback",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003947a5;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003947a5:
  pQVar1 = *(QString **)(param_1 + 0x128);
  QCoreApplication::translate((char *)&local_90,"CAboutDialog","Buy",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100394812;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100394812:
  QAbstractButton::setText(*(QString **)(param_1 + 0x140));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
  return;
}

