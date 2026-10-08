
void FUN_1004299f0(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_4,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102211230;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102211420;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102211470;
  pvVar1 = operator_new(0x150);
  FUN_10042b470(pvVar1,param_1,param_2,param_3);
  *(void **)(param_1 + 0x60) = pvVar1;
  return;
}

