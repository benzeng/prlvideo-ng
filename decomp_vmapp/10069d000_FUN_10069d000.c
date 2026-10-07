
void FUN_10069d000(long *param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_3 != 0) &&
     (lVar1 = *(long *)(*(long *)(*param_1 + 0x38) + 0x20),
     (uint)((int)(*(ulong *)(lVar1 + 0x20) /
                 *(ulong *)(*(long *)(**(long **)(lVar1 + 0x38) + -0x18) + 0x38 +
                           (long)*(long **)(lVar1 + 0x38))) +
           *(int *)(lVar1 + 0x10) * *(int *)(*param_1 + 0x48)) <= param_3)) {
    plVar6 = (long *)param_1[3];
    if (plVar6 == param_1 + 3) {
      plVar6 = (long *)param_1[1];
      if (param_3 <= *(uint *)((long)plVar6 + 0x14)) {
        return;
      }
      lVar1 = *plVar6;
      plVar5 = (long *)plVar6[1];
      *(long **)(lVar1 + 8) = plVar5;
      *plVar5 = lVar1;
      lVar1 = param_1[3];
      *(long **)(lVar1 + 8) = plVar6;
      *plVar6 = lVar1;
      plVar6[1] = (long)(param_1 + 3);
      param_1[3] = (long)plVar6;
      iVar2 = (int)param_1[5] + -1;
      *(int *)(param_1 + 5) = iVar2;
    }
    else {
      iVar2 = (int)param_1[5];
    }
    *(int *)(param_1 + 5) = iVar2 + 1;
    *(undefined4 *)(plVar6 + 2) = param_2;
    *(uint *)((long)plVar6 + 0x14) = param_3;
    plVar5 = (long *)param_1[1];
    param_1 = param_1 + 1;
    if (plVar5 == param_1) {
      lVar1 = *plVar6;
      plVar5 = (long *)plVar6[1];
      *(long **)(lVar1 + 8) = plVar5;
      *plVar5 = lVar1;
      lVar1 = *param_1;
      *(long **)(lVar1 + 8) = plVar6;
      *plVar6 = lVar1;
      plVar6[1] = (long)param_1;
      *param_1 = (long)plVar6;
      return;
    }
    plVar3 = (long *)0x0;
    if (plVar5 == param_1) {
      plVar3 = (long *)0x0;
    }
    else {
      do {
        plVar4 = plVar5;
        plVar5 = plVar4;
        if (param_3 < *(uint *)((long)plVar4 + 0x14)) break;
        plVar5 = (long *)*plVar4;
        plVar3 = plVar4;
      } while (plVar5 != param_1);
    }
    if (plVar3 != (long *)0x0) {
      plVar5 = plVar3;
    }
    lVar1 = *plVar6;
    plVar3 = (long *)plVar6[1];
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    lVar1 = *plVar5;
    *(long **)(lVar1 + 8) = plVar6;
    *plVar6 = lVar1;
    plVar6[1] = (long)plVar5;
    *plVar5 = (long)plVar6;
  }
  return;
}

