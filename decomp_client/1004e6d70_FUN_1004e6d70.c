
void FUN_1004e6d70(QObject *param_1)

{
  int iVar1;
  int *piVar2;
  Data *pDVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_10221a020;
  pDVar4 = *(Data **)(param_1 + 0x40);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_1004e6db8;
      pDVar4 = *(Data **)(param_1 + 0x40);
    }
    QListData::dispose(pDVar4);
  }
LAB_1004e6db8:
  FUN_1004e7080(param_1 + 0x38);
  pDVar4 = *(Data **)(param_1 + 0x28);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_1004e6e51;
      pDVar4 = *(Data **)(param_1 + 0x28);
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar6 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar5 == 0) {
LAB_1004e6e30:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          UNLOCK();
          if (*(int *)pQVar5 == 0) {
            pQVar5 = *(QArrayData **)pDVar3;
            goto LAB_1004e6e30;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1004e6e51:
  pQVar5 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1004e6e81;
      pQVar5 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1004e6e81:
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}

