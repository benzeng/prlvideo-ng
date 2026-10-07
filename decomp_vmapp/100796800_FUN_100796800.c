
bool FUN_100796800(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 4);
  QMutex::unlock();
  return iVar1 != 6;
}

