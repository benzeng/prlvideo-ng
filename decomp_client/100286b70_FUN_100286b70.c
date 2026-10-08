
void FUN_100286b70(long *param_1)

{
  char cVar1;
  
  cVar1 = QFutureInterfaceBase::isCanceled();
  if (cVar1 != '\0') {
    QFutureInterfaceBase::reportFinished();
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_1002870f0(param_1,param_1 + 4,0xffffffff);
  QFutureInterfaceBase::reportFinished();
  return;
}

