
void FUN_1003059f0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  
  *param_1 = &PTR_FUN_1011179a8;
  uVar3 = 0;
  do {
    pvVar2 = (void *)param_1[uVar3 + 1];
    while (pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar2 + 0x10);
      if (*(long **)((long)pvVar2 + 8) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + 8) + 8))();
      }
      operator_delete(pvVar2);
      pvVar2 = pvVar1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x100);
  ___bzero(param_1 + 1,0x800);
  return;
}

