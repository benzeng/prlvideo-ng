
void FUN_1004f4790(long *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  QMutex::lock();
  *(undefined1 *)(param_1 + 4) = 1;
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}

