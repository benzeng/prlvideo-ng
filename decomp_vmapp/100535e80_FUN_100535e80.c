
undefined8 * FUN_100535e80(undefined8 *param_1,long param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long local_38;
  
  QMutex::lock();
  local_38 = 0;
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  lVar3 = 0;
  if (lVar2 != 0) {
    do {
      while (lVar4 = lVar2, uVar6 = *(uint *)(lVar4 + 0x18), param_3 <= uVar6) {
        lVar2 = *(long *)(lVar4 + 8);
        lVar3 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100535ef9;
      }
      lVar2 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    if (lVar3 != 0) {
      uVar6 = *(uint *)(lVar3 + 0x18);
      lVar4 = lVar3;
LAB_100535ef9:
      if (uVar6 <= param_3) goto LAB_100535eff;
    }
  }
  lVar4 = 0;
LAB_100535eff:
  plVar5 = &local_38;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x20);
  }
  plVar5 = (long *)*plVar5;
  if (plVar5 == (long *)0x0) {
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (plVar5[2] == 0) {
      *param_1 = PTR_shared_null_100ba20d0;
    }
    else {
      FUN_10053ab80(param_1,plVar5[2],param_4);
    }
    LOCK();
    plVar1 = plVar5 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  QMutex::unlock();
  return param_1;
}

