
void FUN_10080cd10(CAbstractTask *param_1)

{
  int iVar1;
  int *piVar2;
  Data *pDVar3;
  long lVar4;
  Data *pDVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_102200030;
  pDVar5 = *(Data **)(param_1 + 0x40);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_10080cd96;
      pDVar5 = *(Data **)(param_1 + 0x40);
    }
    iVar1 = *(int *)(pDVar5 + 0xc);
    if (iVar1 != *(int *)(pDVar5 + 8)) {
      lVar4 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = pDVar5 + (long)iVar1 * 8 + 8;
      do {
        if (*(long **)pDVar3 != (long *)0x0) {
          (**(code **)(**(long **)pDVar3 + 0x88))();
        }
        pDVar3 = pDVar3 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_10080cd96:
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _PrlHandle_Free();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _PrlHandle_Free();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    _PrlHandle_Free();
  }
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

