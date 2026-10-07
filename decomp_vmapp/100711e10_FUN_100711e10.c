
undefined1 FUN_100711e10(long param_1)

{
  char cVar1;
  
  QThread::start(param_1,7);
  while ((*(long *)(param_1 + 0x20) == 0 || (cVar1 = _CFRunLoopIsWaiting(), cVar1 == '\0'))) {
    QCoreApplication::processEvents(0,100);
    cVar1 = QThread::isRunning();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

