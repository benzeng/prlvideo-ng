
undefined8 FUN_1002e1e40(long param_1)

{
  char cVar1;
  
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    QMutex::lock();
    *(undefined1 *)(param_1 + 0x80) = 1;
    QMutex::unlock();
    QWaitCondition::wakeAll();
    QThread::wait(param_1 + 0x68);
  }
  FUN_100269b40(param_1 + 0x48);
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 8))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return 0;
}

