
void FUN_100548ca0(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  QString local_60;
  QVariant local_58;
  QString local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CAppPreferencesAdvancedPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100548d13;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100548d13:
  QCoreApplication::translate((char *)&local_48,"CAppPreferencesAdvancedPage","Advanced",0);
  QVariant::QVariant(&local_40,&local_48);
  QObject::setProperty((char *)param_2,(QVariant *)"pageName");
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100548d8d;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100548d8d:
  QCoreApplication::translate((char *)&local_60,"CAppPreferencesAdvancedPage","PREFS_ADVANCED",0);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100548e07;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100548e07:
  QCoreApplication::translate((char *)&local_78,"CAppPreferencesAdvancedPage","NSAdvanced",0);
  QVariant::QVariant(&local_70,&local_78);
  QObject::setProperty((char *)param_2,(QVariant *)"nsStandardAction");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100548e81;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100548e81:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_80,"CAppPreferencesAdvancedPage","Speech:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100548ee2;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100548ee2:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_88,"CAppPreferencesAdvancedPage","Enable spoken commands",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100548f43;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100548f43:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_90,"CAppPreferencesAdvancedPage","Feedback:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100548fad;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100548fad:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_98,"CAppPreferencesAdvancedPage","Participate in the",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100549017;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100549017:
  pQVar1 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_a0,"CAppPreferencesAdvancedPage",
             "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:\'Lucida Grande\'; font-size:13pt; font-weight:400; font-style:normal;\">\n<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"CEP_URL\"><span style=\"color:#0000ff;\">%1</span></a></p></body></html>"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100549081;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100549081:
  pQVar1 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_a8,"CAppPreferencesAdvancedPage","Troubleshooting:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005490eb;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005490eb:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_b0,"CAppPreferencesAdvancedPage","Use detailed log messages",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100549155;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100549155:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_b8,"CAppPreferencesAdvancedPage","Reset all dialog warnings:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005491bf;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005491bf:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_c0,"CAppPreferencesAdvancedPage","Reset Warnings",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100549229;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100549229:
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate
            ((char *)&local_c8,"CAppPreferencesAdvancedPage","Show developer tools",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      UNLOCK();
      if (*(int *)local_c8 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
  return;
}

