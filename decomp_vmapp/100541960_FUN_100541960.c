
void FUN_100541960(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_10111d728;
  plVar2 = (long *)param_1[2];
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)*plVar2;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    operator_delete(plVar2);
  }
  operator_delete(param_1);
  return;
}

