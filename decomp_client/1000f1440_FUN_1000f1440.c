
long * FUN_1000f1440(long *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  
  QFutureInterfaceBase::waitForResult(param_2);
  lVar3 = QFutureInterfaceBase::mutex();
  if (lVar3 != 0) {
    QMutex::lock();
  }
  iVar2 = QFutureInterfaceBase::resultStoreBase();
  auVar7 = QtPrivate::ResultStoreBase::resultAt(iVar2);
  plVar6 = *(long **)(auVar7._0_8_ + 0x28);
  if (*(int *)(auVar7._0_8_ + 0x20) != 0) {
    plVar6 = (long *)(*plVar6 + *(long *)(*plVar6 + 0x10) + (long)auVar7._8_4_ * 8);
  }
  if (lVar3 != 0) {
    QMutex::unlock();
  }
  piVar1 = (int *)*plVar6;
  *param_1 = (long)piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)param_1);
      lVar3 = *param_1;
      iVar2 = *(int *)(lVar3 + 8);
      if (iVar2 != *(int *)(lVar3 + 0xc)) {
        puVar4 = (undefined8 *)(*plVar6 + 0x10 + (long)*(int *)(*plVar6 + 8) * 8);
        puVar5 = (undefined8 *)(lVar3 + 0x10 + (long)iVar2 * 8);
        lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar1 = (int *)*puVar4;
          *puVar5 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

