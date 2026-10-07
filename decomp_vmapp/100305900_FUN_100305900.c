
void FUN_100305900(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_101117978;
  lVar3 = 0;
  do {
    pvVar2 = (void *)param_1[lVar3 + 1];
    while (pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar2 + 8);
      operator_delete(pvVar2);
      pvVar2 = pvVar1;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  ___bzero(param_1 + 1,0x800);
  return;
}

