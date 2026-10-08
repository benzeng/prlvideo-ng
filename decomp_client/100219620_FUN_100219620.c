
undefined8 FUN_100219620(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  undefined8 uVar2;
  long local_18;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  local_18 = in_RAX;
  uVar1 = FUN_10018c280(uVar1);
  FUN_10031a170(uVar1,1);
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar1 = FUN_100192d60(uVar1,0x800,0x26f,uVar2,0);
  QObject::connect(&local_18,uVar1,"2taskFinished(PRL_RESULT)",param_1,"1onVmStarted(PRL_RESULT)",0)
  ;
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return 0;
}

