
void FUN_1003f4dd0(long param_1)

{
  char cVar1;
  
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    return;
  }
  QThread::start(param_1,2);
  while ((*(long *)(param_1 + 0x30) == 0 || (cVar1 = _CFRunLoopIsWaiting(), cVar1 == '\0'))) {
    QThread::usleep(10000);
  }
  return;
}

