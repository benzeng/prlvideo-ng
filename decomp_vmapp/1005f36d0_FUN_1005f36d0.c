
void FUN_1005f36d0(long param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x28) = 1;
  QWaitCondition::wakeOne();
  QMutex::unlock();
  QThread::wait(param_1 + 8);
  return;
}

