
undefined8 FUN_1004a7250(long param_1)

{
  QMapNodeBase *pQVar1;
  long lVar2;
  QMapNodeBase *pQVar3;
  ulong *puVar4;
  QMapNodeBase *pQVar5;
  undefined4 *puVar6;
  
  QMutex::lock();
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = PTR_shared_null_100ba20d8;
  QMutex::unlock();
  pQVar3 = pQVar1;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 == 0) {
      pQVar3 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar1 + 0x10) != 0) {
        puVar4 = (ulong *)FUN_1004a8970(*(long *)(pQVar1 + 0x10),pQVar3);
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
    if (pQVar5 != pQVar3 + 8) {
      do {
        FUN_1004c07d0(param_1 + 0x10,*(undefined8 *)(*(long *)(pQVar5 + 0x20) + 0x10),0xf0000020);
        pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
      } while (pQVar5 != pQVar3 + 8);
    }
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1004a737b;
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1004a8480();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1004a737b:
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x50) = 0;
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    QMutex::unlock();
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = 0;
    QMutex::unlock();
    puVar6 = (undefined4 *)FUN_1002a6010(lVar2);
    *puVar6 = 0x20000;
    puVar6[1] = 6;
    puVar6[2] = 0;
    puVar6[3] = 0;
    FUN_1004c07d0(param_1 + 0x10,lVar2,0);
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return 0;
      }
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_1004a8480();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return 0;
}

