
void FUN_1004459f0(CBaseDialog *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102212930;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102212b20;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102212b70;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x80) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x80));
    }
  }
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

