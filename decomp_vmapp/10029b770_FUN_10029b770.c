
bool FUN_10029b770(long param_1)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = *(long *)(param_1 + 0x98);
  QMutex::unlock();
  return lVar1 == 0;
}

