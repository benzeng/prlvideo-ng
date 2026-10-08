
void FUN_100dae390(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_10225c058;
  pQVar1 = (QArrayData *)param_1[2];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100dae3d8;
      pQVar1 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100dae3d8:
  operator_delete(param_1);
  return;
}

