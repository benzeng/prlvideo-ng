
void FUN_1003fc1d0(ulong param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x28) = 1;
  QMutex::unlock();
  QThread::wait(param_1);
  return;
}

