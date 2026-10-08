
void FUN_1007c63d0(undefined8 *param_1)

{
  Data *pDVar1;
  
  FUN_1007c6450();
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

