
void FUN_10078e070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  long *param_5)

{
  long *plVar1;
  long lVar2;
  long *local_18;
  
  local_18 = (long *)*param_5;
  if (local_18 != (long *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_1007d3640(param_1,param_1,param_4,&local_18);
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

