
void FUN_1008e4b20(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001008e4b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}

