
void FUN_100497990(long param_1,int param_2)

{
  QMapNodeBase *pQVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  QMapNodeBase *pQVar4;
  
  if (param_2 != 3) {
    return;
  }
  QMutex::lock();
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = PTR_shared_null_100ba20d8;
  QMutex::unlock();
  pQVar2 = pQVar1;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 == 0) {
      pQVar2 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar1 + 0x10) != 0) {
        puVar3 = (ulong *)FUN_100498f90(*(long *)(pQVar1 + 0x10),pQVar2);
        *(ulong **)(pQVar2 + 0x10) = puVar3;
        *puVar3 = *puVar3 & 3 | (ulong)(pQVar2 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
    }
  }
  if (*(long *)(pQVar2 + 0x10) != 0) {
    pQVar4 = *(QMapNodeBase **)(pQVar2 + 0x20);
    if (pQVar4 != pQVar2 + 8) {
      do {
        FUN_1004c07d0(param_1 + 0x40,*(undefined8 *)(pQVar4 + 0x20),0xf000001c);
        pQVar4 = (QMapNodeBase *)QMapNodeBase::nextNode();
      } while (pQVar4 != pQVar2 + 8);
    }
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100497ab7;
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100498e90();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100497ab7:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100498e90();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return;
}

