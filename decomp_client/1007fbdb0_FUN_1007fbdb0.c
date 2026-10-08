
void FUN_1007fbdb0(QLineEdit *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fb550;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fb700;
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
  QLineEdit::~QLineEdit(param_1);
  operator_delete(param_1);
  return;
}

