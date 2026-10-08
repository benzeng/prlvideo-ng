
void FUN_1002e5740(long param_1)

{
  QArrayData *pQVar1;
  
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0x18));
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002e5782;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002e5782:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1002e5740();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1002e5740();
  }
  return;
}

