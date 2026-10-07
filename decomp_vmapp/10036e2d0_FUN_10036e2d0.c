
void FUN_10036e2d0(long *param_1)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  plVar3 = (long *)*param_1;
  while (plVar3 != param_1 + 1) {
    pvVar1 = (void *)plVar3[0x34];
    if (pvVar1 != (void *)0x0) {
      FUN_100373cc0(pvVar1);
      operator_delete(pvVar1);
    }
    plVar2 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar2 = (long *)plVar3[2];
        bVar4 = (long *)*plVar2 != plVar3;
        plVar3 = plVar2;
      } while (bVar4);
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_100373790(param_1,param_1[1]);
  param_1[2] = 0;
  *param_1 = (long)(param_1 + 1);
  param_1[1] = 0;
  return;
}

