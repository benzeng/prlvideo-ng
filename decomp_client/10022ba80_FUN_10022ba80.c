
undefined8 FUN_10022ba80(long param_1)

{
  void *pvVar1;
  long local_20;
  
  pvVar1 = operator_new(0x50);
  FUN_10022d660(pvVar1,param_1 + 0x38,param_1 + 0x30,0);
  QObject::connect(&local_20,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_10022d670(pvVar1);
  return 0;
}

