
void FUN_10031a180(long param_1)

{
  long lVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  QMapNodeBase *pQVar4;
  
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x48);
  if (*(int *)pQVar2 == 0) {
    pQVar2 = (QMapNodeBase *)QMapDataBase::createData();
    lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    if (lVar1 != 0) {
      puVar3 = (ulong *)FUN_1000340b0(lVar1,pQVar2);
      *(ulong **)(pQVar2 + 0x10) = puVar3;
      *puVar3 = *puVar3 & 3 | (ulong)(pQVar2 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar2 != -1) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    pQVar2 = *(QMapNodeBase **)(param_1 + 0x48);
  }
  if (*(long *)(pQVar2 + 0x10) != 0) {
    pQVar4 = *(QMapNodeBase **)(pQVar2 + 0x20);
    while (pQVar4 != pQVar2 + 8) {
      if (((*(long *)(pQVar4 + 0x20) != 0) && (*(int *)(*(long *)(pQVar4 + 0x20) + 4) != 0)) &&
         (*(long *)(pQVar4 + 0x28) != 0)) {
        FUN_100327450();
      }
      pQVar4 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return;
}

