
void FUN_10053c0e0(undefined8 *param_1)

{
  Data *pDVar1;
  
  pDVar1 = (Data *)*param_1;
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) {
        return;
      }
      pDVar1 = (Data *)*param_1;
    }
    QListData::dispose(pDVar1);
  }
  return;
}

