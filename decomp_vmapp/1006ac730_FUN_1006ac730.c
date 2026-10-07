
void FUN_1006ac730(undefined4 *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  *param_1 = 2;
  *(undefined **)(param_1 + 2) = PTR_shared_null_100ba2180;
  puVar1 = PTR_shared_null_100ba2188;
  *(undefined **)(param_1 + 4) = PTR_shared_null_100ba2188;
  auVar2._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar2._0_8_ = PTR_shared_null_100ba20d0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 10) = auVar2;
  *(undefined **)(param_1 + 0xe) = puVar1;
  QRegExp::QRegExp((QRegExp *)(param_1 + 0x10));
  param_1[0x12] = 0;
  *(undefined **)(param_1 + 0x14) = puVar1;
  *(undefined **)(param_1 + 0x16) = PTR_shared_null_100ba20d0;
  param_1[0x18] = 0;
  auVar3._8_4_ = (int)puVar1;
  auVar3._0_8_ = puVar1;
  auVar3._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar3;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 **)(param_1 + 6) = param_1 + 6;
  *(undefined4 **)(param_1 + 8) = param_1 + 6;
  return;
}

