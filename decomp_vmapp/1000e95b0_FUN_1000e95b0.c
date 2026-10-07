
void FUN_1000e95b0(ulong param_1)

{
  char cVar1;
  
  cVar1 = QThread::isFinished();
  if (cVar1 != '\0') {
    return;
  }
  QThread::wait(param_1);
  return;
}

