
undefined8 FUN_1002c0930(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long local_20;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_10018c280(uVar1);
  lVar2 = FUN_10031bef0(uVar1,0,param_1 + 0x28);
  uVar1 = 0x3bfa;
  if (lVar2 != 0) {
    uVar1 = 0;
    QObject::connect(&local_20,lVar2,"2switchFinished(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_20 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return uVar1;
}

