
void FUN_100137f10(long param_1)

{
  Data *pDVar1;
  
  pDVar1 = *(Data **)(param_1 + 0x20);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100137f3f;
      pDVar1 = *(Data **)(param_1 + 0x20);
    }
    QListData::dispose(pDVar1);
  }
LAB_100137f3f:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100137f10();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100137f10();
  }
  return;
}

