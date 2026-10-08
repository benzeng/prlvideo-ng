
undefined8 FUN_100270bf0(undefined8 param_1)

{
  void *pvVar1;
  long local_20;
  
  pvVar1 = operator_new(0x18);
  FUN_1002ee230(pvVar1);
  QObject::connect(&local_20,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onSmartInstallFinished(PRL_RESULT)",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

