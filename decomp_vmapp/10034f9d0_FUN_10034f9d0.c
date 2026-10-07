
void FUN_10034f9d0(undefined8 *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = 0;
  do {
    for (lVar5 = param_1[uVar6 + 2]; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
      pvVar2 = *(void **)(lVar5 + 8);
      if (pvVar2 != (void *)0x0) {
        if (*(long **)((long)pvVar2 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar2 + 0x20) + 8))();
        }
        pvVar3 = *(void **)((long)pvVar2 + 8);
        if (pvVar3 != (void *)0x0) {
          piVar1 = (int *)((long)pvVar3 + 0x80);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_10032d8f0(pvVar3);
            operator_delete(pvVar3);
          }
        }
        operator_delete(pvVar2);
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x1000);
  for (puVar4 = (undefined8 *)param_1[1]; puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)*puVar4) {
    *(undefined4 *)(puVar4 + 1) = 0;
  }
  *param_1 = 0;
  ___bzero(param_1 + 2,0x8000);
  return;
}

