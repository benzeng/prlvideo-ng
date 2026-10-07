
undefined1 FUN_1005389d0(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined1 uVar7;
  long local_30;
  
  QMutex::lock();
  local_30 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar3 = 0;
  if (lVar2 != 0) {
    do {
      while (lVar4 = lVar2, uVar6 = *(uint *)(lVar4 + 0x18), param_2 <= uVar6) {
        lVar2 = *(long *)(lVar4 + 8);
        lVar3 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100538a49;
      }
      lVar2 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    if (lVar3 != 0) {
      uVar6 = *(uint *)(lVar3 + 0x18);
      lVar4 = lVar3;
LAB_100538a49:
      if (uVar6 <= param_2) goto LAB_100538a4f;
    }
  }
  lVar4 = 0;
LAB_100538a4f:
  plVar5 = &local_30;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x20);
  }
  plVar5 = (long *)*plVar5;
  if (plVar5 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    lVar2 = plVar5[2];
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else if (*(int *)(lVar2 + 0x28) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      LOCK();
      lVar3 = *(long *)(lVar2 + 0x30);
      if (lVar3 == 0) {
        *(long *)(lVar2 + 0x30) = param_3;
        lVar3 = 0;
      }
      UNLOCK();
      if (lVar3 == 0) {
        uVar7 = 1;
        QSemaphore::release((int)lVar2 + 0x38);
      }
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
  return uVar7;
}

