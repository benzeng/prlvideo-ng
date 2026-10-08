
undefined8 FUN_100225a10(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  Connection local_38 [13];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100319390(uVar2);
  pQVar3 = (QObject *)FUN_100192d10(uVar2,0x27f,0,0);
  uVar2 = 0x80000009;
  if (pQVar3 != (QObject *)0x0) {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 != '\0') {
      uVar2 = CAbstractTask::getResult();
      return uVar2;
    }
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar5 = *(int **)(param_1 + 0x48);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_2b = *piVar4 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x48);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_2a = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_2a) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x48));
        }
      }
      *(int **)(param_1 + 0x48) = piVar4;
      *(QObject **)(param_1 + 0x50) = pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
    QObject::connect(local_38,pQVar3,"2taskFinished( PRL_RESULT )",param_1,
                     "1onVmLaunchTaskFinished( PRL_RESULT )",0);
    QMetaObject::Connection::~Connection(local_38);
  }
  return uVar2;
}

