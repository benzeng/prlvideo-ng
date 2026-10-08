
void FUN_1000eb540(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = (void *)FUN_1000eb630(param_2 + 0x30,0);
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar4 == (long *)0x0) {
    if (pvVar3 != (void *)0x0) {
      FUN_100ab75f0(pvVar3);
      operator_delete(pvVar3);
      return;
    }
  }
  else {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = (long)pvVar3;
    *plVar4 = (long)&PTR_FUN_10226d070;
    if (pvVar3 != (void *)0x0) {
      FUN_1000cb270(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x14),pvVar3);
    }
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000eb5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}

