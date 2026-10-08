
void FUN_10057f050(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_10221c6f0;
  param_1[-4] = &PTR_FUN_10221c8e0;
  *param_1 = &PTR_FUN_10221c930;
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  return;
}

