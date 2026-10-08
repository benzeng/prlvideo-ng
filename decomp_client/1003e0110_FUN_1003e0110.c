
void FUN_1003e0110(QObject *param_1,CMappingValueHandler *param_2,undefined8 param_3,
                  QObject *param_4)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f1f80;
  *(CMappingValueHandler **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  pvVar1 = operator_new(0x18);
  FUN_1003f9a80(pvVar1,param_3,param_4);
  CMappingController::setValueHandler(param_2);
  return;
}

