
void FUN_100641330(long param_1)

{
  QArrayData *pQVar1;
  
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0x18));
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100641372;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100641372:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100641330();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100641330();
  }
  return;
}

