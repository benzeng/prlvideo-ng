
void FUN_10043dc70(CBaseDialog *param_1,CVmConfiguration *param_2,undefined8 param_3)

{
  void *pvVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102212370;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102212560;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1022125b0;
  pvVar1 = operator_new(0x88);
  *(void **)(param_1 + 0x60) = pvVar1;
  *(CVmConfiguration **)(param_1 + 0x68) = param_2;
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x70),param_2);
  FUN_10043dd20(param_1);
  FUN_10043e520(param_1);
  return;
}

