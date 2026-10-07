
void FUN_100034d80(long param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0xa8) = 0;
  QMutex::unlock();
  return;
}

