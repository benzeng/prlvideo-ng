
long * FUN_100ccd230(long *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  bool bVar7;
  
  FUN_100ccd3d0();
  plVar2 = (long *)*param_1;
  if ((plVar2 == (long *)0x0) || (plVar2[2] == 0)) {
    puVar5 = operator_new(0x10);
    *puVar5 = PTR_shared_null_1021e1288;
    piVar3 = (int *)*param_3;
    puVar5[1] = piVar3;
    if (1 < *piVar3 + 1U) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    bVar7 = plVar6 == (long *)0x0;
    if (bVar7) {
      FUN_100ccfac0(puVar5);
      operator_delete(puVar5);
      plVar6 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar6 + 1) = 1;
      plVar6[2] = (long)puVar5;
      *plVar6 = (long)&PTR_FUN_10230f498;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *param_1 = (long)plVar6;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (!bVar7) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    FUN_100ccfc20(param_2 + 8,param_1);
  }
  return param_1;
}

