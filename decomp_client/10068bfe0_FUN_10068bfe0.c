
void * FUN_10068bfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long local_30;
  
  pvVar1 = operator_new(0x50);
  FUN_1002d8700(pvVar1,param_2,param_3);
  QObject::connect(&local_30,pvVar1,"2taskFinished( PRL_RESULT )",param_1,
                   "1onGetUpgradeToProUrlFinished(PRL_RESULT)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::execute();
  return pvVar1;
}

