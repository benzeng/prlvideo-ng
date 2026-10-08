
void FUN_100797b00(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      piVar1 = *(int **)(param_1 + 0x18);
    }
    FUN_100797e40((undefined8 *)(param_1 + 0x18),piVar1);
  }
  return;
}

