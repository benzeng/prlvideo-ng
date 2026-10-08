
undefined1 FUN_100a72cd0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  long *local_18;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_100a93f00(uVar2,&local_18);
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
  return uVar4;
}

