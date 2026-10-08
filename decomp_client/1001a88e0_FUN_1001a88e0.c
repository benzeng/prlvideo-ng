
void FUN_1001a88e0(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_1021fe690;
  param_1[-4] = &PTR_FUN_1021fe880;
  *param_1 = &PTR_FUN_1021fe8d0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  operator_delete((CBaseDialog *)(param_1 + -6));
  return;
}

