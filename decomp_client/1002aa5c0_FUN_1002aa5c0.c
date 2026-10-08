
void FUN_1002aa5c0(long *param_1)

{
  char cVar1;
  
  cVar1 = QFutureInterfaceBase::isCanceled();
  if (cVar1 != '\0') {
    QFutureInterfaceBase::reportFinished();
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_1002aa7f0(param_1,(long)param_1 + 0x1c,0xffffffff);
  QFutureInterfaceBase::reportFinished();
  return;
}

