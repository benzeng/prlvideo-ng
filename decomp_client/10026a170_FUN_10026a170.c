
undefined8 FUN_10026a170(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long local_18;
  
  local_18 = in_RAX;
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100194170(uVar1,0);
  QObject::connect(&local_18,uVar1,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onSnapshotsTreeRequested(PRL_RESULT)",0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return 0;
}

