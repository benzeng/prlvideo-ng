
void FUN_1002e54e0(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002e5519;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002e5519:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1002e54e0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1002e54e0();
  }
  return;
}

