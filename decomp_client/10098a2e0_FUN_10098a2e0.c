
void FUN_10098a2e0(undefined8 *param_1)

{
  Data *pDVar1;
  
  param_1[-1] = &PTR_FUN_10227dc58;
  *param_1 = &PTR_FUN_10227dcb0;
  pDVar1 = (Data *)param_1[1];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10098a32d;
      pDVar1 = (Data *)param_1[1];
    }
    QListData::dispose(pDVar1);
  }
LAB_10098a32d:
  operator_delete(param_1 + -1);
  return;
}

