
int FUN_100319470(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  QMapNodeBase *pQVar4;
  ulong *puVar5;
  QMapNodeBase *pQVar6;
  int iVar7;
  
  pQVar4 = *(QMapNodeBase **)(param_1 + 0x38);
  if (*(int *)pQVar4 == 0) {
    pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    if (lVar3 != 0) {
      puVar5 = (ulong *)FUN_100322740(lVar3,pQVar4);
      *(ulong **)(pQVar4 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(pQVar4 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar4 != -1) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
    pQVar4 = *(QMapNodeBase **)(param_1 + 0x38);
  }
  iVar7 = 0;
  if (*(long *)(pQVar4 + 0x10) != 0) {
    pQVar6 = *(QMapNodeBase **)(pQVar4 + 0x20);
    iVar7 = 0;
    while (pQVar6 != pQVar4 + 8) {
      iVar1 = *(int *)(pQVar6 + 0x1c);
      iVar2 = *(int *)(pQVar6 + 0x20);
      pQVar6 = (QMapNodeBase *)QMapNodeBase::nextNode();
      iVar7 = iVar7 + ((iVar1 == 0 || iVar2 == 0) ^ 1);
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return iVar7;
      }
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar4,(int)*(long *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
  return iVar7;
}

