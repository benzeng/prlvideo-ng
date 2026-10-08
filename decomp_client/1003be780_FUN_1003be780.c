
void FUN_1003be780(QObject *param_1,QObject *param_2)

{
  undefined8 *puVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102210720;
  puVar1 = operator_new(0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  return;
}

