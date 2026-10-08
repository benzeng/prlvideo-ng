
undefined8 FUN_100245630(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long local_20;
  
  pvVar1 = operator_new(0x40);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1002ac210(pvVar1,uVar2);
  QObject::connect(&local_20,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onDeferredLicenseActivationFinished(PRL_RESULT)",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

