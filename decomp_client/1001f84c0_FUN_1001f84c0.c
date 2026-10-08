
undefined8 FUN_1001f84c0(long param_1)

{
  long in_RAX;
  void *pvVar1;
  undefined8 uVar2;
  long local_28;
  
  local_28 = in_RAX;
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_100785b00(pvVar1);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar1;
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100785c90(DAT_1023109d8,uVar2,9);
  QObject::connect(&local_28,uVar2,"2valueFetchFinished(PRL_RESULT)",param_1,
                   "1onDiskSpaceUsageFetchFinished(PRL_RESULT)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_100786550(uVar2);
  return 0;
}

