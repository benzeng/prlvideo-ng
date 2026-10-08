
void FUN_1009c9c30(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1009c9c69;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1009c9c69:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1009c9c30();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1009c9c30();
  }
  return;
}

