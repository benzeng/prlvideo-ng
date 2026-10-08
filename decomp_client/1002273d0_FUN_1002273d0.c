
undefined8 FUN_1002273d0(long param_1)

{
  QObject *pQVar1;
  undefined8 uVar2;
  Connection local_28 [8];
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pQVar1 = operator_new(0x68);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001ef530(pQVar1,uVar2,0);
  QObject::connect(local_28,pQVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_28);
  QTimer::singleShot(0,pQVar1,"1execute()");
  return 0;
}

