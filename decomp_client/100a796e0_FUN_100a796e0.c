
void FUN_100a796e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    plVar2 = (long *)*param_1;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    operator_delete(param_1);
    return;
  }
  return;
}

