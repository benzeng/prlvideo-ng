
void FUN_1002a9880(long param_1)

{
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x8c0) = 0xffffffff;
  QWaitCondition::wakeOne();
  QMutex::unlock();
  QThread::wait(*(ulong *)(param_1 + 0x8a0));
  return;
}

