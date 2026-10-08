
void FUN_100709220(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  undefined1 auVar1 [16];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f5bc0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  auVar1._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar1._0_8_ = PTR_shared_null_1021e15e8;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar1;
  return;
}

