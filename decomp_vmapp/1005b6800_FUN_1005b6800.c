
ulong FUN_1005b6800(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                   ulong *param_5,long *param_6)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = param_2;
  piVar2 = (int *)*param_3;
  *(int **)(param_1 + 2) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)*param_4;
  *(int **)(param_1 + 4) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uVar4 = *param_5;
  *(ulong *)(param_1 + 8) = param_5[1];
  *(ulong *)(param_1 + 6) = uVar4;
  lVar3 = *param_6;
  *(long *)(param_1 + 10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar4 = (ulong)*puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return uVar4;
}

