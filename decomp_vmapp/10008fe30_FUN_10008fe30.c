
void FUN_10008fe30(long param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x5c) = 1;
  QWaitCondition::wakeOne();
  QMutex::unlock();
  return;
}

