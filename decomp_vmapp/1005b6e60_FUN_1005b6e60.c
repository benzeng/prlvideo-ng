
void FUN_1005b6e60(long *param_1,undefined4 *param_2)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x40);
  uVar3 = *param_2;
  *(undefined4 *)(plVar4 + 2) = uVar3;
  piVar1 = *(int **)(param_2 + 2);
  plVar4[3] = (long)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = *param_2;
  }
  *(undefined4 *)(plVar4 + 2) = uVar3;
  piVar1 = *(int **)(param_2 + 4);
  plVar4[4] = (long)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(param_2 + 6);
  plVar4[6] = *(long *)(param_2 + 8);
  plVar4[5] = lVar2;
  lVar2 = *(long *)(param_2 + 10);
  plVar4[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar4[1] = (long)param_1;
  lVar2 = *param_1;
  *plVar4 = lVar2;
  *(long **)(lVar2 + 8) = plVar4;
  *param_1 = (long)plVar4;
  param_1[2] = param_1[2] + 1;
  return;
}

