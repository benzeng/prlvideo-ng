
undefined8 FUN_1002728e0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long in_RAX;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_28;
  
  uVar4 = 0x3bfa;
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    local_28 = in_RAX;
    uVar3 = FUN_100157d20();
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
      CAbstractTask::setWaitForSubTaskCompletion();
      uVar4 = 0;
      QObject::connect(&local_28,uVar3,"2taskFinished(PRL_RESULT)",param_1,
                       "1onLoginFinished(PRL_RESULT)",0);
      if (local_28 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_28);
    }
    else {
      uVar2 = CAbstractTask::getResult();
      FUN_1002729b0(param_1,uVar2);
      uVar4 = 0;
    }
  }
  return uVar4;
}

