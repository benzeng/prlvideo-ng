
void FUN_100763800(ulong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = QThread::isRunning();
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = FUN_100763740(param_1);
  if (iVar2 != 0) {
    FUN_1008e3970("","etrace",0,"Failed to properly stop eTrace thread...");
    return;
  }
  QThread::wait(param_1);
  return;
}

