
undefined8 FUN_10079e810(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *in_RAX;
  long *local_18;
  
  local_18 = in_RAX;
  FUN_1007c9890(&local_18,param_2 + 400,param_3,0);
  if ((local_18 == (long *)0x0) || (local_18[2] == 0)) {
    FUN_100795ca0(param_1);
  }
  else {
    FUN_100795cd0(param_1,&local_18);
  }
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

