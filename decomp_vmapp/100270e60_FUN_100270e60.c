
undefined4 FUN_100270e60(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80009000;
  if (*(long *)(param_1 + 200) == 0) {
    if (*(int *)(param_1 + 0x1f0) == 0) {
      FUN_1007685b0(0x5dc);
    }
    QMutex::lock();
    uVar1 = FUN_10026c890(param_1 + 0xa0);
    QMutex::unlock();
  }
  return uVar1;
}

