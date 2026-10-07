
void FUN_1006ac5f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_shared_null_100ba20d0;
  *param_1 = PTR_shared_null_100ba20d0;
  QRegExp::QRegExp((QRegExp *)(param_1 + 1));
  param_1[2] = puVar1;
  QRegExp::QRegExp((QRegExp *)(param_1 + 3));
  *(undefined4 *)(param_1 + 4) = 0;
  puVar2 = PTR_shared_null_100ba2188;
  param_1[5] = PTR_shared_null_100ba2188;
  param_1[6] = puVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  auVar3._8_4_ = (int)puVar2;
  auVar3._0_8_ = puVar2;
  auVar3._12_4_ = (int)((ulong)puVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar3;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = puVar2;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = PTR_shared_null_100ba20d8;
  return;
}

