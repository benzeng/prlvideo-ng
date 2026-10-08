
void FUN_1001a6a10(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_1021fe3b0;
  param_1[-4] = &PTR_FUN_1021fe5a0;
  *param_1 = &PTR_FUN_1021fe5f0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  operator_delete((CBaseDialog *)(param_1 + -6));
  return;
}

