
void FUN_10057ef00(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221c6f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221c8e0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221c930;
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
  }
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

