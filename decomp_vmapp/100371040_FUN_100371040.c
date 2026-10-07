
void FUN_100371040(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  
  plVar6 = (long *)*param_2;
  if (plVar6 != param_1 + 0x20c) {
    plVar2 = (long *)plVar6[0x49];
    if (((long *)*param_1 == plVar2) && ((long *)*param_1 != (long *)0x0)) {
      (*DAT_1011c6ee0)(0);
      plVar6 = (long *)*param_1;
      if (plVar6 != (long *)0x0) {
        piVar1 = (int *)((long)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      *param_1 = 0;
      plVar6 = (long *)*param_2;
    }
    plVar5 = plVar6;
    plVar3 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar7 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar7);
    }
    else {
      do {
        plVar4 = plVar3;
        plVar3 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    if ((long *)param_1[0x20b] == plVar6) {
      param_1[0x20b] = (long)plVar4;
    }
    param_1[0x20d] = param_1[0x20d] + -1;
    FUN_1000e86c0(param_1[0x20c],plVar6);
    FUN_1003737e0(plVar6 + 4);
    operator_delete(plVar6);
    FUN_100371150(param_1 + 0x253,plVar2 + 0x1a);
    FUN_100371150(param_1 + 0x253,plVar2 + 2);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010037113b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}

