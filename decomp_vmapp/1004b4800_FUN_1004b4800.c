
void FUN_1004b4800(long param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x20) = 0;
  QThread::start(param_1,7);
  QMutex::unlock();
  return;
}

