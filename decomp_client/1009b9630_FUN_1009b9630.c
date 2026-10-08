
void FUN_1009b9630(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102235e90;
  *param_1 = &PTR_FUN_102236068;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  QDialog::~QDialog((QDialog *)(param_1 + -2));
  return;
}

