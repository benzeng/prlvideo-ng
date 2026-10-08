
void FUN_1001666e0(long param_1)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = *(int **)(param_1 + 0x108);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pvVar2 = *(void **)(param_1 + 0x108), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}

