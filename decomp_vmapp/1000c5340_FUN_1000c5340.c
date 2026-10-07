
undefined8 FUN_1000c5340(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0x15c) == 0) {
    uVar2 = 0x80000009;
    FUN_1008e3970("","vm",0,"a spurious userspace profiler start request is recieved!");
  }
  else {
    *(undefined4 *)(param_1 + 0x15c) = 0;
    cVar1 = QThread::isRunning();
    uVar2 = 0;
    if (cVar1 == '\0') {
      QThread::start(param_1,7);
    }
  }
  QMutex::unlock();
  return uVar2;
}

