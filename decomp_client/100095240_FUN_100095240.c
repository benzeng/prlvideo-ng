
void FUN_100095240(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_10226c868;
  pQVar1 = (QArrayData *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100095288;
      pQVar1 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100095288:
  operator_delete(param_1);
  return;
}

