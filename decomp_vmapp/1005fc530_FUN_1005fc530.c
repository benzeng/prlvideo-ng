
void FUN_1005fc530(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_100bc7e68;
  FUN_10057e7b0(param_1 + 0x20);
  plVar2 = (long *)param_1[0x1e];
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
  FUN_1005fbab0(param_1);
  operator_delete(param_1);
  return;
}

