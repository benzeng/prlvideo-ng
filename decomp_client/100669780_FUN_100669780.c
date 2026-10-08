
void FUN_100669780(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  long local_28;
  long local_20;
  
  CAbstractWizardPage::wizardModel();
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  QObject::connect(&local_20,uVar1,"2busyChanged(bool)",param_1,"1onBusyChanged(bool)",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    CAbstractWizardPage::wizardModel();
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    uVar1 = FUN_1006760c0(uVar1);
    QObject::connect(&local_28,uVar1,"2downloadKeysFinished(PRL_RESULT, const QString&)",param_1,
                     "1onDownloadKeysFinished(PRL_RESULT, const QString&)",2);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    CAbstractWizardPage::wizardModel();
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    uVar1 = FUN_1006760c0(uVar1);
    QObject::connect(&local_28,uVar1,"2downloadKeysFinished(PRL_RESULT, const QString&)",param_1,
                     "1onDownloadKeysFinished(PRL_RESULT, const QString&)",2);
    if ((cVar2 != '\0') && (local_28 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

