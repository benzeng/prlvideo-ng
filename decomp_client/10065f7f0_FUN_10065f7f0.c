
void FUN_10065f7f0(undefined8 param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long local_18;
  
  local_18 = in_RAX;
  CAbstractWizardPage::wizardModel();
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  QObject::connect(&local_18,uVar1,"2busyChanged(bool)",param_1,"1onBusyChanged(bool)",0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return;
}

