
int FUN_1003195d0(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  QMapNodeBase *pQVar3;
  ulong *puVar4;
  QMapNodeBase *pQVar5;
  long lVar6;
  int iVar7;
  
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x48);
  if (*(int *)pQVar3 == 0) {
    pQVar3 = (QMapNodeBase *)QMapDataBase::createData();
    lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    if (lVar6 != 0) {
      puVar4 = (ulong *)FUN_1000340b0(lVar6,pQVar3);
      *(ulong **)(pQVar3 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | (ulong)(pQVar3 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar3 != -1) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
    pQVar3 = *(QMapNodeBase **)(param_1 + 0x48);
  }
  iVar7 = 0;
  if (*(long *)(pQVar3 + 0x10) != 0) {
    iVar7 = 0;
    pQVar5 = *(QMapNodeBase **)(pQVar3 + 0x20);
    while (pQVar5 != pQVar3 + 8) {
      lVar6 = 0;
      if ((*(long *)(pQVar5 + 0x20) != 0) &&
         (lVar6 = 0, *(int *)(*(long *)(pQVar5 + 0x20) + 4) != 0)) {
        lVar6 = *(long *)(pQVar5 + 0x28);
      }
      bVar1 = true;
      while (bVar1) {
        bVar1 = false;
        if (lVar6 != 0) {
          iVar2 = FUN_100325aa0(lVar6);
          iVar7 = iVar7 + (uint)(iVar2 == param_2);
          bVar1 = false;
        }
      }
      pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return iVar7;
      }
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
  return iVar7;
}

