
void FUN_10042ed40(CBaseDialog *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102211510;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102211700;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102211750;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x68));
    }
  }
  CBaseDialog::~CBaseDialog(param_1);
  operator_delete(param_1);
  return;
}

