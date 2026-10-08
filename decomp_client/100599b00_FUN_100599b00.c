
void FUN_100599b00(CMappingController *param_1,CMappingModel *param_2,QObject *param_3)

{
  void *pvVar1;
  
  CMappingController::CMappingController(param_1,param_2,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10221d7f0;
  pvVar1 = operator_new(0x20);
  FUN_100599a60(pvVar1,param_1,param_2,param_1);
  *(void **)(param_1 + 0x18) = pvVar1;
  return;
}

