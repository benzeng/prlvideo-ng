
void FUN_1008157f0(undefined8 *param_1)

{
  Data *pDVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_102203810;
  pDVar1 = (Data *)param_1[9];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10081582e;
      pDVar1 = (Data *)param_1[9];
    }
    QListData::dispose(pDVar1);
  }
LAB_10081582e:
  pQVar2 = (QArrayData *)param_1[8];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10081585e;
      pQVar2 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10081585e:
  FUN_100223e30(param_1);
  operator_delete(param_1);
  return;
}

