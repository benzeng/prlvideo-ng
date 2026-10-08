
void FUN_100acd330(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *local_28;
  
  iVar3 = FUN_100ae5130(param_2,param_3);
  if (iVar3 != 0) {
    local_28 = (long *)*param_2;
    if (local_28 != (long *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    FUN_100ae05c0(param_1,&local_28,param_3);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  return;
}

