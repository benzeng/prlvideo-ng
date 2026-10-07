
void FUN_10033a830(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x18);
    plVar3 = (long *)(param_1 + 0x18);
    do {
      while (plVar4 = plVar2, param_2 <= *(uint *)(plVar4 + 4)) {
        plVar2 = (long *)*plVar4;
        plVar3 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_10033a870;
      }
      plVar1 = plVar4 + 1;
      plVar2 = (long *)*plVar1;
      plVar4 = plVar3;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033a870:
    if ((plVar4 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar4 + 4) <= param_2)) {
      FUN_10033d850(plVar4[5]);
      return;
    }
  }
  return;
}

