
void FUN_1000b5720(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x60);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000b575e;
      pQVar1 = *(QArrayData **)(param_1 + 0x60);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000b575e:
  pQVar1 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000b578e;
      pQVar1 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000b578e:
  pQVar1 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

