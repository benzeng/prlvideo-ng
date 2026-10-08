
undefined8 FUN_1000699b0(QObject *param_1,undefined8 param_2)

{
  char cVar1;
  QProcess *this;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x18);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
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
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = '\0';
  QObject::connect(&local_38,uVar4,"2error(QProcess::ProcessError)",param_1,
                   "1onError(QProcess::ProcessError)",0);
  if (local_38 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_40,uVar4,"2finished(int, QProcess::ExitStatus)",param_1,
                   "1onShellCommandProcessFinished(int, QProcess::ExitStatus)",0);
  if ((cVar1 != '\0') && (local_40 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QProcess::start(uVar4,param_2,3);
  return 0;
}

