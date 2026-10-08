
void * FUN_10068bc30(undefined8 param_1,undefined8 param_2)

{
  long in_RAX;
  void *pvVar1;
  undefined8 uVar2;
  long local_28;
  
  local_28 = in_RAX;
  pvVar1 = operator_new(0x48);
  uVar2 = FUN_10061b510(param_2);
  FUN_1002cb040(pvVar1,uVar2);
  QObject::connect(&local_28,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onDeactivateLicenseFinished(PRL_RESULT)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  CAbstractTask::execute();
  return pvVar1;
}

