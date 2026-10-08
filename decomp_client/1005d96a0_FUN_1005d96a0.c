
void FUN_1005d96a0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = (QArrayData *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005d96de;
      pQVar1 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005d96de:
  pQVar1 = (QArrayData *)param_1[2];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005d970e;
      pQVar1 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005d970e:
  pQVar1 = (QArrayData *)param_1[1];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005d973e;
      pQVar1 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005d973e:
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

