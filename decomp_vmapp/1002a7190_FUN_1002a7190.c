
undefined8 FUN_1002a7190(long param_1,long param_2)

{
  if ((*(uint *)(param_2 + 8) | 0x8000) == 0x8117) {
    QMutex::lock();
    *(long *)(param_1 + 0x908) = param_2;
    QWaitCondition::wakeOne();
    QMutex::unlock();
  }
  return 0xffffffff;
}

