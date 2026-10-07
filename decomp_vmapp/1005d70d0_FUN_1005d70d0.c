
long * FUN_1005d70d0(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = param_2;
  if (param_3 != param_4) {
    plVar5 = operator_new(0x38);
    *plVar5 = 0;
    plVar5[4] = *(long *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x10);
    plVar5[3] = *(long *)(param_3 + 0x18);
    plVar5[2] = lVar1;
    piVar2 = *(int **)(param_3 + 0x28);
    plVar5[5] = (long)piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    *(undefined1 *)(plVar5 + 6) = *(undefined1 *)(param_3 + 0x30);
    lVar7 = 1;
    plVar4 = plVar5;
    for (lVar1 = *(long *)(param_3 + 8); lVar1 != param_4; lVar1 = *(long *)(lVar1 + 8)) {
      plVar6 = operator_new(0x38);
      plVar6[4] = *(long *)(lVar1 + 0x20);
      lVar3 = *(long *)(lVar1 + 0x10);
      plVar6[3] = *(long *)(lVar1 + 0x18);
      plVar6[2] = lVar3;
      piVar2 = *(int **)(lVar1 + 0x28);
      plVar6[5] = (long)piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *(undefined1 *)(plVar6 + 6) = *(undefined1 *)(lVar1 + 0x30);
      plVar4[1] = (long)plVar6;
      *plVar6 = (long)plVar4;
      lVar7 = lVar7 + 1;
      plVar4 = plVar6;
    }
    lVar1 = *param_2;
    *(long **)(lVar1 + 8) = plVar5;
    *plVar5 = lVar1;
    *param_2 = (long)plVar4;
    plVar4[1] = (long)param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar7;
  }
  return plVar5;
}

