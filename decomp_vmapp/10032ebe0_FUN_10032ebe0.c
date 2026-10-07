
long FUN_10032ebe0(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = 0;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 8);
    plVar4 = (long *)(param_1 + 8);
    do {
      while (plVar5 = plVar2, param_2 <= (ulong)plVar5[4]) {
        plVar2 = (long *)*plVar5;
        plVar4 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10032ec30;
      }
      plVar1 = plVar5 + 1;
      plVar5 = plVar4;
      plVar2 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10032ec30:
    lVar3 = 0;
    if ((plVar5 != (long *)(param_1 + 8)) && (lVar3 = 0, (ulong)plVar5[4] <= param_2)) {
      lVar3 = plVar5[5];
    }
  }
  return lVar3;
}

