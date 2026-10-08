
void FUN_100813930(QObject *param_1)

{
  int iVar1;
  int *piVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_1022023a0;
  pDVar6 = *(Data **)(param_1 + 0x38);
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_1008139af;
      pDVar6 = *(Data **)(param_1 + 0x38);
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1008139af:
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  pQVar4 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100813a04;
      pQVar4 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100813a04:
  pQVar4 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100813a34;
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100813a34:
  pQVar4 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100813a64;
      pQVar4 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100813a64:
  QObject::~QObject(param_1);
  return;
}

