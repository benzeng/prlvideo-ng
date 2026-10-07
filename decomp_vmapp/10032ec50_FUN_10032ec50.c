
void FUN_10032ec50(undefined8 *param_1,ulong *param_2)

{
  void *pvVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  
  if ((long *)param_1[1] != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    plVar5 = param_1 + 1;
    do {
      while (plVar6 = plVar4, *param_2 <= (ulong)plVar6[4]) {
        plVar4 = (long *)*plVar6;
        plVar5 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_10032ecb0;
      }
      plVar3 = plVar6 + 1;
      plVar6 = plVar5;
      plVar4 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
LAB_10032ecb0:
    if ((plVar6 != param_1 + 1) && ((ulong)plVar6[4] <= *param_2)) {
      pvVar1 = (void *)plVar6[5];
      iVar2 = *(int *)((long)pvVar1 + 0x80) + -1;
      *(int *)((long)pvVar1 + 0x80) = iVar2;
      if ((pvVar1 != (void *)0x0) && (iVar2 == 0)) {
        FUN_10032d700(pvVar1);
        operator_delete(pvVar1);
      }
      plVar4 = plVar6;
      plVar5 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar7 = (long *)*plVar3 != plVar4;
          plVar4 = plVar3;
        } while (bVar7);
      }
      else {
        do {
          plVar3 = plVar5;
          plVar5 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar6) {
        *param_1 = plVar3;
      }
      param_1[2] = param_1[2] + -1;
      FUN_1000e86c0(param_1[1],plVar6);
      operator_delete(plVar6);
      return;
    }
  }
  return;
}

