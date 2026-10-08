
void FUN_1002eaf30(CAbstractTask *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  pCVar3 = operator_new(0x18);
  FUN_1002ee110(pCVar3,param_2);
  CAbstractTask::CAbstractTask(param_1,pCVar3);
  *(undefined ***)param_1 = &PTR_FUN_10220ad80;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 1);
  FUN_100076800(param_1 + 0x30,param_3 + 2);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 1);
  FUN_100076800(param_1 + 0x38,param_3 + 3);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  QObject::connect(&local_40,param_1,"2taskStarted()",param_1,"1startResumeTimer()",0);
  if (local_40 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar4 = FUN_100060bb0();
  QObject::connect(&local_48,uVar4,"2afterContextAdded(QPointer<QObject>)",param_1,
                   "1onAfterContextAdded(QPointer<QObject>)",0);
  if ((cVar2 != '\0') && (local_48 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  CAbstractTask::setOption(param_1,4,1);
  return;
}

