
void FUN_1000f1130(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = QFutureInterfaceBase::mutex();
  if (lVar3 != 0) {
    QMutex::lock();
  }
  cVar1 = QFutureInterfaceBase::queryState(param_1,8);
  if (cVar1 == '\0') {
    cVar1 = QFutureInterfaceBase::queryState(param_1,4);
    if (cVar1 == '\0') {
      uVar4 = QFutureInterfaceBase::resultStoreBase();
      cVar1 = QtPrivate::ResultStoreBase::filterMode();
      if (cVar1 == '\0') {
        iVar2 = FUN_1000f1240(uVar4,param_3,param_2);
        QFutureInterfaceBase::reportResultsReady((int)param_1,iVar2);
      }
      else {
        iVar2 = QtPrivate::ResultStoreBase::count();
        FUN_1000f1240(uVar4,param_3,param_2);
        QtPrivate::ResultStoreBase::count();
        QFutureInterfaceBase::reportResultsReady((int)param_1,iVar2);
      }
    }
  }
  if (lVar3 == 0) {
    return;
  }
  QMutex::unlock();
  return;
}

