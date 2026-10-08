
void FUN_10013c770(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10013c7a9;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10013c7a9:
  FUN_100039a80(param_1 + 0x20);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10013c770();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10013c770();
  }
  return;
}

