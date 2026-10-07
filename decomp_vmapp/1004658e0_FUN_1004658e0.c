
void FUN_1004658e0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  piVar1 = *(int **)(param_2 + 2);
  *(int **)(param_1 + 2) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[4] = param_2[4];
  piVar1 = *(int **)(param_2 + 6);
  *(int **)(param_1 + 6) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[8] = param_2[8];
  return;
}

