
long FUN_1006eac00(long param_1,long param_2)

{
  int *piVar1;
  
  FUN_100283580(param_1,param_2 + 0x88);
  piVar1 = *(int **)(param_2 + 0xe0);
  *(int **)(param_1 + 0x58) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0xe8);
  *(int **)(param_1 + 0x60) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0xf0);
  *(int **)(param_1 + 0x68) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0xf8);
  *(int **)(param_1 + 0x70) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0x100);
  *(int **)(param_1 + 0x78) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

