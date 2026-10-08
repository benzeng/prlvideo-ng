
void FUN_1006f63c0(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1022264e0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022266d0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102226720;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

