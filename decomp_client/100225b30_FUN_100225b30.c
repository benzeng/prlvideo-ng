
undefined8 FUN_100225b30(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Connection local_28 [8];
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar1 = operator_new(0x50);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100319390(uVar2);
  uVar3 = FUN_100225db0(param_1);
  FUN_1001f0380(pvVar1,uVar2,uVar3,0);
  QObject::connect(local_28,pvVar1,"2taskFinished( PRL_RESULT )",param_1,
                   "1subTaskCompleted( PRL_RESULT )",0);
  QMetaObject::Connection::~Connection(local_28);
  CAbstractTask::execute();
  return 0;
}

