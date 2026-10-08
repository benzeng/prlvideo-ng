
bool FUN_100a77a50(long param_1,void *param_2)

{
  bool bVar1;
  
  QMutex::lock();
  bVar1 = *(int *)(param_1 + 0x34) == 1;
  if (bVar1) {
    _memcpy(param_2,(void *)(param_1 + 0x114),0x48);
  }
  QMutex::unlock();
  return bVar1;
}

