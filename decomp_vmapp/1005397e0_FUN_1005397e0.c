
void FUN_1005397e0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  long *local_38;
  
  plVar3 = operator_new(0x20);
  *plVar3 = 0;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  bVar8 = plVar4 == (long *)0x0;
  if (bVar8) {
    operator_delete(plVar3);
    plVar4 = (long *)0x0;
    plVar3 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = (long)plVar3;
    *plVar4 = (long)&PTR_FUN_10111d728;
  }
  pvVar5 = operator_new(0x808);
  plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  bVar9 = plVar6 == (long *)0x0;
  if (bVar9) {
    operator_delete(pvVar5);
    plVar6 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = (long)pvVar5;
    *plVar6 = (long)&PTR_FUN_10111d6c8;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar1 = (long *)*plVar3;
  *plVar3 = (long)plVar6;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar3 = plVar1 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  if (!bVar9) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  plVar3 = (long *)plVar4[2];
  *(undefined1 *)(plVar3 + 3) = 0;
  plVar3[2] = 0;
  plVar3[1] = 0;
  puVar7 = (undefined4 *)0x0;
  if (*plVar3 != 0) {
    puVar7 = *(undefined4 **)(*plVar3 + 0x10);
  }
  ___bzero(puVar7,0x808);
  *puVar7 = 0x101;
  if (!bVar8) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = plVar4;
  FUN_100539e10(param_1,&local_38,1);
  LOCK();
  plVar3 = plVar4 + 1;
  lVar2 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (!bVar8) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010053998f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}

