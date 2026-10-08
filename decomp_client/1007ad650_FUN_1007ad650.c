
void FUN_1007ad650(CBaseDialog *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10222d040;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222d248;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222d298;
  (**(code **)(**(long **)(param_1 + 0x110) + 0x88))();
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  piVar1 = *(int **)(param_1 + 0x128);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x128) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x128));
    }
  }
  piVar1 = *(int **)(param_1 + 0x118);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x118) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x118));
    }
  }
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

