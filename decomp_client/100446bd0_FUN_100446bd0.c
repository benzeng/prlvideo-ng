
void FUN_100446bd0(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102212c10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102212e00;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102212e50;
  pvVar1 = operator_new(0xa0);
  *(void **)(param_1 + 0x60) = pvVar1;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  FUN_1004473b0(pvVar1,param_1);
  FUN_100446c60(param_1);
  return;
}

