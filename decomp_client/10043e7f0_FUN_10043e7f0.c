
void FUN_10043e7f0(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102212370;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102212560;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1022125b0;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 0x70));
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

