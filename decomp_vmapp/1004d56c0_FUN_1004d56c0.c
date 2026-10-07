
void FUN_1004d56c0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *local_18;
  
  LOCK();
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  UNLOCK();
  local_18 = param_2;
  (**(code **)(*param_1 + 0x20))(param_1,&local_18);
  LOCK();
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_2 + 0x10))(param_2);
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
  return;
}

