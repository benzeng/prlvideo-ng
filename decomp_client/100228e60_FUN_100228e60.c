
undefined8 FUN_100228e60(long param_1)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar2 = (QObject *)
           FUN_100195800(uVar5,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x38));
  piVar3 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar4 = *(int **)(param_1 + 0x40);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_23 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x40);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_22 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x40));
      }
    }
    *(int **)(param_1 + 0x40) = piVar3;
    *(QObject **)(param_1 + 0x48) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  lVar1 = *(long *)(param_1 + 0x48);
  *(undefined1 *)(lVar1 + 0x60) = 1;
  uVar5 = 0x80000009;
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (lVar1 != 0)) {
    uVar5 = 0;
    QObject::connect(&local_30,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return uVar5;
}

