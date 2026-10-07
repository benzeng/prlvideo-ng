
void FUN_100257e70(void)

{
  QMutex::lock();
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}

