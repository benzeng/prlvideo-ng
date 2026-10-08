
void FUN_1007e75c0(CBaseDialog *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_10222f6c0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222f8b0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222f900;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x80);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1007e7635;
      pQVar2 = *(QArrayData **)(param_1 + 0x80);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1007e7635:
  piVar1 = *(int **)(param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x70));
    }
  }
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

