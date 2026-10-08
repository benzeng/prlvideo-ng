
void FUN_100745310(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_2 - param_3 != 0) {
    lVar4 = 0;
    do {
      pvVar3 = operator_new(0x80);
      lVar1 = *(long *)(param_4 + lVar4);
      FUN_100283580(pvVar3,lVar1);
      piVar2 = *(int **)(lVar1 + 0x58);
      *(int **)((long)pvVar3 + 0x58) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = *(int **)(lVar1 + 0x60);
      *(int **)((long)pvVar3 + 0x60) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = *(int **)(lVar1 + 0x68);
      *(int **)((long)pvVar3 + 0x68) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = *(int **)(lVar1 + 0x70);
      *(int **)((long)pvVar3 + 0x70) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = *(int **)(lVar1 + 0x78);
      *(int **)((long)pvVar3 + 0x78) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *(void **)(param_2 + lVar4) = pvVar3;
      lVar4 = lVar4 + 8;
    } while ((param_2 - param_3) + lVar4 != 0);
  }
  return;
}

