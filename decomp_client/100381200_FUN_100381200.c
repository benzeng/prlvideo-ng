
void FUN_100381200(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10220edf0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220efe0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10220f030;
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
  }
  CBaseDialog::~CBaseDialog(param_1);
  operator_delete(param_1);
  return;
}

