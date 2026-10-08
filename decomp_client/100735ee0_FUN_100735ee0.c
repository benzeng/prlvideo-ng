
void FUN_100735ee0(QObject *param_1,QObject *param_2)

{
  undefined1 auVar1 [16];
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f5f40;
  *(QObject **)(param_1 + 0x10) = param_2;
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar1;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  QPixmap::QPixmap((QPixmap *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}

