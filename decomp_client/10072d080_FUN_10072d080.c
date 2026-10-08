
void FUN_10072d080(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_30;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102227360;
  puVar1 = PTR_shared_null_1021e1288;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined **)(param_1 + 0x28) = puVar1;
  uVar2 = QString::fromAscii_helper("normal",6);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uStack_30 = auVar3._8_8_;
  *(undefined **)(param_1 + 0x38) = puVar1;
  *(undefined8 *)(param_1 + 0x40) = uStack_30;
  *(undefined **)(param_1 + 0x48) = puVar1;
  *(undefined8 *)(param_1 + 0x50) = uStack_30;
  *(undefined **)(param_1 + 0x58) = puVar1;
  *(undefined8 *)(param_1 + 0x60) = uStack_30;
  auVar4._8_4_ = (int)PTR_shared_null_1021e12f0;
  auVar4._0_8_ = PTR_shared_null_1021e12f0;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e12f0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar4;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined **)(param_1 + 0x88) = puVar1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}

