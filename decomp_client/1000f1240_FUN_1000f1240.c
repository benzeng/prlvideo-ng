
void FUN_1000f1240(int param_1,uint param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_3 == (long *)0x0) {
    QtPrivate::ResultStoreBase::addResult(param_1,(void *)(ulong)param_2);
    return;
  }
  plVar3 = operator_new(8);
  piVar2 = (int *)*param_3;
  *plVar3 = (long)piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)plVar3);
      lVar4 = *plVar3;
      iVar1 = *(int *)(lVar4 + 8);
      if (iVar1 != *(int *)(lVar4 + 0xc)) {
        puVar5 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
        puVar6 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
        lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *puVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  QtPrivate::ResultStoreBase::addResult(param_1,(void *)(ulong)param_2);
  return;
}

