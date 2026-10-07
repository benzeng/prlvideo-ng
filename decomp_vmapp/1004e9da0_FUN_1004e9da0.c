
long * FUN_1004e9da0(undefined8 param_1,long param_2,QString *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  long *local_28;
  
  local_28 = (long *)0x0;
  cVar4 = operator==((QString *)(param_2 + 0x18),param_3);
  if (cVar4 == '\0') {
    plVar5 = operator_new(0x60);
    FUN_1004d9ea0(plVar5,param_3,param_2);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar3 = plVar5;
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        lVar2 = *local_28;
        local_28 = plVar5;
        (**(code **)(lVar2 + 0x10))();
        plVar3 = local_28;
      }
    }
    local_28 = plVar3;
    LOCK();
    plVar3 = plVar5 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  else {
    plVar5 = operator_new(0x60);
    FUN_1004da4b0(plVar5,param_3,param_2);
    *plVar5 = (long)&PTR_FUN_100bc3318;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar3 = plVar5;
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        lVar2 = *local_28;
        local_28 = plVar5;
        (**(code **)(lVar2 + 0x10))();
        plVar3 = local_28;
      }
    }
    local_28 = plVar3;
    LOCK();
    plVar3 = plVar5 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *(undefined1 *)((long)local_28 + 0x29) = *(undefined1 *)((long)&param_3[1].field0_0x0 + 1);
  *(undefined1 *)(local_28 + 5) = *(undefined1 *)&param_3[1].field0_0x0;
  FUN_1004d29c0(*(long *)(param_2 + 0x50) + 0x48,*(undefined4 *)&param_3[7].field0_0x0,&local_28);
  plVar3 = local_28;
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar5 = local_28 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_28 + 0x10))(local_28);
    }
  }
  return plVar3;
}

