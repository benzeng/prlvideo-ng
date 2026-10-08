
undefined8 FUN_1002d2b30(long param_1)

{
  long in_RAX;
  long lVar1;
  undefined8 uVar2;
  long local_28;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  local_28 = in_RAX;
  lVar1 = FUN_10019ba90(uVar2);
  uVar2 = 0x80000009;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x60) = 1;
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
    QObject::connect(&local_28,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  return uVar2;
}

