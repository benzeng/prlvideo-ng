
void FUN_100022940(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100022979;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100022979:
  FUN_100022290(param_1 + 0x20);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100022940();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100022940();
  }
  return;
}

