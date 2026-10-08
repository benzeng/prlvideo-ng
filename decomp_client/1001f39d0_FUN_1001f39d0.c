
void FUN_1001f39d0(long param_1)

{
  int iVar1;
  int *piVar2;
  QMapNodeBase *pQVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  Data *pDVar7;
  
  pQVar3 = *(QMapNodeBase **)(param_1 + 0xa8);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1001f3a2f;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0xa8);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1001f3f70();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1001f3a2f:
  pQVar5 = *(QArrayData **)(param_1 + 0xa0);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1001f3a65;
      pQVar5 = *(QArrayData **)(param_1 + 0xa0);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1001f3a65:
  pQVar5 = *(QArrayData **)(param_1 + 0x98);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1001f3a9b;
      pQVar5 = *(QArrayData **)(param_1 + 0x98);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1001f3a9b:
  QVariant::~QVariant((QVariant *)(param_1 + 0x80));
  piVar2 = *(int **)(param_1 + 0x60);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x60));
    }
  }
  QVariant::~QVariant((QVariant *)(param_1 + 0x48));
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  pDVar7 = *(Data **)(param_1 + 0x20);
  if (*(int *)pDVar7 != -1) {
    if (*(int *)pDVar7 != 0) {
      LOCK();
      *(int *)pDVar7 = *(int *)pDVar7 + -1;
      UNLOCK();
      if (*(int *)pDVar7 != 0) goto LAB_1001f3b81;
      pDVar7 = *(Data **)(param_1 + 0x20);
    }
    iVar1 = *(int *)(pDVar7 + 0xc);
    if (iVar1 != *(int *)(pDVar7 + 8)) {
      lVar6 = (long)*(int *)(pDVar7 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = pDVar7 + (long)iVar1 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1001f3b60:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          UNLOCK();
          if (*(int *)pQVar5 == 0) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1001f3b60;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_1001f3b81:
  pDVar7 = *(Data **)(param_1 + 0x18);
  if (*(int *)pDVar7 != -1) {
    if (*(int *)pDVar7 != 0) {
      LOCK();
      *(int *)pDVar7 = *(int *)pDVar7 + -1;
      UNLOCK();
      if (*(int *)pDVar7 != 0) goto LAB_1001f3c11;
      pDVar7 = *(Data **)(param_1 + 0x18);
    }
    iVar1 = *(int *)(pDVar7 + 0xc);
    if (iVar1 != *(int *)(pDVar7 + 8)) {
      lVar6 = (long)*(int *)(pDVar7 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = pDVar7 + (long)iVar1 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1001f3bf0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          UNLOCK();
          if (*(int *)pQVar5 == 0) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1001f3bf0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_1001f3c11:
  pQVar5 = *(QArrayData **)(param_1 + 8);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) {
        return;
      }
      pQVar5 = *(QArrayData **)(param_1 + 8);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
  return;
}

