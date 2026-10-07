
bool FUN_100796840(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 8);
  QMutex::unlock();
  return iVar1 != 10;
}

