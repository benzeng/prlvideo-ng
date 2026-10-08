
void FUN_1007e6920(QDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10222f440;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222f618;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  }
  QDialog::~QDialog(param_1);
  return;
}

