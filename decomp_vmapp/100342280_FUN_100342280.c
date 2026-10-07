
void FUN_100342280(long param_1)

{
  int *piVar1;
  void *pvVar2;
  
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  }
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar2 != (void *)0x0) {
    piVar1 = (int *)((long)pvVar2 + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_10032d8f0(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}

