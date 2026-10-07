
undefined8 * FUN_100796f30(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  FUN_1007d6bd0(local_48);
  *param_1 = 0;
  pvVar4 = operator_new(0x40);
  FUN_1007969a0(pvVar4,local_48);
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar5 == (long *)0x0) {
    FUN_100796c70(pvVar4);
    operator_delete(pvVar4);
    *param_1 = 0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)pvVar4;
    *plVar5 = (long)&PTR_FUN_1011a5978;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = plVar5;
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if (lVar2 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

