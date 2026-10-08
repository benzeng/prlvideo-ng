
void FUN_1005d9820(QObject *param_1,QObject *param_2)

{
  undefined1 auVar1 [16];
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f4400;
  *(QObject **)(param_1 + 0x10) = param_2;
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar1;
  param_1[0x30] = (QObject)0x0;
  FUN_1005d9900(param_1);
  FUN_1005da280(param_1);
  return;
}

