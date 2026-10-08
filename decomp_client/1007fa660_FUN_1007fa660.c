
void FUN_1007fa660(QComboBox *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f98f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f9ab0;
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
  }
  QComboBox::~QComboBox(param_1);
  operator_delete(param_1);
  return;
}

