
void FUN_1000be7b0(undefined8 *param_1)

{
  int *piVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  
  pDVar2 = (Data *)param_1[0xb];
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1000be7e4;
      pDVar2 = (Data *)param_1[0xb];
    }
    QListData::dispose(pDVar2);
  }
LAB_1000be7e4:
  pQVar3 = (QArrayData *)param_1[8];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000be814;
      pQVar3 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000be814:
  piVar1 = (int *)param_1[7];
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1000be83d;
      piVar1 = (int *)param_1[7];
    }
    FUN_1000bea50(param_1 + 7,piVar1);
  }
LAB_1000be83d:
  pQVar3 = (QArrayData *)param_1[3];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000be86d;
      pQVar3 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar3,1,8);
  }
LAB_1000be86d:
  pQVar3 = (QArrayData *)param_1[2];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000be89d;
      pQVar3 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000be89d:
  pQVar3 = (QArrayData *)param_1[1];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000be8cd;
      pQVar3 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000be8cd:
  pQVar3 = (QArrayData *)*param_1;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

