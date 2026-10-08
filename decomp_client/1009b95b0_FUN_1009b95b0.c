
void FUN_1009b95b0(QDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102235e90;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102236068;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  QDialog::~QDialog(param_1);
  return;
}

