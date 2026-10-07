
void FUN_1004fa040(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  *param_1 = &PTR_FUN_100bc3c50;
  pQVar4 = (QArrayData *)param_1[4];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1004fa083;
      pQVar4 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1004fa083:
  pQVar4 = (QArrayData *)param_1[3];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1004fa0b3;
      pQVar4 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1004fa0b3:
  plVar2 = (long *)param_1[2];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  operator_delete(param_1);
  return;
}

