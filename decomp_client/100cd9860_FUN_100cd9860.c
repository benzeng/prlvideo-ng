
void FUN_100cd9860(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  QMapNodeBase *pQVar5;
  
  *param_1 = (long)&PTR_FUN_10225a2b8;
  (*(code *)PTR_FUN_10225a350)();
  (**(code **)(*param_1 + 0x78))(param_1);
  plVar3 = (long *)param_1[0x87];
  while (plVar3 != param_1 + 0x86) {
    (**(code **)(*param_1 + 0xf8))(param_1,plVar3[2]);
    (**(code **)(*(long *)plVar3[2] + 0x60))();
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *(long *)plVar3[1] = lVar1;
    param_1[0x88] = param_1[0x88] + -1;
    operator_delete(plVar3);
    plVar3 = plVar2;
  }
  pQVar5 = (QMapNodeBase *)param_1[0xa0];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_100cd994d;
      pQVar5 = (QMapNodeBase *)param_1[0xa0];
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      FUN_100cdeb40();
      QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
LAB_100cd994d:
  FUN_100cd81b0(param_1 + 0x93);
  if (param_1[0x88] != 0) {
    lVar1 = param_1[0x86];
    plVar3 = (long *)param_1[0x87];
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar4;
    param_1[0x88] = 0;
    while (plVar3 != param_1 + 0x86) {
      plVar2 = (long *)plVar3[1];
      operator_delete(plVar3);
      plVar3 = plVar2;
    }
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x7e));
  FUN_100cd37c0(param_1);
  return;
}

