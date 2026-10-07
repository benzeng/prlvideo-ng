
undefined8 FUN_1000fb5e0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *local_18;
  
  local_18 = (long *)0x0;
  FUN_100795cd0(param_1,&local_18);
  if (local_18 != (long *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return param_1;
}

