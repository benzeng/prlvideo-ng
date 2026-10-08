
void FUN_100990670(CAbstractWizardModel *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102233d00;
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
  QPalette::~QPalette((QPalette *)(param_1 + 0x30));
  pQVar2 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10099070f;
      pQVar2 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10099070f:
  CAbstractWizardModel::~CAbstractWizardModel(param_1);
  return;
}

