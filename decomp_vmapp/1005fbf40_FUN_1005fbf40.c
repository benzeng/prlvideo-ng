
void FUN_1005fbf40(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[3];
  while (plVar3 != param_1 + 3) {
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0x112233;
    plVar3[1] = (long)&DAT_00445566;
    if ((void *)plVar3[-2] != (void *)0x0) {
      operator_delete((void *)plVar3[-2]);
    }
    operator_delete(plVar3 + -2);
    plVar3 = (long *)param_1[3];
  }
                    /* WARNING: Could not recover jumptable at 0x0001005fbfb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1);
  return;
}

