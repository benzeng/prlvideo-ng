
void FUN_100381190(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_10220edf0;
  param_1[-4] = &PTR_FUN_10220efe0;
  *param_1 = &PTR_FUN_10220f030;
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  return;
}

