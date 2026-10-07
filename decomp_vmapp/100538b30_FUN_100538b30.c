
void FUN_100538b30(long param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x28) = 1;
  QMutex::unlock();
  return;
}

