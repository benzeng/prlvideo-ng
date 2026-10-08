
void FUN_100325ab0(long param_1)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pvVar2 = *(void **)(param_1 + 0x80), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  FUN_100325b20(param_1,1);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}

