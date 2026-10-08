
void FUN_100435650(CBaseDialog *param_1,CVmConfiguration *param_2,undefined8 param_3)

{
  void *pvVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102211db0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102211fa0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102211ff0;
  pvVar1 = operator_new(0xc0);
  *(void **)(param_1 + 0x60) = pvVar1;
  *(CVmConfiguration **)(param_1 + 0x68) = param_2;
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x70),param_2);
  *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
  FUN_100435710(param_1);
  FUN_100435b70(param_1);
  FUN_100435d20(param_1);
  return;
}

