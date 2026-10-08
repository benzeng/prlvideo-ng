
void FUN_1001d7750(QObject *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ef100;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  auVar1._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar1._0_8_ = PTR_shared_null_1021e15d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

