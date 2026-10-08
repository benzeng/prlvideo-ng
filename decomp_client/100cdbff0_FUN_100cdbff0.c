
uint FUN_100cdbff0(long param_1)

{
  uint uVar1;
  
  QMutex::lock();
  uVar1 = *(uint *)(param_1 + 0x3f8);
  QMutex::unlock();
  return uVar1 >> 0x14 & 2 | uVar1 >> 0xe & 4;
}

