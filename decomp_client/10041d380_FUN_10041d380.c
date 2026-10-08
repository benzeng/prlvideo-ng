
void FUN_10041d380(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      piVar1 = *(int **)(param_1 + 8);
    }
    FUN_10041a960((undefined8 *)(param_1 + 8),piVar1);
  }
  return;
}

