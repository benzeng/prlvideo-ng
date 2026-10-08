
void FUN_10054d040(undefined8 param_1,char *param_2)

{
  QString local_50;
  QVariant local_48;
  QString local_38;
  QVariant local_30;
  undefined1 local_19;
  
  QCoreApplication::translate((char *)&local_38,"CAppPreferencesNetworkPage","PREFS_NETWORK",0);
  QVariant::QVariant(&local_30,&local_38);
  QObject::setProperty(param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10054d0c8;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10054d0c8:
  QCoreApplication::translate((char *)&local_50,"CAppPreferencesNetworkPage","Network",0);
  QVariant::QVariant(&local_48,&local_50);
  QObject::setProperty(param_2,(QVariant *)"pageName");
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

