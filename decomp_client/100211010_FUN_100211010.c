
undefined8 FUN_100211010(long param_1)

{
  undefined8 uVar1;
  Connection local_20 [8];
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x208) != 0) &&
     (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x208) + 4) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x210);
  }
  uVar1 = FUN_100192380(uVar1);
  QObject::connect(local_20,uVar1,"2jobCompleted(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_20);
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

