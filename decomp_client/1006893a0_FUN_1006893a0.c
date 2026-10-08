
void * FUN_1006893a0(undefined8 param_1,undefined8 param_2)

{
  long in_RAX;
  void *pvVar1;
  long local_28;
  
  local_28 = in_RAX;
  pvVar1 = operator_new(0x50);
  FUN_1002d14a0(pvVar1,param_2);
  QObject::connect(&local_28,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onAskAccountConfirmationFinished(PRL_RESULT)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  CAbstractTask::execute();
  return pvVar1;
}

