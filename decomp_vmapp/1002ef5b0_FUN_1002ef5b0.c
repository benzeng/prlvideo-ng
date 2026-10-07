
void FUN_1002ef5b0(long param_1,undefined4 param_2)

{
  QMutex::lock();
  *(undefined4 *)(param_1 + 8) = param_2;
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}

