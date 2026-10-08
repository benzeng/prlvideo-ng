
bool FUN_100a931a0(long param_1,undefined8 param_2)

{
  bool bVar1;
  
  QMutex::lock();
  bVar1 = *(int *)(*(long *)(param_1 + 0xd8) + 0x14) != 0;
  if (bVar1) {
    FUN_100a9c950(param_2,param_1 + 0xd8);
  }
  QMutex::unlock();
  return bVar1;
}

