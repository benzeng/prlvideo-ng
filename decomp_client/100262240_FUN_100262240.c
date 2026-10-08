
undefined8 FUN_100262240(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_30;
  long local_28;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar2 = operator_new(0x70);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
  }
  FUN_1002d3da0(pvVar2,param_1 + 0x60,uVar4,uVar3);
  QObject::connect(&local_28,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,pvVar2,"2subTaskFinished(int, PRL_RESULT)",param_1,
                     "1onPostImportVmSubTaskFinished(int, PRL_RESULT)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,pvVar2,"2subTaskFinished(int, PRL_RESULT)",param_1,
                     "1onPostImportVmSubTaskFinished(int, PRL_RESULT)",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::execute();
  return 0;
}

