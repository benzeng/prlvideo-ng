
long FUN_10043b310(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  param_1 = (long *)*param_1;
  if (*(uint *)(param_1 + 4) == 0) {
    return 0;
  }
  uVar1 = *(uint *)((long)param_1 + 0x24) ^ param_2;
  plVar3 = *(long **)(param_1[1] + ((ulong)uVar1 % (ulong)*(uint *)(param_1 + 4)) * 8);
  plVar2 = plVar3;
  if (plVar3 == param_1) {
    return 0;
  }
  while ((*(uint *)(plVar2 + 1) != uVar1 || (*(uint *)((long)plVar2 + 0xc) != param_2))) {
    plVar2 = (long *)*plVar2;
    if (plVar2 == param_1) {
      return 0;
    }
  }
  if (plVar2 != param_1) {
    if (*(int *)((long)param_1 + 0x14) == 0) {
      return 0;
    }
    while ((*(uint *)(plVar3 + 1) != uVar1 || (*(uint *)((long)plVar3 + 0xc) != param_2))) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == param_1) {
        return 0;
      }
    }
    if (plVar3 != param_1) {
      return plVar3[2];
    }
    return 0;
  }
  return 0;
}

