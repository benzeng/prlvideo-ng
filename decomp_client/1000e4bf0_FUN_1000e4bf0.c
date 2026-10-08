
void FUN_1000e4bf0(long *param_1,void *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    if (param_2 != (void *)0x0) {
      FUN_100ab75f0(param_2);
      operator_delete(param_2);
      puVar4 = (undefined8 *)0x0;
    }
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = param_2;
    *puVar4 = &PTR_FUN_10226d070;
  }
  plVar2 = (long *)*param_1;
  *param_1 = (long)puVar4;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000e4c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}

