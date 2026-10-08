
undefined8 FUN_10020c230(long param_1)

{
  undefined8 uVar1;
  Connection local_20 [8];
  
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100197a70(uVar1,param_1 + 0x48,param_1 + 0x50);
  QObject::connect(local_20,uVar1,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onChangePasswordCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_20);
  return 0;
}

