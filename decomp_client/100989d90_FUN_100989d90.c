
void FUN_100989d90(undefined8 *param_1)

{
  Data *pDVar1;
  
  param_1[-1] = &PTR_FUN_10227db98;
  *param_1 = &PTR_FUN_10227dbf0;
  pDVar1 = (Data *)param_1[1];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100989ddd;
      pDVar1 = (Data *)param_1[1];
    }
    QListData::dispose(pDVar1);
  }
LAB_100989ddd:
  operator_delete(param_1 + -1);
  return;
}

