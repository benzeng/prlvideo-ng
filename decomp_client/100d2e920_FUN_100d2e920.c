
void FUN_100d2e920(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_10225b670;
  pQVar1 = (QArrayData *)param_1[8];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d2e968;
      pQVar1 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d2e968:
  FUN_100d2b080(param_1 + 5);
  FUN_100d2ced0(param_1);
  operator_delete(param_1);
  return;
}

