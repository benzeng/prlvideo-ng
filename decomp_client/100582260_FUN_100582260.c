
void FUN_100582260(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_10221c9d0;
  param_1[-4] = &PTR_FUN_10221cbc0;
  *param_1 = &PTR_FUN_10221cc10;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  FUN_1000fe670(param_1 + 7);
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  return;
}

