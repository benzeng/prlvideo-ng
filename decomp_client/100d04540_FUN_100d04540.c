
undefined8 * FUN_100d04540(undefined8 *param_1,long param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)param_3;
  lVar2 = *(long *)(param_2 + 0x2e8) + *(long *)(*(long *)(param_2 + 0x2e8) + 0x10);
  param_1[1] = *(undefined8 *)(lVar2 + 8 + lVar3 * 0x28);
  *param_1 = *(undefined8 *)(lVar2 + lVar3 * 0x28);
  piVar1 = *(int **)(lVar2 + 0x10 + lVar3 * 0x28);
  param_1[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[4] = *(undefined8 *)(lVar2 + 0x20 + lVar3 * 0x28);
  param_1[3] = *(undefined8 *)(lVar2 + 0x18 + lVar3 * 0x28);
  return param_1;
}

