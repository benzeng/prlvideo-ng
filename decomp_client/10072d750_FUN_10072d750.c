
void FUN_10072d750(QObject *param_1,QObject *param_2,QObject *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102227360;
  puVar1 = PTR_shared_null_1021e1288;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x58) = auVar3;
  auVar4._8_4_ = (int)PTR_shared_null_1021e12f0;
  auVar4._0_8_ = PTR_shared_null_1021e12f0;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e12f0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar4;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined **)(param_1 + 0x88) = puVar1;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(QObject **)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_10072db40(param_1);
  return;
}

