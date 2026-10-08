
void FUN_1000f0bf0(long *param_1)

{
  char cVar1;
  
  cVar1 = QFutureInterfaceBase::isCanceled();
  if (cVar1 != '\0') {
    QFutureInterfaceBase::reportFinished();
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_1000f1130(param_1,param_1 + 4,0xffffffff);
  QFutureInterfaceBase::reportFinished();
  return;
}

