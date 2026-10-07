
void FUN_100403360(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_2 + 0x31) & 0x10) != 0) {
    FUN_1004033b0(param_1,param_2);
  }
  lVar1 = *(long *)(param_2 + 0x28);
  QMutex::lock();
  *(undefined1 *)(lVar1 + 0x910) = 1;
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}

