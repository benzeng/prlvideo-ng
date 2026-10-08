
void FUN_1000b5ff0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  void *pvVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_2 - param_3 != 0) {
    lVar4 = 0;
    do {
      pvVar3 = operator_new(0x68);
      pvVar1 = *(void **)(param_4 + lVar4);
      _memcpy(pvVar3,pvVar1,0x50);
      piVar2 = *(int **)((long)pvVar1 + 0x50);
      *(int **)((long)pvVar3 + 0x50) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      _memcpy(pvVar3,pvVar1,0x50);
      piVar2 = *(int **)((long)pvVar1 + 0x58);
      *(int **)((long)pvVar3 + 0x58) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      _memcpy(pvVar3,pvVar1,0x50);
      piVar2 = *(int **)((long)pvVar1 + 0x60);
      *(int **)((long)pvVar3 + 0x60) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      _memcpy(pvVar3,pvVar1,0x50);
      *(void **)(param_2 + lVar4) = pvVar3;
      lVar4 = lVar4 + 8;
    } while ((param_2 - param_3) + lVar4 != 0);
  }
  return;
}

