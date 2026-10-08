
void FUN_10019d190(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3)

{
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_1021fd740;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fd930;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fd980;
  FUN_10019dfc0(param_1 + 0x60,param_1);
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  FUN_10019d220(param_1);
  FUN_10019d330(param_1);
  FUN_10019d3e0(param_1);
  return;
}

