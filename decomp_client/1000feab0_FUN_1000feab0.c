
void FUN_1000feab0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_10226d590;
  pQVar1 = (QArrayData *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000feaf8;
      pQVar1 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000feaf8:
  pQVar1 = (QArrayData *)param_1[2];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000feb28;
      pQVar1 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar1,4,8);
  }
LAB_1000feb28:
  operator_delete(param_1);
  return;
}

