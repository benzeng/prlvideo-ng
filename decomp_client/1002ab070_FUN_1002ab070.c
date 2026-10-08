
undefined8 FUN_1002ab070(long param_1)

{
  long in_RAX;
  void *pvVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long local_28;
  
  local_28 = in_RAX;
  pvVar1 = operator_new(0x40);
  uVar3 = 0x3d;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar3 = 0x3c;
  }
  uVar2 = FUN_100152280();
  uVar2 = FUN_1001554a0(uVar2);
  FUN_100299220(pvVar1,uVar3,uVar2,0);
  QObject::connect(&local_28,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

