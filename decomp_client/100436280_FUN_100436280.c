
void FUN_100436280(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_102211db0;
  param_1[-4] = &PTR_FUN_102211fa0;
  *param_1 = &PTR_FUN_102211ff0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 8));
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  return;
}

