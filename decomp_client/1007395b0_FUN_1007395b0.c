
void FUN_1007395b0(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f60c0;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)(param_1 + 0x30) = puVar1;
  return;
}

