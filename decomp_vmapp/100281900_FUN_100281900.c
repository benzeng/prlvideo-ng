
undefined4 FUN_100281900(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80009000;
  if ((*(int *)(param_1 + 0x110) == 0) && (*(long *)(param_1 + 0x160) == 0)) {
    if (*(int *)(param_1 + 0x288) == 0) {
      FUN_1007685b0(0x5dc);
    }
    QMutex::lock();
    uVar1 = FUN_10026c890(param_1 + 0x138);
    QMutex::unlock();
  }
  return uVar1;
}

