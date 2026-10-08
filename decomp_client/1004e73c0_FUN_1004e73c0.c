
void FUN_1004e73c0(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10221a020;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e1288;
  puVar1 = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x30) = 0x1d;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  auVar3._8_4_ = (int)puVar1;
  auVar3._0_8_ = puVar1;
  auVar3._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar3;
  return;
}

