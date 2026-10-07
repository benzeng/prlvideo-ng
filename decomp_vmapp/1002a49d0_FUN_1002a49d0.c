
void FUN_1002a49d0(ulong param_1)

{
  char cVar1;
  
  QMutex::lock();
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    QWaitCondition::wakeAll();
    QMutex::unlock();
    QThread::wait(param_1);
    return;
  }
  QMutex::unlock();
  return;
}

