
void * FUN_100689280(undefined8 param_1,undefined8 param_2)

{
  long in_RAX;
  void *pvVar1;
  long local_28;
  
  local_28 = in_RAX;
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Sign Out.");
  pvVar1 = operator_new(0x48);
  FUN_1002c9c10(pvVar1,param_2);
  QObject::connect(&local_28,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onSignOutFinished(PRL_RESULT)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  CAbstractTask::execute();
  return pvVar1;
}

