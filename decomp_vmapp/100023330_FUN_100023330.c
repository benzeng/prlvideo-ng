
void FUN_100023330(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100023362;
      piVar1 = *(int **)(param_1 + 0x20);
    }
    FUN_100023390((undefined8 *)(param_1 + 0x20),piVar1);
  }
LAB_100023362:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100023330();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100023330();
  }
  return;
}

