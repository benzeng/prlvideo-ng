
undefined8 FUN_1002d9ff0(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long lVar2;
  long local_28;
  
  local_28 = in_RAX;
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x28);
  uVar1 = 0x80000009;
  if (lVar2 != 0) {
    CAbstractTask::setWaitForSubTaskCompletion();
    lVar2 = FUN_1001998a0(lVar2);
    *(undefined1 *)(lVar2 + 0x60) = 1;
    uVar1 = 0;
    QObject::connect(&local_28,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onGuestOsInformationRequested(PRL_RESULT)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  return uVar1;
}

