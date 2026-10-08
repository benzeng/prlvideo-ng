
undefined8 FUN_1002e9d50(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  void *pvVar2;
  long local_28;
  
  local_28 = in_RAX;
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar1 = FUN_100152280();
  uVar1 = FUN_1001554a0(uVar1);
  uVar1 = FUN_10015cb20(uVar1,param_1 + 0x18);
  uVar1 = FUN_100199f80(uVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  pvVar2 = operator_new(0x48);
  FUN_1002ea310(pvVar2,uVar1,param_1);
  CAbstractProgressOperation::setProgress((int)pvVar2);
  CAbstractProgressOperation::setState(pvVar2,1);
  *(void **)(param_1 + 0x28) = pvVar2;
  QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x30),"2jobCompleted(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return 0;
}

