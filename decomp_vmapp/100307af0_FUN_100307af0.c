
void FUN_100307af0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_1011179d8;
  lVar3 = 0;
  do {
    pvVar2 = (void *)param_1[lVar3 + 1];
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
  operator_delete(param_1);
  return;
}

