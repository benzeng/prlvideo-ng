
bool FUN_10053e980(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  bool bVar8;
  long local_30;
  
  QMutex::lock();
  local_30 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar4 = 0;
  if (lVar2 != 0) {
    do {
      while (lVar5 = lVar2, uVar7 = *(uint *)(lVar5 + 0x18), param_2 <= uVar7) {
        lVar2 = *(long *)(lVar5 + 8);
        lVar4 = lVar5;
        if (*(long *)(lVar5 + 8) == 0) goto LAB_10053e9f9;
      }
      lVar2 = *(long *)(lVar5 + 0x10);
    } while (*(long *)(lVar5 + 0x10) != 0);
    if (lVar4 != 0) {
      uVar7 = *(uint *)(lVar4 + 0x18);
      lVar5 = lVar4;
LAB_10053e9f9:
      if (uVar7 <= param_2) goto LAB_10053e9ff;
    }
  }
  lVar5 = 0;
LAB_10053e9ff:
  plVar6 = &local_30;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x20);
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 != (long *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar3 = (long *)*param_3;
  *param_3 = (long)plVar6;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  if (*param_3 == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(long *)(*param_3 + 0x10) != 0;
  }
  QMutex::unlock();
  return bVar8;
}

