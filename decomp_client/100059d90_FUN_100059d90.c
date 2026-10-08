
void FUN_100059d90(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_1021ed400;
  if (param_1[8] != 0) {
    _PrlHandle_Free();
  }
  pQVar1 = (QArrayData *)param_1[7];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100059de6;
      pQVar1 = (QArrayData *)param_1[7];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100059de6:
  pQVar1 = (QArrayData *)param_1[6];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100059e16;
      pQVar1 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100059e16:
  pQVar1 = (QArrayData *)param_1[5];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100059e46;
      pQVar1 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100059e46:
  pQVar1 = (QArrayData *)param_1[4];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100059e76;
      pQVar1 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100059e76:
  pQVar1 = (QArrayData *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100059ea6;
      pQVar1 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100059ea6:
  pQVar1 = (QArrayData *)param_1[2];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100059ed6;
      pQVar1 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100059ed6:
  pQVar1 = (QArrayData *)param_1[1];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

