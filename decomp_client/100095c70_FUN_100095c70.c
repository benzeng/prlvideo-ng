
void FUN_100095c70(QDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021f8000;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f81d8;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  QDialog::~QDialog(param_1);
  return;
}

