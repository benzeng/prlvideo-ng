
void FUN_100064620(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *local_18;
  
  if (*(int *)(*(long *)(*param_2 + 0x10) + 0x40) != 0x1966) {
    plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
    pcVar2 = *(code **)(*plVar1 + 0xf8);
    local_18 = (long *)*param_3;
    if (local_18 != (long *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (*pcVar2)(plVar1,&local_18);
    if (local_18 != (long *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_18 + 0x10))();
      }
    }
  }
  return;
}

