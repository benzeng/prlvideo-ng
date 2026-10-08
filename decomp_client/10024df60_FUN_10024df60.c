
undefined8 FUN_10024df60(long param_1)

{
  int iVar1;
  long in_RAX;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  local_28 = in_RAX;
  iVar1 = FUN_10018a9d0(uVar3);
  uVar3 = 0x3bfa;
  if (iVar1 == 0x30000005) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = FUN_100192d60(uVar3,0x800,0x3ff,0,0);
    uVar3 = 0x80000009;
    if (lVar2 != 0) {
      CAbstractTask::setWaitForSubTaskCompletion();
      uVar3 = 0;
      QObject::connect(&local_28,lVar2,"2taskFinished(PRL_RESULT)",param_1,
                       "1subTaskCompleted(PRL_RESULT)",0);
      if (local_28 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_28);
    }
  }
  return uVar3;
}

