
bool FUN_1004daa00(long param_1)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = *(long *)(param_1 + 0x58);
  QMutex::unlock();
  return lVar1 != 0;
}

