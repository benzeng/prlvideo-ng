
long FUN_100319960(long param_1)

{
  char cVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  QMapNodeBase *pQVar4;
  long lVar5;
  
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x48);
  if (*(int *)pQVar2 == 0) {
    pQVar2 = (QMapNodeBase *)QMapDataBase::createData();
    lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    if (lVar5 != 0) {
      puVar3 = (ulong *)FUN_1000340b0(lVar5,pQVar2);
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
  lVar5 = 0;
  if (*(long *)(pQVar2 + 0x10) != 0) {
    pQVar4 = *(QMapNodeBase **)(pQVar2 + 0x20);
    while ((lVar5 = 0, pQVar4 != pQVar2 + 8 &&
           ((((*(long *)(pQVar4 + 0x20) == 0 || (*(int *)(*(long *)(pQVar4 + 0x20) + 4) == 0)) ||
             (lVar5 = *(long *)(pQVar4 + 0x28), lVar5 == 0)) ||
            (cVar1 = FUN_100325f80(lVar5), cVar1 == '\0'))))) {
      pQVar4 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return lVar5;
      }
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return lVar5;
}

