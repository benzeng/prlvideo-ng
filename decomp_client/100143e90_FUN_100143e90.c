
void FUN_100143e90(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021fbfc0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fc1b0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fc200;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

