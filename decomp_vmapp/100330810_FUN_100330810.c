
void FUN_100330810(long param_1,ulong param_2)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x28);
    plVar3 = (long *)(param_1 + 0x28);
    do {
      while (plVar5 = plVar4, param_2 <= (ulong)plVar5[4]) {
        plVar4 = (long *)*plVar5;
        plVar3 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_100330860;
      }
      plVar2 = plVar5 + 1;
      plVar5 = plVar3;
      plVar4 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
LAB_100330860:
    if ((plVar5 != (long *)(param_1 + 0x28)) && ((ulong)plVar5[4] <= param_2)) {
      pvVar1 = (void *)plVar5[5];
      if (pvVar1 != (void *)0x0) {
        FUN_100359c30(pvVar1);
        operator_delete(pvVar1);
      }
      plVar4 = plVar5;
      plVar3 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar2 = (long *)plVar4[2];
          bVar6 = (long *)*plVar2 != plVar4;
          plVar4 = plVar2;
        } while (bVar6);
      }
      else {
        do {
          plVar2 = plVar3;
          plVar3 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x20) == plVar5) {
        *(long **)(param_1 + 0x20) = plVar2;
      }
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      FUN_1000e86c0(*(undefined8 *)(param_1 + 0x28),plVar5);
      operator_delete(plVar5);
      return;
    }
  }
  return;
}

