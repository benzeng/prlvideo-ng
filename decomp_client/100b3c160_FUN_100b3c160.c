
int * FUN_100b3c160(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar2;
  piVar4 = *(int **)(param_1 + 0x10);
  param_2[2] = piVar4;
  if (1 < *piVar4 + 1U) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  lVar3 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    piVar4 = (int *)(ulong)*puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return piVar4;
}

