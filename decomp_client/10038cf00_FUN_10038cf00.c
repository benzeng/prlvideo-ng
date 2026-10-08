
void FUN_10038cf00(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10220f740;
  *param_1 = &PTR_FUN_10220f918;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x20))();
  }
  QDialog::~QDialog((QDialog *)(param_1 + -2));
  return;
}

