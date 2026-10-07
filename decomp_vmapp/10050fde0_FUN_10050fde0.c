
void FUN_10050fde0(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10050fe19;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10050fe19:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10050fde0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10050fde0();
  }
  return;
}

