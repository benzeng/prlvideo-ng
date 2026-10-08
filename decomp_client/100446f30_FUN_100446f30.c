
void FUN_100446f30(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_102212c10;
  param_1[-4] = &PTR_FUN_102212e00;
  *param_1 = &PTR_FUN_102212e50;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  return;
}

