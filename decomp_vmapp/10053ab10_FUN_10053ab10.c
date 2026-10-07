
undefined1 FUN_10053ab10(long param_1)

{
  undefined1 uVar1;
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x74) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = QThread::isRunning();
  }
  QMutex::unlock();
  return uVar1;
}

