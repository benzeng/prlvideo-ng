
bool FUN_100537c00(long param_1,long param_2)

{
  bool bVar1;
  
  QMutex::lock();
  bVar1 = *(long *)(param_1 + 0x20) == param_2;
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  QMutex::unlock();
  return bVar1;
}

