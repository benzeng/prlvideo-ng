
undefined8 FUN_100214c50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_20;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar1 = FUN_1001989d0(uVar2,*(undefined4 *)(param_1 + 0x30));
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t create suspend screen request");
    uVar2 = 0x80000009;
  }
  else {
    uVar2 = 0;
    QObject::connect(&local_20,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onScreenReceived(PRL_RESULT)",0);
    if (local_20 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return uVar2;
}

