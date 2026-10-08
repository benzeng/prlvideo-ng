
undefined8 FUN_100227350(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  Connection local_20 [8];
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar1 = FUN_1001923f0(uVar2,0);
  uVar2 = 0x80000009;
  if (lVar1 != 0) {
    QObject::connect(local_20,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onAccessRightsReceived(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_20);
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
  }
  return uVar2;
}

