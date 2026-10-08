
void FUN_100a36e50(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_100a36e50(param_1,*param_2);
    FUN_100a36e50(param_1,param_2[1]);
    plVar2 = (long *)param_2[5];
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
    operator_delete(param_2);
    return;
  }
  return;
}

