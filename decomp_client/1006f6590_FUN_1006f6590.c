
void FUN_1006f6590(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_1022264e0;
  param_1[-4] = &PTR_FUN_1022266d0;
  *param_1 = &PTR_FUN_102226720;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  operator_delete((CBaseDialog *)(param_1 + -6));
  return;
}

