
void FUN_1004d81e0(long param_1)

{
  QMapNodeBase *pQVar1;
  char cVar2;
  QMapNodeBase *pQVar3;
  ulong *puVar4;
  QMapNodeBase *pQVar5;
  ulong uVar6;
  
  FUN_1004d2c00(*(long *)(param_1 + 0x50) + 0x48,param_1);
  uVar6 = param_1 + 0x38;
  if ((uVar6 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar6 = uVar6 | 1;
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_100ba20d8;
  if ((uVar6 & 1) != 0) {
    uVar6 = 0;
    QReadWriteLock::unlock();
  }
  pQVar3 = pQVar1;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 == 0) {
      pQVar3 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar1 + 0x10) != 0) {
        puVar4 = (ulong *)FUN_1004ebdb0(*(long *)(pQVar1 + 0x10),pQVar3);
        *(ulong **)(pQVar3 + 0x10) = puVar4;
        *puVar4 = *puVar4 & 3 | (ulong)(pQVar3 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
    }
  }
  if (*(long *)(pQVar3 + 0x10) != 0) {
    pQVar5 = *(QMapNodeBase **)(pQVar3 + 0x20);
    while (pQVar5 != pQVar3 + 8) {
      cVar2 = QFileInfo::isDir();
      if (cVar2 == '\0') {
        FUN_1004e0cc0(*(undefined8 *)(pQVar5 + 0x20));
      }
      pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1004d8323;
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1004ebe70();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1004d8323:
  if ((uVar6 & 1) != 0) {
    QReadWriteLock::unlock();
  }
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
      FUN_1004ebe70();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return;
}

