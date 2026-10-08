
undefined4 FUN_10032fb30(long param_1,long *param_2,undefined1 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *local_18;
  
  lVar2 = *(long *)(param_1 + 0x50);
  uVar3 = 0x80000007;
  if (lVar2 != 0) {
    local_18 = (long *)*param_2;
    if (local_18 != (long *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    uVar3 = FUN_100a4aef0(lVar2,&local_18,param_3);
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
  }
  return uVar3;
}

