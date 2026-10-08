
void FUN_100429670(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100429670();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100429670();
  }
  return;
}

