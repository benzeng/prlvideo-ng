
long FUN_100b04f40(undefined8 *param_1,QString *param_2)

{
  char cVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *local_40;
  long *local_38;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_100b06f10(param_1);
    puVar2 = (uint *)*param_1;
  }
  lVar5 = *(long *)(puVar2 + 4);
  lVar7 = 0;
  if (*(long *)(puVar2 + 4) != 0) {
    do {
      while (lVar6 = lVar5, cVar1 = operator<((QString *)(lVar6 + 0x18),param_2), cVar1 == '\0') {
        lVar5 = *(long *)(lVar6 + 8);
        lVar7 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_100b04fb6;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar7;
    if (lVar7 != 0) {
LAB_100b04fb6:
      cVar1 = operator<(param_2,(QString *)(lVar6 + 0x18));
      if (cVar1 == '\0') {
        return lVar6 + 0x20;
      }
    }
  }
  plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  plVar8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_1022cf158;
    plVar8 = plVar3;
  }
  local_40 = plVar8;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  plVar3 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_1022cf1b8;
    plVar3 = plVar4;
  }
  local_38 = plVar3;
  lVar5 = FUN_100b06d80(param_1,param_2,&local_40);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return lVar5 + 0x20;
}

