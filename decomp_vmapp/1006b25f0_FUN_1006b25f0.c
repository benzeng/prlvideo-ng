
void FUN_1006b25f0(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1006b2629;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006b2629:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1006b25f0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1006b25f0();
  }
  return;
}

