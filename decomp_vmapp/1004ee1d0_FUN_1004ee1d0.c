
undefined1 FUN_1004ee1d0(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  
  uVar6 = param_1;
  if ((param_1 != 0) && ((param_1 & 1) == 0)) {
    QReadWriteLock::lockForRead();
    uVar6 = param_1 | 1;
  }
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 == (long *)(param_1 + 0x10)) {
    uVar4 = 0;
  }
  else {
    do {
      lVar1 = plVar3[4];
      QMutex::lock();
      for (plVar7 = *(long **)(lVar1 + 0x48); plVar7 != (long *)(lVar1 + 0x40);
          plVar7 = (long *)plVar7[1]) {
        if (plVar7[3] == param_2) {
          lVar2 = *plVar7;
          *(long *)(lVar2 + 8) = plVar7[1];
          *(long *)plVar7[1] = lVar2;
          *(long *)(lVar1 + 0x50) = *(long *)(lVar1 + 0x50) + -1;
          operator_delete(plVar7);
          QMutex::unlock();
          uVar4 = 1;
          goto LAB_1004ee2ea;
        }
      }
      QMutex::unlock();
      plVar7 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar3[2];
          bVar8 = (long *)*plVar5 != plVar3;
          plVar3 = plVar5;
        } while (bVar8);
      }
      else {
        do {
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar3 = plVar5;
    } while (plVar5 != (long *)(param_1 + 0x10));
    uVar4 = 0;
  }
LAB_1004ee2ea:
  if ((uVar6 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar4;
}

