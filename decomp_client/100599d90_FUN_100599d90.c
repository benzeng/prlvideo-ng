
void FUN_100599d90(QObject *param_1,undefined8 param_2,QObject *param_3,QObject *param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f3d50;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar2;
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(QObject **)(param_1 + 0x40) = param_3;
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x58) = 0x80000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

