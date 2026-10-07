
bool FUN_1002e0050(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar1 + 8) == 0) {
    bVar2 = false;
  }
  else {
    QMutex::lock();
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x18);
    bVar2 = *(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8);
    QMutex::unlock();
    lVar1 = *(long *)(param_1 + 0x18);
  }
  if (*(long *)(lVar1 + 0x18) != 0) {
    QMutex::lock();
    bVar3 = bVar2 == false;
    bVar2 = true;
    if (bVar3) {
      lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x18);
      bVar2 = *(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8);
    }
    QMutex::unlock();
  }
  return bVar2;
}

