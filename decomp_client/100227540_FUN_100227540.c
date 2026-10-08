
undefined8 FUN_100227540(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  Connection local_28 [8];
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar1 = FUN_100192800(uVar2);
  uVar2 = 0x80000009;
  if (lVar1 != 0) {
    uVar2 = 0;
    QObject::connect(local_28,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onEditSessionBegan(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_28);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return uVar2;
}

