
undefined8 FUN_1002f4ba0(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long local_18;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  local_18 = in_RAX;
  FUN_1006f4d80(uVar1,param_1 + 0x40);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_1006f4d50(uVar1,1);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  QObject::connect(&local_18,uVar1,"2finished(int)",param_1,"1onFreeUpgradeDialogClosed(int)",0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

