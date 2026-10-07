
bool FUN_1002f8900(long param_1,long param_2)

{
  bool bVar1;
  
  QMutex::lock();
  bVar1 = *(int *)(param_1 + 0x80) == 0;
  if (bVar1) {
    *(undefined4 *)(param_2 + 0x468) = 7;
  }
  else {
    *(long *)(param_1 + 0xa8) = param_2;
    QWaitCondition::wakeOne();
  }
  QMutex::unlock();
  return !bVar1;
}

