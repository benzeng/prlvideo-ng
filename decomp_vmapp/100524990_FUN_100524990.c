
undefined8 FUN_100524990(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_18;
  long *local_10;
  
  local_18 = 0;
  FUN_100525550(&local_10,param_1,&local_18);
  if (local_10 != (long *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_10 + 0x10))();
    }
  }
  return 0;
}

