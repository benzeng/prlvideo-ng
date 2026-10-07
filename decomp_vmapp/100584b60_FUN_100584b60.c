
void FUN_100584b60(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  QArrayData *pQVar8;
  
  *param_1 = &PTR_FUN_100bc65a0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  FUN_100584e90();
  FUN_100598fd0(param_1 + 4,param_1[5]);
  param_1[6] = 0;
  param_1[4] = param_1 + 5;
  param_1[5] = 0;
  param_1[0xe] = 0;
  FUN_100598e70(param_1 + 0x22,param_1[0x23]);
  FUN_100598e70(param_1 + 0x1f,param_1[0x20]);
  if (param_1[0x1e] != 0) {
    lVar1 = param_1[0x1c];
    plVar2 = (long *)param_1[0x1d];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[0x1e] = 0;
    while (plVar2 != param_1 + 0x1c) {
      plVar4 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x12));
  pQVar8 = (QArrayData *)param_1[0x10];
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      UNLOCK();
      if (*(int *)pQVar8 != 0) goto LAB_100584c77;
      pQVar8 = (QArrayData *)param_1[0x10];
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100584c77:
  plVar2 = (long *)param_1[0xd];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    lVar1 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_100598ee0(param_1 + 7);
  puVar7 = (undefined8 *)param_1[8];
  puVar5 = (undefined8 *)param_1[9];
  if (puVar7 != puVar5) {
    do {
      operator_delete((void *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar7);
    lVar1 = param_1[9];
    if (lVar1 != param_1[8]) {
      param_1[9] = (~((lVar1 + -8) - param_1[8]) & 0xfffffffffffffff8U) + lVar1;
    }
  }
  pvVar6 = (void *)param_1[7];
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  FUN_100598fd0(param_1 + 4,param_1[5]);
  return;
}

