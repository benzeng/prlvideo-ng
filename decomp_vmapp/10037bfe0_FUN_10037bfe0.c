
void FUN_10037bfe0(void *param_1,void *param_2,void *param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  while (plVar2 = (long *)**(undefined8 **)((long)param_1 + 0x20), plVar2 != (long *)0x0) {
    lVar3 = plVar2[7];
    *(long *)(lVar3 + 8) = plVar2[6];
    *(long *)(plVar2[6] + 0x10) = lVar3;
    plVar2[6] = (long)(plVar2 + 5);
    plVar2[7] = (long)(plVar2 + 5);
    lVar3 = plVar2[10];
    *(long *)(lVar3 + 8) = plVar2[9];
    *(long *)(plVar2[9] + 0x10) = lVar3;
    plVar2[9] = (long)(plVar2 + 8);
    plVar2[10] = (long)(plVar2 + 8);
    lVar3 = plVar2[0xd];
    *(long *)(lVar3 + 8) = plVar2[0xc];
    *(long *)(plVar2[0xc] + 0x10) = lVar3;
    plVar2[0xc] = (long)(plVar2 + 0xb);
    plVar2[0xd] = (long)(plVar2 + 0xb);
    lVar3 = plVar2[0x10];
    *(long *)(lVar3 + 8) = plVar2[0xf];
    *(long *)(plVar2[0xf] + 0x10) = lVar3;
    plVar2[0xf] = (long)(plVar2 + 0xe);
    plVar2[0x10] = (long)(plVar2 + 0xe);
    pvVar4 = (void *)plVar2[2];
    if ((((pvVar4 != param_3) && (pvVar4 != param_2)) && (pvVar4 != (void *)0x0)) &&
       ((pvVar4 != param_1 && (**(long **)((long)pvVar4 + 0x20) == 0)))) {
      FUN_10037bf60(pvVar4);
      operator_delete(pvVar4);
    }
    pvVar4 = (void *)plVar2[3];
    if (((pvVar4 != param_3) && (pvVar4 != param_2)) &&
       ((pvVar4 != (void *)0x0 && ((pvVar4 != param_1 && (**(long **)((long)pvVar4 + 0x20) == 0)))))
       ) {
      FUN_10037bf60(pvVar4);
      operator_delete(pvVar4);
    }
    pvVar4 = (void *)plVar2[4];
    if ((((pvVar4 != param_3) && (pvVar4 != param_2)) && (pvVar4 != (void *)0x0)) &&
       ((pvVar4 != param_1 && (**(long **)((long)pvVar4 + 0x20) == 0)))) {
      FUN_10037bf60(pvVar4);
      operator_delete(pvVar4);
    }
    piVar1 = (int *)((long)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  return;
}

