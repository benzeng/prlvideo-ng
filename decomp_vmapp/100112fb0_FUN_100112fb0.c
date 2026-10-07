
void FUN_100112fb0(long param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1158),0x209,0);
  QMutex::lock();
  if (*(int *)(lVar1 + (ulong)*param_2 * 4) != 0) {
    FUN_100113040(param_1,param_2);
    *(undefined4 *)(lVar1 + (ulong)*param_2 * 4) = 0;
  }
  QMutex::unlock();
  return;
}

