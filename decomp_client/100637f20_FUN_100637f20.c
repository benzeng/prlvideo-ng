
void FUN_100637f20(CBaseDialog *param_1,undefined8 param_2)

{
  CBaseDialog::CBaseDialog(param_1,param_2,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102222700;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022228f0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102222940;
  FUN_100637f80(param_1);
  return;
}

