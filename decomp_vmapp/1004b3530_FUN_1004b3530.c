
void FUN_1004b3530(long param_1)

{
  void **ppvVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  
  QMutex::lock();
  QMutex::lock();
  puVar3 = *(uint **)(param_1 + 0x18);
  if (puVar3[3] != puVar3[2]) {
    ppvVar1 = (void **)(param_1 + 0x18);
    do {
      uVar4 = *puVar3;
      if (1 < uVar4) {
        FUN_1004b3bc0(ppvVar1,puVar3[1]);
        puVar3 = *ppvVar1;
        uVar4 = *puVar3;
      }
      lVar2 = *(long *)(*(long *)(puVar3 + (long)(int)puVar3[2] * 2 + 4) + 8);
      if (uVar4 < 2) {
        puVar3 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
      }
      else {
        FUN_1004b3bc0(ppvVar1,puVar3[1]);
        puVar3 = *ppvVar1;
        if (1 < *puVar3) {
          FUN_1004b3bc0(ppvVar1,puVar3[1]);
          puVar3 = *ppvVar1;
        }
        puVar3 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
      }
      if (*(void **)puVar3 != (void *)0x0) {
        operator_delete(*(void **)puVar3);
      }
      QListData::erase(ppvVar1);
      if (lVar2 != 0) {
        FUN_1004c07d0(*(long *)(param_1 + 0x10) + 0x10,lVar2,0xf0000000);
      }
      puVar3 = *ppvVar1;
    } while (puVar3[3] != puVar3[2]);
  }
  QMutex::unlock();
  QMutex::unlock();
  return;
}

