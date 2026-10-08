
void FUN_1005a6e10(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10221d9d0;
  *param_1 = &PTR_FUN_10221dbc0;
  param_1[4] = &PTR_FUN_10221dc10;
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete((void *)param_1[10]);
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -2));
  operator_delete((CBaseDialog *)(param_1 + -2));
  return;
}

