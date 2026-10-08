
void FUN_100533650(undefined8 param_1,QString *param_2)

{
  QString local_58;
  QVariant local_50;
  QString local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  QCoreApplication::translate((char *)&local_28,"CAppPreferencesShortcutsPage","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005336bb;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005336bb:
  QCoreApplication::translate((char *)&local_40,"CAppPreferencesShortcutsPage","Shortcuts",0);
  QVariant::QVariant(&local_38,&local_40);
  QObject::setProperty((char *)param_2,(QVariant *)"pageName");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100533735;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100533735:
  QCoreApplication::translate((char *)&local_58,"CAppPreferencesShortcutsPage","PREFS_KEYBOARD",0);
  QVariant::QVariant(&local_50,&local_58);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return;
}

