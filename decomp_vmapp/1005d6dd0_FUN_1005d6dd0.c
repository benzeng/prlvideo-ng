
long * FUN_1005d6dd0(long param_1,long *param_2,long param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = param_2;
  if (param_3 != param_4) {
    plVar6 = operator_new(0x40);
    *plVar6 = 0;
    uVar5 = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(plVar6 + 2) = uVar5;
    piVar1 = *(int **)(param_3 + 0x18);
    plVar6[3] = (long)piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar5 = *(undefined4 *)(param_3 + 0x10);
    }
    *(undefined4 *)(plVar6 + 2) = uVar5;
    piVar1 = *(int **)(param_3 + 0x20);
    plVar6[4] = (long)piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    lVar2 = *(long *)(param_3 + 0x28);
    plVar6[6] = *(long *)(param_3 + 0x30);
    plVar6[5] = lVar2;
    lVar2 = *(long *)(param_3 + 0x38);
    plVar6[7] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    lVar8 = 1;
    plVar4 = plVar6;
    for (lVar2 = *(long *)(param_3 + 8); lVar2 != param_4; lVar2 = *(long *)(lVar2 + 8)) {
      plVar7 = operator_new(0x40);
      *(undefined4 *)(plVar7 + 2) = *(undefined4 *)(lVar2 + 0x10);
      piVar1 = *(int **)(lVar2 + 0x18);
      plVar7[3] = (long)piVar1;
      if (1 < *piVar1 + 1U) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *(undefined4 *)(plVar7 + 2) = *(undefined4 *)(lVar2 + 0x10);
      piVar1 = *(int **)(lVar2 + 0x20);
      plVar7[4] = (long)piVar1;
      if (1 < *piVar1 + 1U) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar3 = *(long *)(lVar2 + 0x28);
      plVar7[6] = *(long *)(lVar2 + 0x30);
      plVar7[5] = lVar3;
      lVar3 = *(long *)(lVar2 + 0x38);
      plVar7[7] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      plVar4[1] = (long)plVar7;
      *plVar7 = (long)plVar4;
      lVar8 = lVar8 + 1;
      plVar4 = plVar7;
    }
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = plVar6;
    *plVar6 = lVar2;
    *param_2 = (long)plVar4;
    plVar4[1] = (long)param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar8;
  }
  return plVar6;
}

