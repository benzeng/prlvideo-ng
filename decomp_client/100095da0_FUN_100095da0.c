
void FUN_100095da0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_1021f8000;
  *param_1 = &PTR_FUN_1021f81d8;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  QDialog::~QDialog((QDialog *)(param_1 + -2));
  operator_delete((QDialog *)(param_1 + -2));
  return;
}

