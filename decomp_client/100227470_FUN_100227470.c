
undefined8 FUN_100227470(long param_1)

{
  QObject *pQVar1;
  undefined8 uVar2;
  long local_20;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pQVar1 = operator_new(0x40);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100299220(pQVar1,0x3e,uVar2,0);
  QObject::connect(&local_20,pQVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  QTimer::singleShot(0,pQVar1,"1execute()");
  return 0;
}

