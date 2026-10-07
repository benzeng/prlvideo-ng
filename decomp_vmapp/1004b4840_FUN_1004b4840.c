
void FUN_1004b4840(ulong param_1)

{
  char cVar1;
  
  QMutex::lock();
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    QMutex::unlock();
    QThread::wait(param_1);
    *(undefined1 *)(param_1 + 0x20) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  QMutex::unlock();
  return;
}

