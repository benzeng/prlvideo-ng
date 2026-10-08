
undefined8 FUN_1002d8340(long param_1)

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
  uVar2 = FUN_100190790(uVar2);
  iVar1 = FUN_1007c9210(uVar2);
  if (iVar1 != 1) {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_100190790(uVar2);
    QObject::connect(&local_18,uVar2,"2debuggerStateChanged(PRL_VM_DEBUGGER_STATE)",param_1,
                     "1onDebuggerStateChanged(PRL_VM_DEBUGGER_STATE)",0);
    if (local_18 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_18);
  }
  return 0;
}

