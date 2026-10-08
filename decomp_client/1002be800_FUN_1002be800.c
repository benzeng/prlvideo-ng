
undefined8 FUN_1002be800(long param_1)

{
  long lVar1;
  char cVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  cVar2 = '\0';
  QObject::connect(&local_38,uVar6,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                   "1onVmConfigarationChanged(const CVmConfiguration&)",0);
  if (local_38 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  pQVar3 = (QObject *)FUN_100199940(uVar6,param_1 + 0x60,1);
  piVar4 = (int *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  piVar5 = *(int **)(param_1 + 0x50);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x50);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x50));
      }
    }
    *(int **)(param_1 + 0x50) = piVar4;
    *(QObject **)(param_1 + 0x58) = pQVar3;
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
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined1 *)(lVar1 + 0x60) = 1;
  lVar7 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (lVar7 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    lVar7 = lVar1;
  }
  QObject::connect(&local_40,lVar7,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onProtectionRequestCompleted(PRL_RESULT)",0);
  if ((cVar2 != '\0') && (local_40 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return 0;
}

