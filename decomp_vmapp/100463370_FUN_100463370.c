
void FUN_100463370(ulong param_1)

{
  char cVar1;
  
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x44) == -1) {
      QSemaphore::release((int)param_1 + 0x20);
    }
    else {
      _notify_cancel();
    }
    QThread::wait(param_1);
    return;
  }
  return;
}

