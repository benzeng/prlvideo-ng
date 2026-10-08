
void FUN_10043d1c0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102212090;
  *param_1 = &PTR_FUN_102212280;
  param_1[4] = &PTR_FUN_1022122d0;
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete((void *)param_1[10]);
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -2));
  return;
}

