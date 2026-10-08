
void FUN_1002aa7f0(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  void *pvVar6;
  
  pvVar6 = (void *)(ulong)param_3;
  lVar4 = QFutureInterfaceBase::mutex();
  if (lVar4 != 0) {
    QMutex::lock();
  }
  cVar1 = QFutureInterfaceBase::queryState(param_1,8);
  if (cVar1 == '\0') {
    cVar1 = QFutureInterfaceBase::queryState(param_1,4);
    if (cVar1 == '\0') {
      iVar2 = QFutureInterfaceBase::resultStoreBase();
      cVar1 = QtPrivate::ResultStoreBase::filterMode();
      if (cVar1 == '\0') {
        if (param_2 == (undefined1 *)0x0) {
          iVar2 = QtPrivate::ResultStoreBase::addResult(iVar2,pvVar6);
        }
        else {
          puVar5 = operator_new(1);
          *puVar5 = *param_2;
          iVar2 = QtPrivate::ResultStoreBase::addResult(iVar2,pvVar6);
        }
        QFutureInterfaceBase::reportResultsReady((int)param_1,iVar2);
      }
      else {
        iVar3 = QtPrivate::ResultStoreBase::count();
        if (param_2 == (undefined1 *)0x0) {
          QtPrivate::ResultStoreBase::addResult(iVar2,pvVar6);
        }
        else {
          puVar5 = operator_new(1);
          *puVar5 = *param_2;
          QtPrivate::ResultStoreBase::addResult(iVar2,pvVar6);
        }
        QtPrivate::ResultStoreBase::count();
        QFutureInterfaceBase::reportResultsReady((int)param_1,iVar3);
      }
    }
  }
  if (lVar4 == 0) {
    return;
  }
  QMutex::unlock();
  return;
}

