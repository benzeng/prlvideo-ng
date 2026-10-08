
void FUN_100550f70(long param_1,char *param_2)

{
  QString *pQVar1;
  QArrayData *local_98;
  QArrayData *local_90;
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
  
  QCoreApplication::translate((char *)&local_40,"CAppPreferencesInstallPaxPage","Access",0);
  QVariant::QVariant(&local_38,&local_40);
  QObject::setProperty(param_2,(QVariant *)"pageName");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100550ffd;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100550ffd:
  QCoreApplication::translate((char *)&local_58,"CAppPreferencesInstallPaxPage","PREFS_IPHONE",0);
  QVariant::QVariant(&local_50,&local_58);
  QObject::setProperty(param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100551077;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100551077:
  pQVar1 = *(QString **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_60,"CAppPreferencesInstallPaxPage","Parallels Access Client",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005510d8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005510d8:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_68,"CAppPreferencesInstallPaxPage",
             "Parallels Access Client allows you to use your Mac and Windows applications from an iPad, iPhone, Android device or a <a href=\"%1\">web browser</a>."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100551139;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100551139:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_70,"CAppPreferencesInstallPaxPage","Parallels Access Agent for Mac",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10055119a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10055119a:
  pQVar1 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_78,"CAppPreferencesInstallPaxPage",
             "To allow Parallels Access to connect to your Mac through the Internet, please install the Parallels Access agent on your Mac."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005511fb;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005511fb:
  pQVar1 = *(QString **)(param_1 + 0xa0);
  QCoreApplication::translate((char *)&local_80,"CAppPreferencesInstallPaxPage","Install",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10055125f;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10055125f:
  pQVar1 = *(QString **)(param_1 + 0xc0);
  QCoreApplication::translate((char *)&local_88,"CAppPreferencesInstallPaxPage","Cancel",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005512c3;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005512c3:
  pQVar1 = *(QString **)(param_1 + 0xf0);
  QCoreApplication::translate
            ((char *)&local_90,"CAppPreferencesInstallPaxPage","Parallels Access agent is installed"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100551330;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100551330:
  pQVar1 = *(QString **)(param_1 + 0x100);
  QCoreApplication::translate((char *)&local_98,"CAppPreferencesInstallPaxPage","Open",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
  return;
}

