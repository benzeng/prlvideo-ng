
void FUN_10032eeb0(long *param_1)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  
  plVar3 = (long *)*param_1;
  while (plVar3 != param_1 + 1) {
    pvVar1 = (void *)plVar3[5];
    iVar4 = *(int *)((long)pvVar1 + 0x80) + -1;
    *(int *)((long)pvVar1 + 0x80) = iVar4;
    if ((pvVar1 != (void *)0x0) && (iVar4 == 0)) {
      FUN_10032d700(pvVar1);
      operator_delete(pvVar1);
    }
    if ((iVar4 != 0) && (pvVar1 = (void *)plVar3[5], pvVar1 != (void *)0x0)) {
      FUN_10032d700(pvVar1);
      operator_delete(pvVar1);
    }
    plVar2 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar2 = (long *)plVar3[2];
        bVar5 = (long *)*plVar2 != plVar3;
        plVar3 = plVar2;
      } while (bVar5);
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_10032f820(param_1,param_1[1]);
  param_1[2] = 0;
  *param_1 = (long)(param_1 + 1);
  param_1[1] = 0;
  FUN_10032f820(param_1,0);
  return;
}

