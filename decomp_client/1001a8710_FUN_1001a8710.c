
void FUN_1001a8710(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021fe690;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fe880;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fe8d0;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

