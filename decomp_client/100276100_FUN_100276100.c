
undefined8 FUN_100276100(long param_1)

{
  long in_RAX;
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_28;
  
  uVar3 = 0x22;
  if ((*(int *)(param_1 + 0x28) == 0) || (uVar3 = 0x23, *(int *)(param_1 + 0x28) == 1)) {
    local_28 = in_RAX;
    pvVar1 = operator_new(0x40);
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_10018d490(uVar2);
    FUN_100299220(pvVar1,uVar3,uVar2,0);
    QObject::connect(&local_28,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    CAbstractTask::setWaitForSubTaskCompletion();
    CAbstractTask::execute();
  }
  return 0;
}

