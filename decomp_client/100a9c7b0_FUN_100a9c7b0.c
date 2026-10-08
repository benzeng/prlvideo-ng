
void FUN_100a9c7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *local_20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    FUN_100a9ad90(param_1);
    local_20 = (long *)0x0;
    FUN_100a944c0(param_1,0xffffffff,&local_20,param_3);
    if (local_20 != (long *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  return;
}

