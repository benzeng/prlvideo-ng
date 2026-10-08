
void FUN_1005a8a90(CAbstractWizardModel *param_1)

{
  int *piVar1;
  Data *pDVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_10221df60;
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x58));
    }
  }
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x48));
    }
  }
  pDVar2 = *(Data **)(param_1 + 0x38);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1005a8b1c;
      pDVar2 = *(Data **)(param_1 + 0x38);
    }
    QListData::dispose(pDVar2);
  }
LAB_1005a8b1c:
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  CAbstractWizardModel::~CAbstractWizardModel(param_1);
  return;
}

