
void FUN_100329280(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  
  *(undefined ***)(param_1 + 0x2060) = &PTR_FUN_101117978;
  lVar3 = 0;
  do {
    pvVar2 = *(void **)(param_1 + 0x2068 + lVar3 * 8);
    while (pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar2 + 8);
      operator_delete(pvVar2);
      pvVar2 = pvVar1;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  ___bzero(param_1 + 0x2068,0x800);
  *(undefined ***)(param_1 + 0x1850) = &PTR_FUN_101117a38;
  FUN_1003290f0(param_1 + 0x1850);
  *(undefined ***)(param_1 + 0x1040) = &PTR_FUN_101117a08;
  lVar3 = 0;
  do {
    pvVar2 = *(void **)(param_1 + 0x1048 + lVar3 * 8);
    while (pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar2 + 0x10);
      if (*(void **)((long)pvVar2 + 8) != (void *)0x0) {
        operator_delete(*(void **)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      pvVar2 = pvVar1;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  ___bzero(param_1 + 0x1048,0x800);
  *(undefined ***)(param_1 + 0x830) = &PTR_FUN_101117978;
  lVar3 = 0;
  do {
    pvVar2 = *(void **)(param_1 + 0x838 + lVar3 * 8);
    while (pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar2 + 8);
      operator_delete(pvVar2);
      pvVar2 = pvVar1;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  ___bzero(param_1 + 0x838,0x800);
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_101117978;
  lVar3 = 0;
  do {
    pvVar2 = *(void **)(param_1 + 0x28 + lVar3 * 8);
    while (pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar2 + 8);
      operator_delete(pvVar2);
      pvVar2 = pvVar1;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  ___bzero(param_1 + 0x28,0x800);
  return;
}

