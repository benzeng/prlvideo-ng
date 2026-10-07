
void FUN_1005a8180(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[3];
  while (plVar5 != param_1 + 3) {
    lVar2 = *plVar5;
    plVar3 = (long *)plVar5[1];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    *plVar5 = 0x112233;
    plVar5[1] = (long)&DAT_00445566;
    plVar3 = (long *)plVar5[-2];
    if (plVar3 != (long *)0x0) {
      plVar4 = (long *)*plVar3;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      operator_delete(plVar3);
    }
    operator_delete(plVar5 + -2);
    plVar5 = (long *)param_1[3];
  }
                    /* WARNING: Could not recover jumptable at 0x0001005a8213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1);
  return;
}

