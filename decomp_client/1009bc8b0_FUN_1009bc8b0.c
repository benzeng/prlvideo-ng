
void FUN_1009bc8b0(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  QFutureInterfaceBase local_48 [8];
  long local_40;
  undefined *local_38;
  
  cVar1 = QFutureWatcherBase::isRunning();
  if ((cVar1 == '\0') &&
     (*(int *)(*(long *)(param_1 + 0x40) + 0xc) != *(int *)(*(long *)(param_1 + 0x40) + 8))) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    pvVar2 = operator_new(0x40);
    FUN_1009bd220(pvVar2,FUN_1009bca00,param_1 + 0x40,param_1 + 0x48);
    uVar3 = QThreadPool::globalInstance();
    FUN_1000f1340(local_48,pvVar2,uVar3);
    local_38 = PTR_shared_null_1021e15e8;
    FUN_1000e5fc0(param_1 + 0x40,&local_38);
    FUN_100039a80(&local_38);
    if (local_40 != *(long *)(param_1 + 0x30)) {
      QFutureWatcherBase::disconnectOutputInterface((bool)((char)param_1 + '\x18'));
      QFutureInterfaceBase::refT();
      cVar1 = QFutureInterfaceBase::derefT();
      if (cVar1 == '\0') {
        uVar3 = QFutureInterfaceBase::resultStoreBase();
        FUN_1000f03c0(uVar3);
      }
      QFutureInterfaceBase::operator=((QFutureInterfaceBase *)(param_1 + 0x28),local_48);
      QFutureWatcherBase::connectOutputInterface();
    }
    FUN_1000f0360(local_48);
  }
  return;
}

