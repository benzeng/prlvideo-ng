
void FUN_1004b34e0(ulong param_1,char param_2)

{
  char cVar1;
  
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
    QSemaphore::release((int)param_1 + 0x20);
    if (param_2 != '\0') {
      QThread::wait(param_1);
      return;
    }
  }
  return;
}

