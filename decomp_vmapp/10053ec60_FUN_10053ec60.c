
undefined1 FUN_10053ec60(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long local_38;
  
  QMutex::lock();
  local_38 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar4 = 0;
  if (lVar2 != 0) {
    do {
      while (lVar5 = lVar2, uVar7 = *(uint *)(lVar5 + 0x18), param_2 <= uVar7) {
        lVar2 = *(long *)(lVar5 + 8);
        lVar4 = lVar5;
        if (*(long *)(lVar5 + 8) == 0) goto LAB_10053ecd9;
      }
      lVar2 = *(long *)(lVar5 + 0x10);
    } while (*(long *)(lVar5 + 0x10) != 0);
    if (lVar4 != 0) {
      uVar7 = *(uint *)(lVar4 + 0x18);
      lVar5 = lVar4;
LAB_10053ecd9:
      if (uVar7 <= param_2) goto LAB_10053ecdf;
    }
  }
  lVar5 = 0;
LAB_10053ecdf:
  plVar6 = &local_38;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x20);
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    lVar2 = plVar6[2];
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      QMutex::lock();
      if (*(char *)(lVar2 + 0x74) == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = QThread::isRunning();
      }
      QMutex::unlock();
    }
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  QMutex::unlock();
  return uVar3;
}

