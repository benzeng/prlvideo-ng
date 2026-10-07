
undefined8 FUN_10034f0f0(long param_1,short *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if ((ulong)*(uint *)(param_2 + 2) < 0x20) {
    return 9;
  }
  if ((ulong)*(uint *)(param_2 + 2) - 0x20 >> 4 < (ulong)*(uint *)(param_2 + 0xe)) {
    return 9;
  }
  if (*param_2 == 0x67) {
    if (*(long **)(param_1 + 0x12888) == (long *)0x0) {
      return 7;
    }
    plVar2 = *(long **)(param_1 + 0x12888);
    plVar4 = (long *)(param_1 + 0x12888);
    do {
      while (plVar3 = plVar2, *(uint *)(plVar3 + 4) < *(uint *)(param_2 + 4)) {
        plVar1 = plVar3 + 1;
        plVar3 = plVar4;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10034f1d0;
      }
      plVar2 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
LAB_10034f1d0:
    if (plVar3 == (long *)(param_1 + 0x12888)) {
      return 7;
    }
    if (*(uint *)(param_2 + 4) < *(uint *)(plVar3 + 4)) {
      return 7;
    }
  }
  else if (*param_2 == 0x66) {
    if (*(long **)(param_1 + 0x27f0) == (long *)0x0) {
      return 7;
    }
    plVar2 = *(long **)(param_1 + 0x27f0);
    plVar4 = (long *)(param_1 + 0x27f0);
    do {
      while (plVar3 = plVar2, *(uint *)(plVar3 + 4) < *(uint *)(param_2 + 4)) {
        plVar1 = plVar3 + 1;
        plVar3 = plVar4;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10034f1df;
      }
      plVar2 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
LAB_10034f1df:
    if (plVar3 == (long *)(param_1 + 0x27f0)) {
      return 7;
    }
    if (*(uint *)(param_2 + 4) < *(uint *)(plVar3 + 4)) {
      return 7;
    }
    FUN_1003656d0(*(undefined8 *)(param_1 + 0x2778),param_1,plVar3[5],param_2 + 6,
                  (ulong)*(uint *)(param_2 + 0xe),param_2 + 0x10);
  }
  return 0;
}

