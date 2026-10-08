
void FUN_100714240(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100714282;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100714282:
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007142b2;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007142b2:
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x48));
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x40));
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x30));
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x28));
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100714240();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100714240();
  }
  return;
}

