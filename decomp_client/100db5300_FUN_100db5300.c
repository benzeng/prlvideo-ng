
void FUN_100db5300(long param_1)

{
  long lVar1;
  long lVar2;
  
  QMutex::lock();
  lVar1 = *(long *)(param_1 + 0x50);
  lVar2 = *(long *)(lVar1 + 0x20);
  *(long *)(lVar2 + 8) = param_1 + 0x38;
  *(long *)(param_1 + 0x38) = lVar2;
  *(long *)(param_1 + 0x40) = lVar1 + 0x20;
  *(long *)(lVar1 + 0x20) = param_1 + 0x38;
  QMutex::unlock();
  return;
}

