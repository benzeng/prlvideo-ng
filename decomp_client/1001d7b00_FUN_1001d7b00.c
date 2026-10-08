
void FUN_1001d7b00(undefined8 param_1)

{
  void *pvVar1;
  long local_20;
  
  pvVar1 = operator_new(0x40);
  FUN_10026e420(pvVar1);
  QObject::connect(&local_20,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onTaskStartApplicationFinished(PRL_RESULT)",0x80);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  CAbstractTask::execute();
  return;
}

