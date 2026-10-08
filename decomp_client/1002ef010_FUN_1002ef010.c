
void FUN_1002ef010(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021ef8c0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  auVar2._8_4_ = (int)puVar1;
  auVar2._0_8_ = puVar1;
  auVar2._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar2;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 (*) [16])(param_1 + 0x78) = auVar2;
  *(undefined8 *)(param_1 + 0x88) = 0x8000027500000000;
  return;
}

