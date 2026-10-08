
undefined8 * FUN_100d03ec0(undefined8 *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = *param_2;
  if ((param_3 < 0) || (*(int *)(lVar1 + 4) <= param_3)) {
    lVar2 = *(long *)(lVar1 + 0x10);
    *param_1 = *(undefined8 *)(lVar1 + lVar2);
    piVar3 = *(int **)(lVar1 + 8 + lVar2);
    param_1[1] = piVar3;
    if (1 < *piVar3 + 1U) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    piVar3 = *(int **)(lVar2 + 0x10 + lVar1);
    param_1[2] = piVar3;
    if (1 < *piVar3 + 1U) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar2 + 0x20 + lVar1);
    param_1[3] = *(undefined8 *)(lVar2 + 0x18 + lVar1);
  }
  else {
    FUN_100d06370(param_1,lVar1 + *(long *)(lVar1 + 0x10) + (long)param_3 * 0x28);
  }
  return param_1;
}

