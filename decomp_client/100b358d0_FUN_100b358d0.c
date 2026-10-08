
void FUN_100b358d0(QRegExp *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  QRegExp::QRegExp(param_1);
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x20) = 0;
  auVar2._8_4_ = (int)puVar1;
  auVar2._0_8_ = puVar1;
  auVar2._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}

