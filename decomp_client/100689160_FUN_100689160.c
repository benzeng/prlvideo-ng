
void * FUN_100689160(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  void *pvVar1;
  long local_38;
  
  pvVar1 = operator_new(0x60);
  FUN_1002c9250(pvVar1,param_2,param_3,param_4,param_5);
  QObject::connect(&local_38,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onSignInFinished(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  CAbstractTask::execute();
  return pvVar1;
}

