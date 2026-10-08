
void FUN_1000e6210(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = (QArrayData *)param_1[10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000e624e;
      pQVar1 = (QArrayData *)param_1[10];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000e624e:
  FUN_100ab75f0(param_1 + 6);
  pQVar1 = (QArrayData *)param_1[5];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000e6287;
      pQVar1 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000e6287:
  pQVar1 = (QArrayData *)param_1[4];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000e62b7;
      pQVar1 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000e62b7:
  pQVar1 = (QArrayData *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000e62e7;
      pQVar1 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000e62e7:
  pQVar1 = (QArrayData *)param_1[2];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000e6317;
      pQVar1 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000e6317:
  pQVar1 = (QArrayData *)param_1[1];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000e6347;
      pQVar1 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000e6347:
  pQVar1 = (QArrayData *)*param_1;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

