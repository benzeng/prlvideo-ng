
void FUN_100989fb0(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_10227dc58;
  param_1[1] = &PTR_FUN_10227dcb0;
  pDVar1 = (Data *)param_1[2];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100989ff9;
      pDVar1 = (Data *)param_1[2];
    }
    QListData::dispose(pDVar1);
  }
LAB_100989ff9:
  operator_delete(param_1);
  return;
}

