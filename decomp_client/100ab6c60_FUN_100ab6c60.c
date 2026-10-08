
undefined1 FUN_100ab6c60(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  long *local_30;
  undefined1 local_28 [4];
  int local_24;
  
  local_30 = operator_new(0x18);
  *(undefined4 *)(local_30 + 1) = 1;
  local_30[2] = param_1;
  *local_30 = (long)&PTR_FUN_102282568;
  LOCK();
  *(int *)(local_30 + 1) = (int)local_30[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = local_30 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*local_30 + 0x10))(local_30);
  }
  (**(code **)(*param_2 + 0x18))(param_2,local_28);
  uVar6 = 0;
  do {
    local_24 = 0;
    cVar3 = (**(code **)(*(long *)local_30[2] + 0x10))
                      ((long *)local_30[2],local_28 + uVar6,4 - (int)uVar6,&local_24);
    if (cVar3 == '\0') {
      uVar4 = 0;
      goto LAB_100ab6d29;
    }
    uVar5 = (int)uVar6 + local_24;
    uVar6 = (ulong)uVar5;
  } while (uVar5 < 4);
  uVar4 = FUN_100ab6b00(&local_30,param_2);
LAB_100ab6d29:
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return uVar4;
}

