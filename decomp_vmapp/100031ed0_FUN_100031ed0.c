
void FUN_100031ed0(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x60);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100031f0e;
      pQVar1 = *(QArrayData **)(param_1 + 0x60);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100031f0e:
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0x50));
  pQVar1 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100031f47;
      pQVar1 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_100031f47:
  pQVar1 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100031f77;
      pQVar1 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100031f77:
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100031fa7;
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100031fa7:
  pQVar1 = *(QArrayData **)(param_1 + 8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = *(QArrayData **)(param_1 + 8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

