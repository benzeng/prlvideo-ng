
void FUN_100602310(CAbstractWizardModel *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102220c20;
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

