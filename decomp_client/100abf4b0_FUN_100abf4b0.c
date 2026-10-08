
void FUN_100abf4b0(long param_1)

{
  QMapNodeBase *pQVar1;
  
  pQVar1 = *(QMapNodeBase **)(param_1 + 8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = *(QMapNodeBase **)(param_1 + 8);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar1,(int)*(long *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return;
}

