
void FUN_1005a6da0(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221d9d0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221dbc0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221dc10;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  CBaseDialog::~CBaseDialog(param_1);
  operator_delete(param_1);
  return;
}

