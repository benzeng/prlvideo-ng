
bool FUN_10056c0c0(long param_1)

{
  long lVar1;
  bool bVar2;
  
  QMutex::lock();
  lVar1 = *(long *)(param_1 + 0x1298);
  if (lVar1 == param_1 + 0x1298) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (*(long *)(param_1 + 0x12a0) == lVar1) {
      bVar2 = *(int *)(lVar1 + 0x28) != 0;
    }
  }
  QMutex::unlock();
  return bVar2;
}

