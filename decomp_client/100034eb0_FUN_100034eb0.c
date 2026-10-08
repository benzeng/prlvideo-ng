
void FUN_100034eb0(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222f2c0;
  puVar1 = PTR_shared_null_1021e15d0;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15d0;
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined2 *)(param_1 + 0x38) = 0;
  return;
}

