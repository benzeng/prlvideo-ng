
void FUN_100034e40(long param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0xa8) = 1;
  QMutex::unlock();
  return;
}

