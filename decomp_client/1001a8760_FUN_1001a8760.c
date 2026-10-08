
void FUN_1001a8760(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_1021fe690;
  *param_1 = &PTR_FUN_1021fe880;
  param_1[4] = &PTR_FUN_1021fe8d0;
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete((void *)param_1[10]);
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -2));
  return;
}

