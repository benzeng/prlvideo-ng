
void FUN_100294aa0(long *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  cVar1 = QFutureInterfaceBase::isCanceled();
  if (cVar1 != '\0') {
    QFutureInterfaceBase::reportFinished();
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
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
        plVar5 = operator_new(8);
        *plVar5 = param_1[4];
        iVar2 = QtPrivate::ResultStoreBase::addResult(iVar2,(void *)0xffffffff);
        QFutureInterfaceBase::reportResultsReady((int)param_1,iVar2);
      }
      else {
        iVar3 = QtPrivate::ResultStoreBase::count();
        plVar5 = operator_new(8);
        *plVar5 = param_1[4];
        QtPrivate::ResultStoreBase::addResult(iVar2,(void *)0xffffffff);
        QtPrivate::ResultStoreBase::count();
        QFutureInterfaceBase::reportResultsReady((int)param_1,iVar3);
      }
    }
  }
  if (lVar4 != 0) {
    QMutex::unlock();
  }
  QFutureInterfaceBase::reportFinished();
  return;
}

