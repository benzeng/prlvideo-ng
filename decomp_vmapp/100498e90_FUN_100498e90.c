
void FUN_100498e90(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100498ec9;
      pQVar1 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100498ec9:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100498e90();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100498e90();
  }
  return;
}

