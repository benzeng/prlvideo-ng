
undefined8 FUN_100240800(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long local_20;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar1 = operator_new(0x40);
  uVar2 = FUN_100152280();
  uVar2 = FUN_1001548f0(uVar2,param_1 + 0x18);
  uVar2 = FUN_10018d490(uVar2);
  FUN_100299220(pvVar1,0x1d,uVar2,0);
  QObject::connect(&local_20,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

