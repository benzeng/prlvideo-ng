
void FUN_1000f5960(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  QArrayData *pQVar5;
  
  *param_1 = &PTR_FUN_10110cda0;
  plVar2 = (long *)param_1[2];
  if (plVar2 == (long *)0x0) goto LAB_1000f5a0c;
  pQVar5 = (QArrayData *)plVar2[2];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1000f59b4;
      pQVar5 = (QArrayData *)plVar2[2];
    }
    QArrayData::deallocate(pQVar5,1,8);
  }
LAB_1000f59b4:
  pQVar5 = (QArrayData *)plVar2[1];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1000f59e4;
      pQVar5 = (QArrayData *)plVar2[1];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1000f59e4:
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  operator_delete(plVar2);
LAB_1000f5a0c:
  operator_delete(param_1);
  return;
}

