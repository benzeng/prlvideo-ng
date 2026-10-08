
void FUN_10057ee50(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_10221c6f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221c8e0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221c930;
  pvVar1 = operator_new(0x38);
  FUN_10057a8c0(pvVar1,param_1,param_2,param_1);
  *(void **)(param_1 + 0x60) = pvVar1;
  FUN_10057ae90(pvVar1);
  return;
}

