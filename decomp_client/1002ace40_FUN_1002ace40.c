
undefined8 FUN_1002ace40(QObject *param_1)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar2 = (QObject *)FUN_10061bde0(uVar6);
  piVar3 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar4 = *(int **)(param_1 + 0x30);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_23 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x30);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_22 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x30));
      }
    }
    *(int **)(param_1 + 0x30) = piVar3;
    *(QObject **)(param_1 + 0x38) = pQVar2;
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
  uVar6 = 0x80000009;
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (*(bool **)(param_1 + 0x38) != (bool *)0x0)) {
    uVar6 = 0;
    cVar1 = CSdkRequest::isCompleted(*(bool **)(param_1 + 0x38),(int *)0x0);
    if (cVar1 == '\0') {
      CAbstractTask::setWaitForSubTaskCompletion();
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
      }
      uVar6 = 0;
      QObject::connect(&local_30,uVar5,"2jobCompleted(PRL_RESULT)",param_1,
                       "1onPrecachedLicenseUpdateFinished(PRL_RESULT)",0);
      if (local_30 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      QTimer::singleShot(30000,param_1,"1onPrecachedLicenseUpdateTimeout()");
    }
  }
  return uVar6;
}

