
undefined8 FUN_100259e60(long param_1)

{
  int iVar1;
  long in_RAX;
  undefined8 uVar2;
  long local_18;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  local_18 = in_RAX;
  iVar1 = FUN_10018a9d0(uVar2);
  if (iVar1 == 0x30000005) {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_100198c90(uVar2,0x800,0,0);
    QObject::connect(&local_18,uVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_18 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_18);
  }
  return 0;
}

