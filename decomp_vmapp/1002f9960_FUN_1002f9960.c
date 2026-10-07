
undefined8 FUN_1002f9960(long param_1)

{
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x20) = 1;
  QWaitCondition::wakeOne();
  QMutex::unlock();
  return 1;
}

