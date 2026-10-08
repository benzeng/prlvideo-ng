
void FUN_1000a1130(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *local_18;
  
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_1007f4250(param_1,&local_18);
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
  return;
}

