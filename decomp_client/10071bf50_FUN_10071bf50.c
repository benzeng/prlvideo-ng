
void FUN_10071bf50(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f5c80;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15d0;
  puVar1 = PTR_shared_null_1021e15e8;
  auVar2._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar2._0_8_ = PTR_shared_null_1021e15e8;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar2;
  *(undefined **)(param_1 + 0x38) = puVar1;
  FUN_1001c2610(param_1 + 0x40);
  return;
}

