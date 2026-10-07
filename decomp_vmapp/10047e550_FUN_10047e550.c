
void FUN_10047e550(long *param_1)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  
  FUN_10047e6d0();
  piVar3 = (int *)param_1[6];
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) goto LAB_10047e58c;
      piVar3 = (int *)param_1[6];
    }
    FUN_100069b10(param_1 + 6,piVar3);
  }
LAB_10047e58c:
  pDVar4 = (Data *)param_1[3];
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_10047e5b2;
      pDVar4 = (Data *)param_1[3];
    }
    QListData::dispose(pDVar4);
  }
LAB_10047e5b2:
  pQVar5 = (QArrayData *)param_1[2];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_10047e5e2;
      pQVar5 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10047e5e2:
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}

