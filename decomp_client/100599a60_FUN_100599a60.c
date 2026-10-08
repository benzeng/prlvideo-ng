
void FUN_100599a60(QObject *param_1,CMappingValueHandler *param_2,undefined8 param_3,
                  QObject *param_4)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f3c90;
  *(CMappingValueHandler **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  pvVar1 = operator_new(0x18);
  FUN_10059d230(pvVar1,param_2,param_4);
  CMappingController::setValueHandler(param_2);
  return;
}

