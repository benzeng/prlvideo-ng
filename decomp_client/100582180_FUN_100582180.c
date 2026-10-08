
void FUN_100582180(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221c9d0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221cbc0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221cc10;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  FUN_1000fe670(param_1 + 0x68);
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

