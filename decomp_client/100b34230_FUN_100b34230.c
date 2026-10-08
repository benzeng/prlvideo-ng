
void FUN_100b34230(long param_1)

{
  QArrayData *pQVar1;
  
  FUN_100b342c0();
  pQVar1 = *(QArrayData **)(param_1 + 8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = *(QArrayData **)(param_1 + 8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

