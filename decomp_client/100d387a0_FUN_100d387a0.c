
void FUN_100d387a0(long param_1)

{
  Data *pDVar1;
  
  pDVar1 = *(Data **)(param_1 + 0x50);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100d387d4;
      pDVar1 = *(Data **)(param_1 + 0x50);
    }
    QListData::dispose(pDVar1);
  }
LAB_100d387d4:
  FUN_100d38480(param_1);
  return;
}

