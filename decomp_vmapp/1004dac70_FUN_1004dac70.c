
undefined8 FUN_1004dac70(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  bool bVar8;
  
  QMutex::lock();
  bVar8 = true;
  uVar7 = 0xf0000012;
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x50);
    plVar4 = (long *)(param_1 + 0x50);
    do {
      while (plVar6 = plVar5, param_2 <= *(uint *)(plVar6 + 4)) {
        plVar5 = (long *)*plVar6;
        plVar4 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_1004dacf0;
      }
      plVar3 = plVar6 + 1;
      plVar6 = plVar4;
      plVar5 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
LAB_1004dacf0:
    if ((plVar6 != (long *)(param_1 + 0x50)) && (*(uint *)(plVar6 + 4) <= param_2)) {
      lVar1 = plVar6[5];
      lVar2 = plVar6[6];
      plVar6[6] = 0;
      plVar6[5] = 0;
      plVar5 = plVar6;
      plVar4 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar5[2];
          bVar8 = (long *)*plVar3 != plVar5;
          plVar5 = plVar3;
        } while (bVar8);
      }
      else {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x48) == plVar6) {
        *(long **)(param_1 + 0x48) = plVar3;
      }
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
      FUN_1000e86c0(*(undefined8 *)(param_1 + 0x50),plVar6);
      if (plVar6[6] != 0) {
        std::__shared_weak_count::__release_shared();
      }
      operator_delete(plVar6);
      QMutex::unlock();
      FUN_1004edeb0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x30),lVar1);
      FUN_1004ee070(lVar1,0xf0000000);
      uVar7 = 0;
      if (lVar2 != 0) {
        std::__shared_weak_count::__release_shared();
      }
      bVar8 = false;
    }
  }
  if (bVar8) {
    QMutex::unlock();
  }
  return uVar7;
}

