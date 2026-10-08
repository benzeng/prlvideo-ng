
undefined8 FUN_1002f9f00(long param_1)

{
  int *piVar1;
  char cVar2;
  QFutureInterfaceBase *pQVar3;
  undefined8 uVar4;
  QFutureInterfaceBase local_40 [8];
  long local_38;
  long local_30;
  undefined1 local_21;
  
  QObject::connect(&local_30,param_1 + 0x38,"2finished()",param_1,
                   "1onCheckPreviousVersionFinished()",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  pQVar3 = operator_new(0x30);
  QFutureInterfaceBase::QFutureInterfaceBase(pQVar3,0);
  *(undefined ***)pQVar3 = &PTR_FUN_102272168;
  QFutureInterfaceBase::refT();
  *(undefined4 *)(pQVar3 + 0x18) = 0;
  *(undefined ***)pQVar3 = &PTR_FUN_102272b58;
  *(undefined ***)(pQVar3 + 0x10) = &PTR_FUN_102272b88;
  *(code **)(pQVar3 + 0x20) = FUN_1002fa090;
  piVar1 = *(int **)(param_1 + 0x70);
  *(int **)(pQVar3 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  uVar4 = QThreadPool::globalInstance();
  FUN_100287870(local_40,pQVar3,uVar4);
  if (local_38 != *(long *)(param_1 + 0x50)) {
    QFutureWatcherBase::disconnectOutputInterface(SUB81(param_1 + 0x38,0));
    QFutureInterfaceBase::refT();
    cVar2 = QFutureInterfaceBase::derefT();
    if (cVar2 == '\0') {
      uVar4 = QFutureInterfaceBase::resultStoreBase();
      FUN_1002864f0(uVar4);
    }
    QFutureInterfaceBase::operator=((QFutureInterfaceBase *)(param_1 + 0x48),local_40);
    QFutureWatcherBase::connectOutputInterface();
  }
  FUN_100286490(local_40);
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

