
void FUN_10043e8d0(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_102212370;
  param_1[-4] = &PTR_FUN_102212560;
  *param_1 = &PTR_FUN_1022125b0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 8));
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  return;
}

