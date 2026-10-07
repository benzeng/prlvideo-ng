
undefined8 FUN_10041de40(long param_1,undefined8 param_2)

{
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  *(undefined8 *)(param_1 + 0x640) = param_2;
  QMutex::lock();
  QWaitCondition::wakeOne();
  QMutex::unlock();
  return 1;
}

