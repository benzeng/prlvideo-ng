
void FUN_10057efe0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10221c6f0;
  *param_1 = &PTR_FUN_10221c8e0;
  param_1[4] = &PTR_FUN_10221c930;
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -2));
  return;
}

