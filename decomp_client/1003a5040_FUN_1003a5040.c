
void FUN_1003a5040(QObject *param_1,undefined8 param_2,undefined8 param_3,QObject *param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f1c50;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = PTR_shared_null_1021e12f0;
  auVar2._8_4_ = (int)PTR_shared_null_1021e12f0;
  auVar2._0_8_ = PTR_shared_null_1021e12f0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e12f0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar2;
  *(undefined **)(param_1 + 0x38) = puVar1;
  return;
}

