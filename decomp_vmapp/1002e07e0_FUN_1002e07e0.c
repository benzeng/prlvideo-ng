
bool FUN_1002e07e0(long param_1)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(long *)(*(long *)(param_1 + 0x18) + 8) != 0) {
    QMutex::lock();
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x18);
    bVar2 = *(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8);
    QMutex::unlock();
  }
  return bVar2;
}

