
undefined4 FUN_10028d060(QObject *param_1)

{
  long lVar1;
  char cVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  undefined4 uVar7;
  long local_30;
  undefined4 local_28;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  pQVar3 = (QObject *)FUN_10061bb30(*(undefined8 *)(param_1 + 0x18));
  piVar4 = (int *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  piVar5 = *(int **)(param_1 + 0x40);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_23 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x40);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_22 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x40));
      }
    }
    *(int **)(param_1 + 0x40) = piVar4;
    *(QObject **)(param_1 + 0x48) = pQVar3;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_21 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar4);
    }
  }
  uVar7 = 0x80000009;
  if ((((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
      (*(bool **)(param_1 + 0x48) != (bool *)0x0)) &&
     (cVar2 = CSdkRequest::isCompleted(*(bool **)(param_1 + 0x48),(int *)0x0), uVar7 = local_28,
     cVar2 == '\0')) {
    lVar1 = *(long *)(param_1 + 0x48);
    *(undefined1 *)(lVar1 + 0x60) = 1;
    lVar6 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar6 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      lVar6 = lVar1;
    }
    QObject::connect(&local_30,lVar6,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onActivationOnlineFinished()",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    CAbstractTask::setWaitForSubTaskCompletion();
    QTimer::singleShot(2000,param_1,"1onActivationOnlineTimeout()");
    uVar7 = 0;
  }
  return uVar7;
}

