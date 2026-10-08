
void FUN_1002a9990(long param_1,QFutureInterfaceBase *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 8) != *(long *)(param_1 + 0x18)) {
    QFutureWatcherBase::disconnectOutputInterface(SUB81(param_1,0));
    QFutureInterfaceBase::refT();
    cVar1 = QFutureInterfaceBase::derefT();
    if (cVar1 == '\0') {
      uVar2 = QFutureInterfaceBase::resultStoreBase();
      FUN_1002a9de0(uVar2);
    }
    QFutureInterfaceBase::operator=((QFutureInterfaceBase *)(param_1 + 0x10),param_2);
    QFutureWatcherBase::connectOutputInterface();
    return;
  }
  return;
}

