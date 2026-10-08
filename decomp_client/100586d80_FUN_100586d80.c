
void FUN_100586d80(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_4,0,0);
  *(undefined ***)param_1 = &PTR_FUN_10221ccb0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221cea0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221cef0;
  pvVar1 = operator_new(0x80);
  FUN_100583760(pvVar1,param_1,param_1);
  *(void **)(param_1 + 0x60) = pvVar1;
  FUN_100583d90(pvVar1,param_2,param_3);
  return;
}

