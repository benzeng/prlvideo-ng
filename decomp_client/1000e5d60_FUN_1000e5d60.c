
void FUN_1000e5d60(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  plVar2 = (long *)param_1[8];
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
  FUN_100d72f50(param_1 + 6);
  pQVar4 = (QArrayData *)param_1[5];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000e5dc8;
      pQVar4 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000e5dc8:
  pQVar4 = (QArrayData *)param_1[4];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000e5df8;
      pQVar4 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000e5df8:
  pQVar4 = (QArrayData *)param_1[3];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000e5e28;
      pQVar4 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000e5e28:
  pQVar4 = (QArrayData *)param_1[1];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000e5e58;
      pQVar4 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000e5e58:
  pQVar4 = (QArrayData *)*param_1;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
      pQVar4 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

