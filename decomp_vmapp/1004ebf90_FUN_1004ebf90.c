
long * FUN_1004ebf90(long param_1,long *param_2,long param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = param_2;
  if (param_3 != param_4) {
    plVar5 = operator_new(0x50);
    *plVar5 = 0;
    piVar1 = *(int **)(param_3 + 0x10);
    plVar5[2] = (long)piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined2 *)(plVar5 + 5) = *(undefined2 *)(param_3 + 0x28);
    lVar2 = *(long *)(param_3 + 0x18);
    plVar5[4] = *(long *)(param_3 + 0x20);
    plVar5[3] = lVar2;
    piVar1 = *(int **)(param_3 + 0x30);
    plVar5[6] = (long)piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar5 + 8) = *(undefined4 *)(param_3 + 0x40);
    plVar5[7] = *(long *)(param_3 + 0x38);
    *(undefined4 *)(plVar5 + 9) = *(undefined4 *)(param_3 + 0x48);
    lVar7 = 1;
    plVar4 = plVar5;
    for (lVar2 = *(long *)(param_3 + 8); lVar2 != param_4; lVar2 = *(long *)(lVar2 + 8)) {
      plVar6 = operator_new(0x50);
      piVar1 = *(int **)(lVar2 + 0x10);
      plVar6[2] = (long)piVar1;
      if (1 < *piVar1 + 1U) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *(undefined2 *)(plVar6 + 5) = *(undefined2 *)(lVar2 + 0x28);
      lVar3 = *(long *)(lVar2 + 0x18);
      plVar6[4] = *(long *)(lVar2 + 0x20);
      plVar6[3] = lVar3;
      piVar1 = *(int **)(lVar2 + 0x30);
      plVar6[6] = (long)piVar1;
      if (1 < *piVar1 + 1U) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *(undefined4 *)(plVar6 + 8) = *(undefined4 *)(lVar2 + 0x40);
      plVar6[7] = *(long *)(lVar2 + 0x38);
      *(undefined4 *)(plVar6 + 9) = *(undefined4 *)(lVar2 + 0x48);
      plVar4[1] = (long)plVar6;
      *plVar6 = (long)plVar4;
      lVar7 = lVar7 + 1;
      plVar4 = plVar6;
    }
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = plVar5;
    *plVar5 = lVar2;
    *param_2 = (long)plVar4;
    plVar4[1] = (long)param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar7;
  }
  return plVar5;
}

