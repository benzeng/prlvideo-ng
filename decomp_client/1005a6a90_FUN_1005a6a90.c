
void FUN_1005a6a90(CBaseDialog *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0);
  *(undefined ***)param_1 = &PTR_FUN_10221d9d0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221dbc0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221dc10;
  pvVar1 = operator_new(0x40);
  *(void **)(param_1 + 0x60) = pvVar1;
  FUN_1005a6b10(param_1);
  FUN_1005a6be0(param_1);
  return;
}

