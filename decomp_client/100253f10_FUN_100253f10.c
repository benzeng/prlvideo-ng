
undefined8 FUN_100253f10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_20;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_10018a9d0(uVar3);
  uVar3 = 0x3bfa;
  if (iVar1 == 0x30000005) {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = 0;
    uVar2 = FUN_100198c90(uVar2,0x800,0,0);
    QObject::connect(&local_20,uVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_20 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_20);
  }
  return uVar3;
}

