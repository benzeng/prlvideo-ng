
void FUN_10031c020(long param_1,undefined1 param_2)

{
  long lVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 uVar5;
  QMapNodeBase *pQVar6;
  
  FUN_100334ca0(*(undefined8 *)(param_1 + 0xd0),param_2);
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
    pQVar6 = *(QMapNodeBase **)(pQVar2 + 0x20);
    while (pQVar6 != pQVar2 + 8) {
      if ((((*(long *)(pQVar6 + 0x20) != 0) && (*(int *)(*(long *)(pQVar6 + 0x20) + 4) != 0)) &&
          (lVar1 = *(long *)(pQVar6 + 0x28), lVar1 != 0)) &&
         (lVar4 = FUN_100325f60(lVar1), lVar4 != 0)) {
        uVar5 = FUN_100325f60(lVar1);
        FUN_1003439d0(uVar5,param_2);
      }
      pQVar6 = (QMapNodeBase *)QMapNodeBase::nextNode();
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

