
void FUN_1003e72d0(QObject *param_1,undefined8 param_2,undefined8 param_3,QObject *param_4)

{
  undefined1 auVar1 [16];
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f2100;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15d0;
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar1;
  *(undefined4 *)(param_1 + 0x40) = 0x80000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_1021e12f0;
  return;
}

