
undefined8 FUN_1005f5a10(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  
  plVar1 = (long *)param_1[1];
  uVar4 = 0;
  if (plVar1 != (long *)0x0) {
    plVar5 = plVar1;
    plVar2 = param_1 + 1;
    do {
      while (plVar6 = plVar5, *param_2 <= (ulong)plVar6[4]) {
        plVar5 = (long *)*plVar6;
        plVar2 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_1005f5a70;
      }
      plVar3 = plVar6 + 1;
      plVar6 = plVar2;
      plVar5 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
LAB_1005f5a70:
    uVar4 = 0;
    if ((plVar6 != param_1 + 1) && (uVar4 = 0, (ulong)plVar6[4] <= *param_2)) {
      plVar5 = plVar6;
      plVar2 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar5[2];
          bVar7 = (long *)*plVar3 != plVar5;
          plVar5 = plVar3;
        } while (bVar7);
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar6) {
        *param_1 = plVar3;
      }
      param_1[2] = param_1[2] + -1;
      FUN_1000e86c0(plVar1,plVar6);
      operator_delete(plVar6);
      uVar4 = 1;
    }
  }
  return uVar4;
}

