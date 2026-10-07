
void FUN_100403540(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    if ((*(byte *)((long)param_1 + 0x31) & 0x10) != 0) {
      FUN_1004033b0(*param_1,param_1);
    }
    lVar1 = param_1[5];
    QMutex::lock();
    *(undefined1 *)(lVar1 + 0x910) = 1;
    QWaitCondition::wakeAll();
    QMutex::unlock();
    return;
  }
  return;
}

