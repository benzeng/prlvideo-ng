
void FUN_1000eef10(ulong param_1,undefined8 param_2)

{
  QMutex::lock();
  FUN_1000ef2e0(param_1 + 0x18,param_2);
  if (*(char *)(param_1 + 0x20) == '\0') {
    QThread::wait(param_1);
    *(undefined1 *)(param_1 + 0x20) = 1;
    QThread::start(param_1,7);
  }
  QMutex::unlock();
  return;
}

