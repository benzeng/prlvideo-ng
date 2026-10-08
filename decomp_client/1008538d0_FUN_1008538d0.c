
bool FUN_1008538d0(long param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  int iVar5;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return false;
  }
  if (*(int *)(*(long *)(param_1 + 0x68) + 4) == 0) {
    return false;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    return false;
  }
  pQVar3 = *(QArrayData **)(lVar2 + 0x20);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  pQVar4 = *(QArrayData **)(lVar2 + 0x28);
  iVar5 = *(int *)pQVar4;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
    iVar5 = *(int *)pQVar4;
  }
  iVar1 = *(int *)(pQVar3 + 4);
  if (iVar5 != -1) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10085395c;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10085395c:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return iVar1 == 0;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return iVar1 == 0;
}

