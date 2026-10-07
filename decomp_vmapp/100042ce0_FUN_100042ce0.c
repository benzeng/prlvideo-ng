
void FUN_100042ce0(long param_1)

{
  long lVar1;
  void *pvVar2;
  
  QMutex::lock();
  if (*(int *)(*(long *)(param_1 + 0x150) + 0xc) != *(int *)(*(long *)(param_1 + 0x150) + 8)) {
    do {
      pvVar2 = (void *)FUN_100046680((long *)(param_1 + 0x150));
      _free(pvVar2);
      lVar1 = *(long *)(param_1 + 0x150);
    } while (*(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8));
  }
  lVar1 = *(long *)(param_1 + 0x160);
  _free(*(void **)(param_1 + 0x168));
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  QMutex::unlock();
  if (lVar1 != 0) {
    FUN_1004c07d0(param_1 + 0x10,lVar1,0xf0000000);
    return;
  }
  return;
}

