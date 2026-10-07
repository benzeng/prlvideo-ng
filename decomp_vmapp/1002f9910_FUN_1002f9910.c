
undefined8 FUN_1002f9910(long param_1)

{
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x68) = 1;
  QWaitCondition::wakeOne();
  QMutex::unlock();
  return 1;
}

