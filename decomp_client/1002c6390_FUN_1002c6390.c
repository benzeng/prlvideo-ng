
undefined8 FUN_1002c6390(QObject *param_1,undefined8 param_2)

{
  char cVar1;
  QProcess *this;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_2b = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x18);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_2a = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_2a) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar2;
    *(QProcess **)(param_1 + 0x20) = this;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar2);
    }
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QProcess::start(uVar4,param_2,3);
  iVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (iVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = QProcess::waitForStarted(iVar6);
  uVar4 = 0x80000009;
  if (cVar1 != '\0') {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = 0;
    QObject::connect(&local_38,uVar5,"2finished( int, QProcess::ExitStatus )",param_1,
                     "1onShellCommandProcessFinished( int, QProcess::ExitStatus )",0);
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  return uVar4;
}

