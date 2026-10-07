
void FUN_10056b940(long param_1,undefined4 param_2)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}

