
void * FUN_10068cc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long local_30;
  
  pvVar1 = operator_new(0x50);
  FUN_10062e050(pvVar1,param_2,param_3);
  QObject::connect(&local_30,pvVar1,"2taskFinished( PRL_RESULT )",param_1,
                   "1onGetRenewUrlFinished(PRL_RESULT)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::execute();
  return pvVar1;
}

