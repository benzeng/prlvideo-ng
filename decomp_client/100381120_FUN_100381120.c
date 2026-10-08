
void FUN_100381120(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10220edf0;
  *param_1 = &PTR_FUN_10220efe0;
  param_1[4] = &PTR_FUN_10220f030;
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -2));
  return;
}

