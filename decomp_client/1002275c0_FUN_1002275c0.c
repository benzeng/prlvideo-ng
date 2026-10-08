
undefined8 FUN_1002275c0(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long local_20;
  
  pvVar1 = operator_new(0x38);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10029b6f0(pvVar1,uVar2,0);
  CAbstractTask::setWaitForSubTaskCompletion();
  QObject::connect(&local_20,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  CAbstractTask::execute();
  return 0;
}

