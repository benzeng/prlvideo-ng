
undefined1 FUN_100ab6f70(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long *local_28;
  
  local_28 = operator_new(0x18);
  *(undefined4 *)(local_28 + 1) = 1;
  local_28[2] = param_1;
  *local_28 = (long)&PTR_FUN_1022825c8;
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = local_28 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*local_28 + 0x10))(local_28);
  }
  uVar3 = FUN_100ab6e90(&local_28,param_2);
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
  return uVar3;
}

