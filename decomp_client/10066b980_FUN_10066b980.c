
void FUN_10066b980(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  long local_38;
  long local_30;
  long local_28;
  
  CAbstractWizardPage::wizardModel();
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  QObject::connect(&local_28,uVar1,"2busyChanged(bool)",param_1,"1onBusyChanged(bool)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    CAbstractWizardPage::wizardModel();
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    uVar1 = FUN_1006760c0(uVar1);
    QObject::connect((Connection *)&local_30,uVar1,
                     "2downloadKeysFinished(PRL_RESULT, const QString&)",param_1,
                     "1onDownloadKeysFinished(PRL_RESULT, const QString&)",2);
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    CAbstractWizardPage::wizardModel();
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    CAbstractWizardPage::wizardModel();
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    uVar1 = FUN_1006760c0(uVar1);
    QObject::connect(&local_30,uVar1,"2downloadKeysFinished(PRL_RESULT, const QString&)",param_1,
                     "1onDownloadKeysFinished(PRL_RESULT, const QString&)",2);
    if ((cVar2 != '\0') && (local_30 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      CAbstractWizardPage::wizardModel();
      uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
      uVar1 = FUN_1006760c0(uVar1);
      QObject::connect(&local_38,uVar1,
                       "2waitKeysChangesInAccountFinished(PRL_RESULT, CAbstractTask*)",param_1,
                       "1onWaitKeysChangesInAccountFinished(PRL_RESULT, CAbstractTask*)",2);
      if ((cVar2 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10066bb75;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    CAbstractWizardPage::wizardModel();
  }
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  uVar1 = FUN_1006760c0(uVar1);
  QObject::connect(&local_38,uVar1,"2waitKeysChangesInAccountFinished(PRL_RESULT, CAbstractTask*)",
                   param_1,"1onWaitKeysChangesInAccountFinished(PRL_RESULT, CAbstractTask*)",2);
LAB_10066bb75:
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

