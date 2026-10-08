
undefined8 FUN_100284f10(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  Connection local_30 [8];
  Connection local_28 [8];
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar1 = operator_new(0x168);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100209ab0(pvVar1,uVar2,*(undefined8 *)(param_1 + 0x28),4,0);
  QObject::connect(local_28,pvVar1,"2vmCreationProgress(int)",param_1,"2vmCreationProgress(int)",0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_30);
  CAbstractTask::execute();
  return 0;
}

