
void FUN_1004031e0(long param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x910) = 1;
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}

