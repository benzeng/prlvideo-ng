
void FUN_100d3d5f0(undefined8 *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  if (param_1[2] != 0) {
    pvVar1 = (void *)FUN_100d38810();
    param_1[2] = 0;
    FUN_100d3e130(param_1,pvVar1);
    if (pvVar1 != (void *)0x0) {
      FUN_100d38800(pvVar1);
      operator_delete(pvVar1);
    }
  }
  pQVar2 = (QArrayData *)param_1[3];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100d3d666;
      pQVar2 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d3d666:
  pQVar2 = (QArrayData *)param_1[1];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100d3d696;
      pQVar2 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d3d696:
  pQVar2 = (QArrayData *)*param_1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

