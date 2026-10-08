
void FUN_10053b410(long param_1,QString *param_2)

{
  QString *pQVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  QString local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QVariant local_80;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  QCoreApplication::translate((char *)&local_58,"CAppPreferencesUSBPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b485;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10053b485:
  QCoreApplication::translate((char *)&local_70,"CAppPreferencesUSBPage","Devices",0);
  QVariant::QVariant(&local_68,&local_70);
  QObject::setProperty((char *)param_2,(QVariant *)"pageName");
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b4ff;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10053b4ff:
  QCoreApplication::translate((char *)&local_88,"CAppPreferencesUSBPage","PREFS_USB",0);
  QVariant::QVariant(&local_80,&local_88);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b579;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10053b579:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_90,"CAppPreferencesUSBPage","When a new external device is detected:",0)
  ;
  QLabel::setText(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b5e3;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10053b5e3:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_98,"CAppPreferencesUSBPage","Connect it to my Mac",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b64d;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10053b64d:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_a0,"CAppPreferencesUSBPage","Connect it to the active virtual machine",0
            );
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b6b7;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10053b6b7:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_a8,"CAppPreferencesUSBPage","Ask me what to do",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b721;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10053b721:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate
            ((char *)&local_b0,"CAppPreferencesUSBPage","Mirror Windows-connected drives on Mac",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b78b;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10053b78b:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_b8,"CAppPreferencesUSBPage","Permanent Assignments:",0)
  ;
  QLabel::setText(pQVar1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b7f5;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10053b7f5:
  plVar4 = (long *)QTreeWidget::headerItem();
  QCoreApplication::translate((char *)&local_c0,"CAppPreferencesUSBPage","Connect To",0);
  pcVar2 = *(code **)(*plVar4 + 0x20);
  QVariant::QVariant(&local_50,&local_c0);
  (*pcVar2)(plVar4,1,0);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b888;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_10053b888:
  QCoreApplication::translate((char *)&local_c8,"CAppPreferencesUSBPage","Devices",0);
  pcVar2 = *(code **)(*plVar4 + 0x20);
  QVariant::QVariant(&local_40,&local_c8);
  (*pcVar2)(plVar4,0,0,&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_29 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b90c;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_10053b90c:
  puVar3 = PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x90));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b963;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_10053b963:
  QAbstractButton::setText(*(QString **)(param_1 + 0x98));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053b9b3;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_10053b9b3:
  QAbstractButton::setText(*(QString **)(param_1 + 0xa8));
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

