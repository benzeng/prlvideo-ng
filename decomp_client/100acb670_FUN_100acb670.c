
bool FUN_100acb670(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  return iVar1 == 1;
}

