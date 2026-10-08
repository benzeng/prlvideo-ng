
void FUN_10057a340(long param_1,char *param_2)

{
  QString *pQVar1;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_40,"CAppPreferencesInstallToolboxPage","Toolbox",0);
  QVariant::QVariant(&local_38,&local_40);
  QObject::setProperty(param_2,(QVariant *)"pageName");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057a3cd;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10057a3cd:
  QCoreApplication::translate
            ((char *)&local_58,"CAppPreferencesInstallToolboxPage","PREFS_TOOLBOX",0);
  QVariant::QVariant(&local_50,&local_58);
  QObject::setProperty(param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057a447;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10057a447:
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 8));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057a48f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10057a48f:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_68,"CAppPreferencesInstallToolboxPage","Parallels Toolbox",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057a4f0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10057a4f0:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_70,"CAppPreferencesInstallToolboxPage",
             "Parallels Toolbox is a collection of essential tools \nto help you get things done quickly on your Mac."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057a551;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10057a551:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_78,"CAppPreferencesInstallToolboxPage","Install",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057a5b2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10057a5b2:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_80,"CAppPreferencesInstallToolboxPage","Cancel",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057a613;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10057a613:
  pQVar1 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate((char *)&local_88,"CAppPreferencesInstallToolboxPage","Open",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
  return;
}

