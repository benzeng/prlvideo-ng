
void FUN_1004c2660(long param_1)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  QMapNodeBase *pQVar4;
  QMapNodeBase *pQVar5;
  
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x30) = 0;
  plVar1 = (long *)(param_1 + 0x38);
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x38);
  if (*(int *)pQVar2 == 0) {
    pQVar2 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*plVar1 + 0x10) != 0) {
      puVar3 = (ulong *)FUN_1004c34e0(*(long *)(*plVar1 + 0x10),pQVar2);
      *(ulong **)(pQVar2 + 0x10) = puVar3;
      *puVar3 = *puVar3 & 3 | (ulong)(pQVar2 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar2 != -1) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    pQVar2 = (QMapNodeBase *)*plVar1;
  }
  FUN_1004c3240(plVar1);
  QMutex::unlock();
  pQVar4 = pQVar2;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 == 0) {
      pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar2 + 0x10) != 0) {
        puVar3 = (ulong *)FUN_1004c34e0(*(long *)(pQVar2 + 0x10),pQVar4);
        *(ulong **)(pQVar4 + 0x10) = puVar3;
        *puVar3 = *puVar3 & 3 | (ulong)(pQVar4 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      UNLOCK();
    }
  }
  if (*(long *)(pQVar4 + 0x10) != 0) {
    pQVar5 = *(QMapNodeBase **)(pQVar4 + 0x20);
    while (pQVar5 != pQVar4 + 8) {
      FUN_1004c07d0(param_1,*(undefined8 *)(pQVar5 + 0x20),0xf000001c);
      pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1004c27c1;
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar4,(int)*(long *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_1004c27c1:
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
      QMapDataBase::freeTree(pQVar2,(int)*(long *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return;
}

