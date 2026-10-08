
void FUN_1000beca0(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000becd9;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000becd9:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1000beca0();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1000beca0();
  }
  return;
}

