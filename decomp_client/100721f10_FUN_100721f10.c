
void FUN_100721f10(long param_1)

{
  Data *pDVar1;
  
  pDVar1 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) {
        return;
      }
      pDVar1 = *(Data **)(param_1 + 0x10);
    }
    QListData::dispose(pDVar1);
  }
  return;
}

