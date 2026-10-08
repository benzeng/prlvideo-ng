
void FUN_100762f00(QObject *param_1,undefined4 param_2,QObject *param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102229270;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  puVar1 = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar2;
  *(undefined **)(param_1 + 0x28) = puVar1;
  param_1[0x30] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}

