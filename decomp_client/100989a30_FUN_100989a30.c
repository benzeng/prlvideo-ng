
void FUN_100989a30(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_10227db98;
  param_1[1] = &PTR_FUN_10227dbf0;
  pDVar1 = (Data *)param_1[2];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) {
        return;
      }
      pDVar1 = (Data *)param_1[2];
    }
    QListData::dispose(pDVar1);
  }
  return;
}

