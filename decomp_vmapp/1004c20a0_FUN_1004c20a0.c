
void FUN_1004c20a0(undefined8 *param_1)

{
  long *plVar1;
  void **ppvVar2;
  int iVar3;
  void *pvVar4;
  QMapNodeBase *pQVar5;
  ulong *puVar6;
  uint *puVar7;
  QMapNodeBase *pQVar8;
  QMapNodeBase *pQVar9;
  uint uVar10;
  Data *pDVar11;
  long lVar12;
  Data *pDVar13;
  
  *param_1 = &PTR_FUN_100bc2e90;
  QMutex::lock();
  plVar1 = param_1 + 7;
  pQVar5 = (QMapNodeBase *)param_1[7];
  if (*(int *)pQVar5 == 0) {
    pQVar5 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*plVar1 + 0x10) != 0) {
      puVar6 = (ulong *)FUN_1004c34e0(*(long *)(*plVar1 + 0x10),pQVar5);
      *(ulong **)(pQVar5 + 0x10) = puVar6;
      *puVar6 = *puVar6 & 3 | (ulong)(pQVar5 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar5 != -1) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    UNLOCK();
    pQVar5 = (QMapNodeBase *)*plVar1;
  }
  FUN_1004c3240(plVar1);
  ppvVar2 = (void **)(param_1 + 5);
  puVar7 = (uint *)param_1[5];
  while (puVar7[3] != puVar7[2]) {
    uVar10 = *puVar7;
    if (1 < uVar10) {
      FUN_1004c35a0(ppvVar2,puVar7[1]);
      puVar7 = *ppvVar2;
      uVar10 = *puVar7;
    }
    pvVar4 = *(void **)(*(long *)(puVar7 + (long)(int)puVar7[2] * 2 + 4) + 8);
    iVar3 = *(int *)(*(long *)(puVar7 + (long)(int)puVar7[2] * 2 + 4) + 0x10);
    if (uVar10 < 2) {
      puVar7 = puVar7 + (long)(int)puVar7[2] * 2 + 4;
    }
    else {
      FUN_1004c35a0(ppvVar2,puVar7[1]);
      puVar7 = *ppvVar2;
      if (1 < *puVar7) {
        FUN_1004c35a0(ppvVar2,puVar7[1]);
        puVar7 = *ppvVar2;
      }
      puVar7 = puVar7 + (long)(int)puVar7[2] * 2 + 4;
    }
    if (*(void **)puVar7 != (void *)0x0) {
      operator_delete(*(void **)puVar7);
    }
    QListData::erase(ppvVar2);
    if ((pvVar4 == (void *)0x0) || (iVar3 == 0)) {
      puVar7 = *ppvVar2;
    }
    else {
      operator_delete__(pvVar4);
      puVar7 = *ppvVar2;
    }
  }
  QMutex::unlock();
  pQVar8 = pQVar5;
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 == 0) {
      pQVar8 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar5 + 0x10) != 0) {
        puVar6 = (ulong *)FUN_1004c34e0(*(long *)(pQVar5 + 0x10),pQVar8);
        *(ulong **)(pQVar8 + 0x10) = puVar6;
        *puVar6 = *puVar6 & 3 | (ulong)(pQVar8 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      UNLOCK();
    }
  }
  if (*(long *)(pQVar8 + 0x10) != 0) {
    pQVar9 = *(QMapNodeBase **)(pQVar8 + 0x20);
    while (pQVar9 != pQVar8 + 8) {
      FUN_1004c07d0(param_1,*(undefined8 *)(pQVar9 + 0x20),0xf000001c);
      pQVar9 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      UNLOCK();
      if (*(int *)pQVar8 != 0) goto LAB_1004c233c;
    }
    if (*(long *)(pQVar8 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar8,(int)*(long *)(pQVar8 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar8);
  }
LAB_1004c233c:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1004c2373;
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar5,(int)*(long *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
LAB_1004c2373:
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  pQVar5 = (QMapNodeBase *)*plVar1;
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1004c23bc;
      pQVar5 = (QMapNodeBase *)*plVar1;
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar5,(int)*(long *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
LAB_1004c23bc:
  pDVar13 = *ppvVar2;
  if (*(int *)pDVar13 != -1) {
    if (*(int *)pDVar13 != 0) {
      LOCK();
      *(int *)pDVar13 = *(int *)pDVar13 + -1;
      UNLOCK();
      if (*(int *)pDVar13 != 0) goto LAB_1004c241f;
      pDVar13 = *ppvVar2;
    }
    iVar3 = *(int *)(pDVar13 + 0xc);
    if (iVar3 != *(int *)(pDVar13 + 8)) {
      lVar12 = (long)*(int *)(pDVar13 + 8) * 8 + (long)iVar3 * -8;
      pDVar11 = pDVar13 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(pDVar13);
  }
LAB_1004c241f:
  FUN_1004c0680(param_1);
  return;
}

