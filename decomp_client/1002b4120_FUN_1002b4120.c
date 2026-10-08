
undefined8 FUN_1002b4120(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  QStringList *pQVar4;
  undefined8 uVar5;
  long local_38;
  undefined1 local_30 [15];
  undefined1 local_21;
  
  pQVar1 = operator_new(0x18);
  CSpotlightWrapper::CSpotlightWrapper((CSpotlightWrapper *)pQVar1,param_1,1);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x20);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
    }
    *(int **)(param_1 + 0x20) = piVar2;
    *(QObject **)(param_1 + 0x28) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar2);
    }
  }
  pQVar4 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (pQVar4 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
    pQVar4 = *(QStringList **)(param_1 + 0x28);
  }
  FUN_1002b42d0(local_30);
  CSpotlightWrapper::setSearchPatterns(pQVar4);
  FUN_100039a80();
  pQVar4 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (pQVar4 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
    pQVar4 = *(QStringList **)(param_1 + 0x28);
  }
  CSpotlightWrapper::setDirsForSearch(pQVar4);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  QObject::connect(&local_38,uVar5,"2finished()",param_1,"1onSpotlightSearchFinished()",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  CAbstractTask::setWaitForSubTaskCompletion();
  CSpotlightWrapper::startSearch();
  return 0;
}

