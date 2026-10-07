
void FUN_1003f4e30(ulong param_1)

{
  char cVar1;
  
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    _CFRunLoopStop(*(undefined8 *)(param_1 + 0x30));
    QThread::wait(param_1);
    return;
  }
  return;
}

