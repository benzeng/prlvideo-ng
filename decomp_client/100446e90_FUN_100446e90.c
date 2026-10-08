
void FUN_100446e90(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102212c10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102212e00;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102212e50;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

