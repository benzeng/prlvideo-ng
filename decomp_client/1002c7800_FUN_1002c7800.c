
undefined8 FUN_1002c7800(long param_1)

{
  long in_RAX;
  void *pvVar1;
  long local_28;
  
  local_28 = in_RAX;
  CAbstractTask::setWaitForSubTaskCompletion();
  if (DAT_1023108f0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001beb60(pvVar1);
    DAT_10226db18 = 1;
    DAT_1023108f0 = pvVar1;
  }
  QObject::connect(&local_28,DAT_1023108f0,"2proxyCommited(QString,uint,PRL_RESULT)",param_1,
                   "1onProxyCommited(QString,uint,PRL_RESULT)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  if (DAT_1023108f0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001beb60(pvVar1);
    DAT_10226db18 = 1;
    DAT_1023108f0 = pvVar1;
  }
  FUN_1001bf6a0(DAT_1023108f0,param_1 + 0x40);
  return 0;
}

