
long FUN_1006f2b00(long param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(param_2 + 0x68);
  FUN_100283580(param_1,lVar1 + 0xd0);
  piVar2 = *(int **)(lVar1 + 0x128);
  *(int **)(param_1 + 0x58) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(lVar1 + 0x130);
  *(int **)(param_1 + 0x60) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(lVar1 + 0x138);
  *(int **)(param_1 + 0x68) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(lVar1 + 0x140);
  *(int **)(param_1 + 0x70) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(lVar1 + 0x148);
  *(int **)(param_1 + 0x78) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}

