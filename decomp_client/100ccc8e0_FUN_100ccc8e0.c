
undefined1
FUN_100ccc8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  void *pvVar3;
  long *plVar4;
  undefined1 uVar5;
  long lVar6;
  bool bVar7;
  
  pvVar3 = operator_new(0x18);
  FUN_100ccd220(pvVar3,param_3);
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  bVar7 = plVar4 == (long *)0x0;
  if (bVar7) {
    FUN_1001e3ed0(pvVar3);
    operator_delete(pvVar3);
    plVar4 = (long *)0x0;
    pvVar3 = (void *)0x0;
  }
  else {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = (long)pvVar3;
    *plVar4 = (long)&PTR_FUN_102271498;
  }
  cVar2 = FUN_100cce960(pvVar3);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    if (!bVar7) {
      lVar6 = plVar4[2];
    }
    uVar5 = 1;
    FUN_100ccc820(param_1,lVar6,param_2,param_4);
  }
  if (!bVar7) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return uVar5;
}

