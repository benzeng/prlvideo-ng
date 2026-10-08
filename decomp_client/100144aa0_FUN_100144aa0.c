
void FUN_100144aa0(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_1021fc518;
  param_1[-4] = &PTR_FUN_1021fc708;
  *param_1 = &PTR_FUN_1021fc758;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  return;
}

