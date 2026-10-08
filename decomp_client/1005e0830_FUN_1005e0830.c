
void FUN_1005e0830(long param_1,QString *param_2)

{
  QString *pQVar1;
  char *pcVar2;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QVariant local_60;
  QString local_50;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CNewVmWizNameAndLocationPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e08a3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005e08a3:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_38,"CNewVmWizNameAndLocationPage","Share with other users of this Mac",0
            );
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e0904;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005e0904:
  pcVar2 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_50,"CNewVmWizNameAndLocationPage","Share with other users of this Mac",0
            );
  QVariant::QVariant(&local_48,&local_50);
  QObject::setProperty(pcVar2,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e0982;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1005e0982:
  pcVar2 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_68,"CNewVmWizNameAndLocationPage",
             "Let other host computer users access this virtual machine",0);
  QVariant::QVariant(&local_60,&local_68);
  QObject::setProperty(pcVar2,(QVariant *)"DynProp_WinLinText");
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e0a00;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1005e0a00:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_70,"CNewVmWizNameAndLocationPage","Create alias on Mac desktop",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e0a61;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005e0a61:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_78,"CNewVmWizNameAndLocationPage","Free space on selected disk: 1 gb",0)
  ;
  QLabel::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e0ac2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005e0ac2:
  pQVar1 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_80,"CNewVmWizNameAndLocationPage",
             "Customize settings before installation",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e0b23;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005e0b23:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_88,"CNewVmWizNameAndLocationPage","Name:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e0b84;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005e0b84:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_90,"CNewVmWizNameAndLocationPage","Location:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e0bee;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005e0bee:
  pQVar1 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate
            ((char *)&local_98,"CNewVmWizNameAndLocationPage","Virtual machine will take: 2gb",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e0c5b;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005e0c5b:
  pQVar1 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate
            ((char *)&local_a0,"CNewVmWizNameAndLocationPage","Free up Disk Space...",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      UNLOCK();
      if (*(int *)local_a0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
  return;
}

