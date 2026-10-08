
void FUN_1003e4da0(CMappingModel *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  CMappingModel::CMappingModel(param_1,1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1022109b0;
  pvVar1 = operator_new(0x98);
  FUN_1003e1e90(pvVar1,param_1,param_2,param_3,param_4);
  *(void **)(param_1 + 0x18) = pvVar1;
  CMappingModel::setSubmitPolicy(param_1,0);
  return;
}

