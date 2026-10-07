
undefined8 FUN_1002a7130(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(uint *)(param_2 + 8) | 0x8000) == 0x8117) {
    lVar1 = *(long *)(param_1 + 8);
    QMutex::lock();
    *(long *)(lVar1 + 0x908) = param_2;
    QWaitCondition::wakeOne();
    QMutex::unlock();
  }
  return 0xffffffff;
}

