
void FUN_10004df50(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10004df89;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10004df89:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10004df50();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10004df50();
  }
  return;
}

