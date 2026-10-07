
void FUN_100350fa0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  
  plVar2 = (long *)*param_1;
  while (plVar2 != param_1 + 1) {
    if ((void *)plVar2[5] != (void *)0x0) {
      operator_delete((void *)plVar2[5]);
    }
    plVar1 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      do {
        plVar1 = (long *)plVar2[2];
        bVar3 = (long *)*plVar1 != plVar2;
        plVar2 = plVar1;
      } while (bVar3);
    }
    else {
      do {
        plVar2 = plVar1;
        plVar1 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  FUN_1003511f0(param_1,param_1[1]);
  param_1[2] = 0;
  *param_1 = (long)(param_1 + 1);
  param_1[1] = 0;
  FUN_1003511f0(param_1,0);
  return;
}

