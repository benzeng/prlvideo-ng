
undefined4 FUN_1004884f0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *local_20;
  
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    LOCK();
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    UNLOCK();
  }
  local_20 = param_2;
  uVar3 = FUN_1004880c0(param_1,&local_20,0,param_3);
  if (param_2 != (long *)0x0) {
    LOCK();
    plVar1 = param_2 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
  }
  return uVar3;
}

