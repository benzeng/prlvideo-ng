
undefined8 FUN_10026bb50(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Connection local_28 [8];
  
  pvVar1 = operator_new(0x68);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10026ba50(param_1);
  FUN_1001ef530(pvVar1,uVar3,uVar2);
  QObject::connect(local_28,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_28);
  CAbstractTask::execute();
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

