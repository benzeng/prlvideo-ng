
void FUN_100144530(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_1021fc268;
  *param_1 = &PTR_FUN_1021fc458;
  param_1[4] = &PTR_FUN_1021fc4a8;
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete((void *)param_1[10]);
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -2));
  return;
}

